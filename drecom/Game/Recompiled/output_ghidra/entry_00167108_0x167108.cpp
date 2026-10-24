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

// Function: entry_00167108
// Address: 0x167108 - 0x167110
void entry_00167108_0x167108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167108_0x167108");
#endif

    ctx->pc = 0x167108u;

    // 0x167108: 0xa023aab5  sb          $v1, -0x554B($at)
    ctx->pc = 0x167108u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294945461), (uint8_t)GPR_U32(ctx, 3));
    // 0x16710c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x167110u;
}
