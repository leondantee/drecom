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

// Function: entry_00377b34
// Address: 0x377b34 - 0x377b38
void entry_00377b34_0x377b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377b34_0x377b34");
#endif

    ctx->pc = 0x377b34u;

    // 0x377b34: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    ctx->pc = 0x377b38u;
}
