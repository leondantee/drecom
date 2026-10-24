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

// Function: entry_001a1528
// Address: 0x1a1528 - 0x1a1530
void entry_001a1528_0x1a1528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1528_0x1a1528");
#endif

    ctx->pc = 0x1a1528u;

    // 0x1a1528: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a152c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a152cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1a1530u;
}
