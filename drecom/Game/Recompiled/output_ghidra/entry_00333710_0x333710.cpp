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

// Function: entry_00333710
// Address: 0x333710 - 0x333740
void entry_00333710_0x333710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333710_0x333710");
#endif

    ctx->pc = 0x333710u;

    // 0x333710: 0x26160620  addiu       $s6, $s0, 0x620
    ctx->pc = 0x333710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x333714: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x333714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x333718: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x333718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x33371c: 0x1a60001c  blez        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x33371Cu;
    {
        const bool branch_taken_0x33371c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x33371c) {
            ctx->pc = 0x333790u;
            return;
        }
    }
    ctx->pc = 0x333724u;
    // 0x333724: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333728: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x333728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x33372c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x33372cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333730: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x333730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x333734: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333734u;
    {
        const bool branch_taken_0x333734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333734) {
            ctx->pc = 0x333740u;
            return;
        }
    }
    ctx->pc = 0x33373Cu;
    // 0x33373c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x33373cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->pc = 0x333740u;
}
