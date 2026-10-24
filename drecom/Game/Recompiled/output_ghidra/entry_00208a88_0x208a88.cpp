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

// Function: entry_00208a88
// Address: 0x208a88 - 0x208a8c
void entry_00208a88_0x208a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208a88_0x208a88");
#endif

    ctx->pc = 0x208a88u;

    // 0x208a88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x208a8cu;
}
