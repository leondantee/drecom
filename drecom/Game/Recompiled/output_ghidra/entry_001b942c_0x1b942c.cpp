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

// Function: entry_001b942c
// Address: 0x1b942c - 0x1b9464
void entry_001b942c_0x1b942c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b942c_0x1b942c");
#endif

    switch (ctx->pc) {
        case 0x1b9438u: goto label_1b9438;
        default: break;
    }

    ctx->pc = 0x1b942cu;

    // 0x1b942c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b942cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9430: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B9430u;
    SET_GPR_U32(ctx, 31, 0x1B9438u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9430u, 0x1B9438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9438u;
label_1b9438:
    // 0x1b9438: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b943c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9440: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b9440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x1b9444: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9444u;
    {
        const bool branch_taken_0x1b9444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9444) {
            ctx->pc = 0x1B9464u;
            return;
        }
    }
    ctx->pc = 0x1B944Cu;
    // 0x1b944c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9450: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b9450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b9454: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1b9454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9458: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1b9458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b945c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1B945Cu;
    {
        const bool branch_taken_0x1b945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b945c) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9464u;
}
