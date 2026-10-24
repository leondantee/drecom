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

// Function: entry_0032e0d4
// Address: 0x32e0d4 - 0x32e0d8
void entry_0032e0d4_0x32e0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e0d4_0x32e0d4");
#endif

    ctx->pc = 0x32e0d4u;

    // 0x32e0d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x32e0d8u;
}
