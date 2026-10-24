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

// Function: entry_0033af9c
// Address: 0x33af9c - 0x33afdc
void entry_0033af9c_0x33af9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033af9c_0x33af9c");
#endif

    switch (ctx->pc) {
        case 0x33afd4u: goto label_33afd4;
        default: break;
    }

    ctx->pc = 0x33af9cu;

    // 0x33af9c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x33af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x33afa0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33AFA0u;
    {
        const bool branch_taken_0x33afa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33afa0) {
            ctx->pc = 0x33AFDCu;
            return;
        }
    }
    ctx->pc = 0x33AFA8u;
    // 0x33afa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33afac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33afb0: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x33afb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33afb4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33afb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33afb8: 0x82220005  lb          $v0, 0x5($s1)
    ctx->pc = 0x33afb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x33afbc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x33afbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33afc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33afc4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33afc4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33afc8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33afc8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33afcc: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33AFCCu;
    SET_GPR_U32(ctx, 31, 0x33AFD4u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33AFCCu, 0x33AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFD4u;
label_33afd4:
    // 0x33afd4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x33AFD4u;
    {
        const bool branch_taken_0x33afd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33afd4) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AFDCu;
}
