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

// Function: entry_00211fb8
// Address: 0x211fb8 - 0x211fe8
void entry_00211fb8_0x211fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211fb8_0x211fb8");
#endif

    switch (ctx->pc) {
        case 0x211fdcu: goto label_211fdc;
        default: break;
    }

    ctx->pc = 0x211fb8u;

    // 0x211fb8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x211FB8u;
    {
        const bool branch_taken_0x211fb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x211fb8) {
            ctx->pc = 0x211FE8u;
            return;
        }
    }
    ctx->pc = 0x211FC0u;
    // 0x211fc0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x211fc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x211fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211fc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x211fc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fcc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x211fccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fd0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x211fd0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fd4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x211FD4u;
    SET_GPR_U32(ctx, 31, 0x211FDCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x211FD4u, 0x211FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FDCu;
label_211fdc:
    // 0x211fdc: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x211fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x211fe0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x211FE0u;
    {
        const bool branch_taken_0x211fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211fe0) {
            ctx->pc = 0x212028u;
            return;
        }
    }
    ctx->pc = 0x211FE8u;
}
