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

// Function: entry_001ac980
// Address: 0x1ac980 - 0x1ac988
void entry_001ac980_0x1ac980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac980_0x1ac980");
#endif

    ctx->pc = 0x1ac980u;

    // 0x1ac980: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac984: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1ac988u;
}
