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

// Function: entry_0021fbb4
// Address: 0x21fbb4 - 0x21fbb8
void entry_0021fbb4_0x21fbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fbb4_0x21fbb4");
#endif

    ctx->pc = 0x21fbb4u;

    // 0x21fbb4: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x21fbb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x21fbb8u;
}
