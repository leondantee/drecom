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

// Function: entry_002970ec
// Address: 0x2970ec - 0x2970f0
void entry_002970ec_0x2970ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002970ec_0x2970ec");
#endif

    ctx->pc = 0x2970ecu;

    // 0x2970ec: 0x8c23ca08  lw          $v1, -0x35F8($at)
    ctx->pc = 0x2970ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953480)));
    ctx->pc = 0x2970f0u;
}
