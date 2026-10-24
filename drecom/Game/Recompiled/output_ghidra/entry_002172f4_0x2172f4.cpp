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

// Function: entry_002172f4
// Address: 0x2172f4 - 0x2172fc
void entry_002172f4_0x2172f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002172f4_0x2172f4");
#endif

    ctx->pc = 0x2172f4u;

    // 0x2172f4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x2172f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x2172f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2172f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2172fcu;
}
