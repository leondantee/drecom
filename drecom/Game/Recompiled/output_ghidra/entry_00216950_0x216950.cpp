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

// Function: entry_00216950
// Address: 0x216950 - 0x216970
void entry_00216950_0x216950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216950_0x216950");
#endif

    ctx->pc = 0x216950u;

label_216950:
    // 0x216950: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x216950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x216954: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x216954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216958: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x216958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21695c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21695cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x216960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x216960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x216964: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x216964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x216968: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x216968u;
    {
        const bool branch_taken_0x216968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216968u;
        // 0x21696c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216968) {
            ctx->pc = 0x216950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216950;
        }
    }
    ctx->pc = 0x216970u;
}
