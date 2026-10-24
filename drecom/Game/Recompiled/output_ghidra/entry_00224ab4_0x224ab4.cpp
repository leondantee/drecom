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

// Function: entry_00224ab4
// Address: 0x224ab4 - 0x224ab8
void entry_00224ab4_0x224ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224ab4_0x224ab4");
#endif

    ctx->pc = 0x224ab4u;

    // 0x224ab4: 0x2445acf0  addiu       $a1, $v0, -0x5310
    ctx->pc = 0x224ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    ctx->pc = 0x224ab8u;
}
