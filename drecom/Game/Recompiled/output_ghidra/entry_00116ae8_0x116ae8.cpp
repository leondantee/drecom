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

// Function: entry_00116ae8
// Address: 0x116ae8 - 0x116aec
void entry_00116ae8_0x116ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ae8_0x116ae8");
#endif

    ctx->pc = 0x116ae8u;

    // 0x116ae8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x116ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x116aecu;
}
