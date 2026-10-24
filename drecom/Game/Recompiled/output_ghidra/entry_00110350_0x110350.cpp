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

// Function: entry_00110350
// Address: 0x110350 - 0x110370
void entry_00110350_0x110350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110350_0x110350");
#endif

    ctx->pc = 0x110350u;

label_110350:
    // 0x110350: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x110350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x110354: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x110354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110358: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x110358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11035c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x11035cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x110360: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x110360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110364: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x110364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110368: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x110368u;
    {
        const bool branch_taken_0x110368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110368u;
        // 0x11036c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110368) {
            ctx->pc = 0x110350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110350;
        }
    }
    ctx->pc = 0x110370u;
}
