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

// Function: caseD_1
// Address: 0x186718 - 0x186758
void caseD_1_0x186718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x186718");
#endif

    switch (ctx->pc) {
        case 0x18672cu: goto label_18672c;
        case 0x18673cu: goto label_18673c;
        default: break;
    }

    ctx->pc = 0x186718u;

    // 0x186718: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18671c: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x18671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x186720: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x186720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x186724: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x186724u;
    SET_GPR_U32(ctx, 31, 0x18672Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x186724u, 0x18672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18672Cu;
label_18672c:
    // 0x18672c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x18672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186730: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x186730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186734: 0xc0455e6  jal         func_115798
    ctx->pc = 0x186734u;
    SET_GPR_U32(ctx, 31, 0x18673Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x186734u, 0x18673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18673Cu;
label_18673c:
    // 0x18673c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x186740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186744: 0x0  nop
    ctx->pc = 0x186744u;
    // NOP
    // 0x186748: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18674c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18674cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x186750: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x186750u;
    {
        const bool branch_taken_0x186750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186750) {
            ctx->pc = 0x1867C8u;
            return;
        }
    }
    ctx->pc = 0x186758u;
}
