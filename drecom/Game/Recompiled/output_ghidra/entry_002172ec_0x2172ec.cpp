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

// Function: entry_002172ec
// Address: 0x2172ec - 0x2172f4
void entry_002172ec_0x2172ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002172ec_0x2172ec");
#endif

    ctx->pc = 0x2172ecu;

    // 0x2172ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2172f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2172f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x2172f4u;
}
