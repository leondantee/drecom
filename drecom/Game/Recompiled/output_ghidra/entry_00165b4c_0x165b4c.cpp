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

// Function: entry_00165b4c
// Address: 0x165b4c - 0x165b50
void entry_00165b4c_0x165b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b4c_0x165b4c");
#endif

    ctx->pc = 0x165b4cu;

    // 0x165b4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x165b50u;
}
