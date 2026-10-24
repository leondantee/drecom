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

// Function: entry_002a923c
// Address: 0x2a923c - 0x2a925c
void entry_002a923c_0x2a923c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a923c_0x2a923c");
#endif

    ctx->pc = 0x2a923cu;

    // 0x2a923c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9240: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a9240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a9244: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a9244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a9248: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a9248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a924c: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x2a924cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2a9250: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9250u;
    {
        const bool branch_taken_0x2a9250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9250) {
            ctx->pc = 0x2A925Cu;
            return;
        }
    }
    ctx->pc = 0x2A9258u;
    // 0x2a9258: 0x24112710  addiu       $s1, $zero, 0x2710
    ctx->pc = 0x2a9258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->pc = 0x2a925cu;
}
