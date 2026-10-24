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

// Function: entry_0032af30
// Address: 0x32af30 - 0x32af38
void entry_0032af30_0x32af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032af30_0x32af30");
#endif

    ctx->pc = 0x32af30u;

    // 0x32af30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32af30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32af34: 0x0  nop
    ctx->pc = 0x32af34u;
    // NOP
    ctx->pc = 0x32af38u;
}
