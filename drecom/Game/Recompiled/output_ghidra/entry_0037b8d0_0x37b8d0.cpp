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

// Function: entry_0037b8d0
// Address: 0x37b8d0 - 0x37b8e4
void entry_0037b8d0_0x37b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b8d0_0x37b8d0");
#endif

    ctx->pc = 0x37b8d0u;

    // 0x37b8d0: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b8d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b8d8: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b8dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x37B8DCu;
    {
        const bool branch_taken_0x37b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b8dc) {
            ctx->pc = 0x37B950u;
            return;
        }
    }
    ctx->pc = 0x37B8E4u;
}
