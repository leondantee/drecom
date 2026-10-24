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

// Function: caseD_5
// Address: 0x1869d4 - 0x186a1c
void caseD_5_0x1869d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1869d4");
#endif

    switch (ctx->pc) {
        case 0x1869e8u: goto label_1869e8;
        case 0x1869f8u: goto label_1869f8;
        default: break;
    }

    ctx->pc = 0x1869d4u;

    // 0x1869d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1869d8: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x1869d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1869dc: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x1869dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x1869e0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1869E0u;
    SET_GPR_U32(ctx, 31, 0x1869E8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1869E0u, 0x1869E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869E8u;
label_1869e8:
    // 0x1869e8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1869e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1869ec: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x1869ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1869f0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1869F0u;
    SET_GPR_U32(ctx, 31, 0x1869F8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1869F0u, 0x1869F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869F8u;
label_1869f8:
    // 0x1869f8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1869f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1869fc: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x1869fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x186a00: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186a08: 0x0  nop
    ctx->pc = 0x186a08u;
    // NOP
    // 0x186a0c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186a10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186a10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186a14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x186A14u;
    {
        const bool branch_taken_0x186a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a14) {
            ctx->pc = 0x186A90u;
            return;
        }
    }
    ctx->pc = 0x186A1Cu;
}
