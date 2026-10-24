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

// Function: entry_00207a04
// Address: 0x207a04 - 0x207a10
void entry_00207a04_0x207a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207a04_0x207a04");
#endif

    ctx->pc = 0x207a04u;

    // 0x207a04: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x207a04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x207a08: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x207a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207a0c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x207a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x207a10u;
}
