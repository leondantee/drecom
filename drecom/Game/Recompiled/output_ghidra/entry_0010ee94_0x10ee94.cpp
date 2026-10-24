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

// Function: entry_0010ee94
// Address: 0x10ee94 - 0x10ee98
void entry_0010ee94_0x10ee94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ee94_0x10ee94");
#endif

    ctx->pc = 0x10ee94u;

    // 0x10ee94: 0x26b05030  addiu       $s0, $s5, 0x5030
    ctx->pc = 0x10ee94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20528));
    ctx->pc = 0x10ee98u;
}
