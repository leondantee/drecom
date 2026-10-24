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

// Function: entry_002789d8
// Address: 0x2789d8 - 0x2789dc
void entry_002789d8_0x2789d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002789d8_0x2789d8");
#endif

    ctx->pc = 0x2789d8u;

    // 0x2789d8: 0x24458a20  addiu       $a1, $v0, -0x75E0
    ctx->pc = 0x2789d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937120));
    ctx->pc = 0x2789dcu;
}
