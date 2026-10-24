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

// Function: entry_001ae1ec
// Address: 0x1ae1ec - 0x1ae1f8
void entry_001ae1ec_0x1ae1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae1ec_0x1ae1ec");
#endif

    ctx->pc = 0x1ae1ecu;

    // 0x1ae1ec: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ae1f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae1f4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1ae1f8u;
}
