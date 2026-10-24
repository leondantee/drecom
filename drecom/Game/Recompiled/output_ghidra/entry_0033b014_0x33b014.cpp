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

// Function: entry_0033b014
// Address: 0x33b014 - 0x33b060
void entry_0033b014_0x33b014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b014_0x33b014");
#endif

    switch (ctx->pc) {
        case 0x33b058u: goto label_33b058;
        default: break;
    }

    ctx->pc = 0x33b014u;

    // 0x33b014: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x33b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x33b018: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33B018u;
    {
        const bool branch_taken_0x33b018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b018) {
            ctx->pc = 0x33B060u;
            return;
        }
    }
    ctx->pc = 0x33B020u;
    // 0x33b020: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x33b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33b024: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33b024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b02c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b030: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x33b034: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33b034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b03c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b040: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x33b040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b044: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33b048: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33b048u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b04c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33b04cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b050: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33B050u;
    SET_GPR_U32(ctx, 31, 0x33B058u);
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33B050u, 0x33B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B058u;
label_33b058:
    // 0x33b058: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x33B058u;
    {
        const bool branch_taken_0x33b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b058) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33B060u;
}
