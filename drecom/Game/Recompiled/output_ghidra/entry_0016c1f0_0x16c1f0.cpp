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

// Function: entry_0016c1f0
// Address: 0x16c1f0 - 0x16c220
void entry_0016c1f0_0x16c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c1f0_0x16c1f0");
#endif

    switch (ctx->pc) {
        case 0x16c200u: goto label_16c200;
        default: break;
    }

    ctx->pc = 0x16c1f0u;

    // 0x16c1f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16c1f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c1f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16c1f8: 0xc05b0f0  jal         func_16C3C0
    ctx->pc = 0x16C1F8u;
    SET_GPR_U32(ctx, 31, 0x16C200u);
    ctx->pc = 0x16C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3C0u, 0x16C1F8u, 0x16C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C200u;
label_16c200:
    // 0x16c200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C200u;
    {
        const bool branch_taken_0x16c200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c200) {
            ctx->pc = 0x16C220u;
            return;
        }
    }
    ctx->pc = 0x16C208u;
    // 0x16c208: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x16c208u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c20c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16c210: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16c210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c214: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16c214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16c218: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16c218u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c21c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x16c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->pc = 0x16c220u;
}
