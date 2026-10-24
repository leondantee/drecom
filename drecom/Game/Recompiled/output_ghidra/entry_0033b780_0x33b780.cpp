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

// Function: entry_0033b780
// Address: 0x33b780 - 0x33b788
void entry_0033b780_0x33b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b780_0x33b780");
#endif

    ctx->pc = 0x33b780u;

    // 0x33b780: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x33b780u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x33b784: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33b784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x33b788u;
}
