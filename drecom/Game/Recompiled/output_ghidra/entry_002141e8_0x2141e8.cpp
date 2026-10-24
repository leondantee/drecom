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

// Function: entry_002141e8
// Address: 0x2141e8 - 0x2141f0
void entry_002141e8_0x2141e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002141e8_0x2141e8");
#endif

    ctx->pc = 0x2141e8u;

    // 0x2141e8: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x2141e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x2141ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2141ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2141f0u;
}
