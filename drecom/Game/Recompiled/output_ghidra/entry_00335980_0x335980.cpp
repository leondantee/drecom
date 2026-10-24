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

// Function: entry_00335980
// Address: 0x335980 - 0x3359a0
void entry_00335980_0x335980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335980_0x335980");
#endif

    ctx->pc = 0x335980u;

    // 0x335980: 0x2aa60002  slti        $a2, $s5, 0x2
    ctx->pc = 0x335980u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x335984: 0x14c0ffd3  bnez        $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x335984u;
    {
        const bool branch_taken_0x335984 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x335984) {
            ctx->pc = 0x3358D4u;
            return;
        }
    }
    ctx->pc = 0x33598Cu;
    // 0x33598c: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x33598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335990: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335994: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x335998: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x335998u;
    {
        const bool branch_taken_0x335998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335998) {
            ctx->pc = 0x335B74u;
            return;
        }
    }
    ctx->pc = 0x3359A0u;
}
