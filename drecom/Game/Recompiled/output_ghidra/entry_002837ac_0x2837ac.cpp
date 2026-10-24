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

// Function: entry_002837ac
// Address: 0x2837ac - 0x2837b0
void entry_002837ac_0x2837ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002837ac_0x2837ac");
#endif

    ctx->pc = 0x2837acu;

    // 0x2837ac: 0x244454b0  addiu       $a0, $v0, 0x54B0
    ctx->pc = 0x2837acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21680));
    ctx->pc = 0x2837b0u;
}
