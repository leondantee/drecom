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

// Function: entry_00217368
// Address: 0x217368 - 0x217370
void entry_00217368_0x217368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217368_0x217368");
#endif

    ctx->pc = 0x217368u;

    // 0x217368: 0xac43ab00  sw          $v1, -0x5500($v0)
    ctx->pc = 0x217368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945536), GPR_U32(ctx, 3));
    // 0x21736c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21736cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x217370u;
}
