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

// Function: entry_00208a8c
// Address: 0x208a8c - 0x208a90
void entry_00208a8c_0x208a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208a8c_0x208a8c");
#endif

    ctx->pc = 0x208a8cu;

    // 0x208a8c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x208a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    ctx->pc = 0x208a90u;
}
