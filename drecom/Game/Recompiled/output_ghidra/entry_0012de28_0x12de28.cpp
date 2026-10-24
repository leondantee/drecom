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

// Function: entry_0012de28
// Address: 0x12de28 - 0x12de40
void entry_0012de28_0x12de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012de28_0x12de28");
#endif

    ctx->pc = 0x12de28u;

    // 0x12de28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12de2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12de30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12de34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12de34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12de38: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x12DE38u;
    {
        const bool branch_taken_0x12de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de38) {
            ctx->pc = 0x12E1A4u;
            return;
        }
    }
    ctx->pc = 0x12DE40u;
}
