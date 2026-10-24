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

// Function: entry_0019b298
// Address: 0x19b298 - 0x19b2a0
void entry_0019b298_0x19b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b298_0x19b298");
#endif

    ctx->pc = 0x19b298u;

    // 0x19b298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b29c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19b29cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19b2a0u;
}
