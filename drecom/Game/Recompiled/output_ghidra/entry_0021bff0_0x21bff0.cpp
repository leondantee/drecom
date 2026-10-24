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

// Function: entry_0021bff0
// Address: 0x21bff0 - 0x21bff8
void entry_0021bff0_0x21bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021bff0_0x21bff0");
#endif

    ctx->pc = 0x21bff0u;

    // 0x21bff0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x21bff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21bff4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21bff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21bff8u;
}
