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

// Function: entry_00107a8c
// Address: 0x107a8c - 0x107a90
void entry_00107a8c_0x107a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a8c_0x107a8c");
#endif

    ctx->pc = 0x107a8cu;

    // 0x107a8c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x107a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x107a90u;
}
