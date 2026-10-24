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

// Function: entry_0036be18
// Address: 0x36be18 - 0x36be20
void entry_0036be18_0x36be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036be18_0x36be18");
#endif

    ctx->pc = 0x36be18u;

    // 0x36be18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36be18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36be1c: 0x0  nop
    ctx->pc = 0x36be1cu;
    // NOP
    ctx->pc = 0x36be20u;
}
