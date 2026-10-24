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

// Function: entry_002edfc4
// Address: 0x2edfc4 - 0x2edfc8
void entry_002edfc4_0x2edfc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002edfc4_0x2edfc4");
#endif

    ctx->pc = 0x2edfc4u;

    // 0x2edfc4: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x2edfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x2edfc8u;
}
