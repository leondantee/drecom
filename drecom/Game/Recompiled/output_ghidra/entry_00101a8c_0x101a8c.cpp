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

// Function: entry_00101a8c
// Address: 0x101a8c - 0x101a90
void entry_00101a8c_0x101a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a8c_0x101a8c");
#endif

    ctx->pc = 0x101a8cu;

    // 0x101a8c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x101a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    ctx->pc = 0x101a90u;
}
