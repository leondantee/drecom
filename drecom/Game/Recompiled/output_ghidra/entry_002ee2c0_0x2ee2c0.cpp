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

// Function: entry_002ee2c0
// Address: 0x2ee2c0 - 0x2ee2c8
void entry_002ee2c0_0x2ee2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee2c0_0x2ee2c0");
#endif

    ctx->pc = 0x2ee2c0u;

    // 0x2ee2c0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2ee2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee2c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ee2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2ee2c8u;
}
