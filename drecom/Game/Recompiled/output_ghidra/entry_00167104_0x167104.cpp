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

// Function: entry_00167104
// Address: 0x167104 - 0x167108
void entry_00167104_0x167104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167104_0x167104");
#endif

    ctx->pc = 0x167104u;

    // 0x167104: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    ctx->pc = 0x167108u;
}
