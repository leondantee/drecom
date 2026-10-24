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

// Function: entry_003405ec
// Address: 0x3405ec - 0x3405f0
void entry_003405ec_0x3405ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003405ec_0x3405ec");
#endif

    ctx->pc = 0x3405ecu;

    // 0x3405ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3405ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x3405f0u;
}
