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

// Function: entry_003630ec
// Address: 0x3630ec - 0x3630f0
void entry_003630ec_0x3630ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003630ec_0x3630ec");
#endif

    ctx->pc = 0x3630ecu;

    // 0x3630ec: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3630ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->pc = 0x3630f0u;
}
