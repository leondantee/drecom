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

// Function: entry_00138e58
// Address: 0x138e58 - 0x138e60
void entry_00138e58_0x138e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138e58_0x138e58");
#endif

    ctx->pc = 0x138e58u;

    // 0x138e58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138e5c: 0x0  nop
    ctx->pc = 0x138e5cu;
    // NOP
    ctx->pc = 0x138e60u;
}
