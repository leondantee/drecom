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

// Function: entry_0033ae5c
// Address: 0x33ae5c - 0x33aea0
void entry_0033ae5c_0x33ae5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ae5c_0x33ae5c");
#endif

    switch (ctx->pc) {
        case 0x33ae98u: goto label_33ae98;
        default: break;
    }

    ctx->pc = 0x33ae5cu;

    // 0x33ae5c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x33ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x33ae60: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33AE60u;
    {
        const bool branch_taken_0x33ae60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ae60) {
            ctx->pc = 0x33AEA0u;
            return;
        }
    }
    ctx->pc = 0x33AE68u;
    // 0x33ae68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ae6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ae70: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x33ae70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33ae74: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33ae74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae78: 0x82220005  lb          $v0, 0x5($s1)
    ctx->pc = 0x33ae78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x33ae7c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x33ae7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae80: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x33ae80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x33ae84: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x33ae84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33ae8c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33ae8cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ae90: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33AE90u;
    SET_GPR_U32(ctx, 31, 0x33AE98u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33AE90u, 0x33AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE98u;
label_33ae98:
    // 0x33ae98: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x33AE98u;
    {
        const bool branch_taken_0x33ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae98) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AEA0u;
}
