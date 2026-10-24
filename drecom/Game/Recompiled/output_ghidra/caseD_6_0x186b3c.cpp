#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_6
// Address: 0x186b3c - 0x186b84
void caseD_6_0x186b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x186b3c");
#endif

    switch (ctx->pc) {
        case 0x186b50u: goto label_186b50;
        case 0x186b60u: goto label_186b60;
        default: break;
    }

    ctx->pc = 0x186b3cu;

    // 0x186b3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186b40: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x186b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x186b44: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x186b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x186b48: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x186B48u;
    SET_GPR_U32(ctx, 31, 0x186B50u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x186B48u, 0x186B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B50u;
label_186b50:
    // 0x186b50: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x186b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186b54: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x186b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186b58: 0xc0455e6  jal         func_115798
    ctx->pc = 0x186B58u;
    SET_GPR_U32(ctx, 31, 0x186B60u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x186B58u, 0x186B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B60u;
label_186b60:
    // 0x186b60: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x186b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x186b64: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x186b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x186b68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186b70: 0x0  nop
    ctx->pc = 0x186b70u;
    // NOP
    // 0x186b74: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186b78: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186b78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186b7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x186B7Cu;
    {
        const bool branch_taken_0x186b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b7c) {
            ctx->pc = 0x186BF0u;
            return;
        }
    }
    ctx->pc = 0x186B84u;
}
