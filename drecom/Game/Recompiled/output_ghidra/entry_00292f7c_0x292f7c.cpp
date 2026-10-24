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

// Function: entry_00292f7c
// Address: 0x292f7c - 0x292f84
void entry_00292f7c_0x292f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292f7c_0x292f7c");
#endif

    ctx->pc = 0x292f7cu;

    // 0x292f7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292f80: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    ctx->pc = 0x292f84u;
}
