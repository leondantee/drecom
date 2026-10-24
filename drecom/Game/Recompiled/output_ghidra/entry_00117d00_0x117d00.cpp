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

// Function: entry_00117d00
// Address: 0x117d00 - 0x117d04
void entry_00117d00_0x117d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d00_0x117d00");
#endif

    ctx->pc = 0x117d00u;

    // 0x117d00: 0x2442d9b0  addiu       $v0, $v0, -0x2650
    ctx->pc = 0x117d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
    ctx->pc = 0x117d04u;
}
