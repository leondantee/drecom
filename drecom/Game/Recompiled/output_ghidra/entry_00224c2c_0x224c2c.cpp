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

// Function: entry_00224c2c
// Address: 0x224c2c - 0x224c34
void entry_00224c2c_0x224c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224c2c_0x224c2c");
#endif

    ctx->pc = 0x224c2cu;

    // 0x224c2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x224c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x224c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x224c34u;
}
