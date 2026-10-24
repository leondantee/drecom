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

// Function: entry_0016bfd0
// Address: 0x16bfd0 - 0x16c000
void entry_0016bfd0_0x16bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bfd0_0x16bfd0");
#endif

    switch (ctx->pc) {
        case 0x16bfe0u: goto label_16bfe0;
        default: break;
    }

    ctx->pc = 0x16bfd0u;

    // 0x16bfd0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16bfd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16bfd4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16bfd8: 0xc05b0f0  jal         func_16C3C0
    ctx->pc = 0x16BFD8u;
    SET_GPR_U32(ctx, 31, 0x16BFE0u);
    ctx->pc = 0x16C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3C0u, 0x16BFD8u, 0x16BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFE0u;
label_16bfe0:
    // 0x16bfe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BFE0u;
    {
        const bool branch_taken_0x16bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bfe0) {
            ctx->pc = 0x16C000u;
            return;
        }
    }
    ctx->pc = 0x16BFE8u;
    // 0x16bfe8: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x16bfe8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16bfec: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x16bfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16bff0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bff4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16bff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16bff8: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16bff8u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bffc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x16bffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->pc = 0x16c000u;
}
