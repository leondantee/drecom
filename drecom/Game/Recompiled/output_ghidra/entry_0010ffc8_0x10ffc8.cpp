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

// Function: entry_0010ffc8
// Address: 0x10ffc8 - 0x10ffcc
void entry_0010ffc8_0x10ffc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ffc8_0x10ffc8");
#endif

    ctx->pc = 0x10ffc8u;

    // 0x10ffc8: 0x24425200  addiu       $v0, $v0, 0x5200
    ctx->pc = 0x10ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    ctx->pc = 0x10ffccu;
}
