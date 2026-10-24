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

// Function: entry_001b4708
// Address: 0x1b4708 - 0x1b4710
void entry_001b4708_0x1b4708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4708_0x1b4708");
#endif

    ctx->pc = 0x1b4708u;

    // 0x1b4708: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b4708u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b470c: 0x0  nop
    ctx->pc = 0x1b470cu;
    // NOP
    ctx->pc = 0x1b4710u;
}
