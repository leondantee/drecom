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

// Function: entry_0011827c
// Address: 0x11827c - 0x118280
void entry_0011827c_0x11827c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011827c_0x11827c");
#endif

    ctx->pc = 0x11827cu;

    // 0x11827c: 0x240b007e  addiu       $t3, $zero, 0x7E
    ctx->pc = 0x11827cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->pc = 0x118280u;
}
