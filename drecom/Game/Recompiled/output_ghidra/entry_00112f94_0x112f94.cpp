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

// Function: entry_00112f94
// Address: 0x112f94 - 0x112f9c
void entry_00112f94_0x112f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f94_0x112f94");
#endif

    ctx->pc = 0x112f94u;

    // 0x112f94: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x112f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x112f98: 0x2f0b821  addu        $s7, $s7, $s0
    ctx->pc = 0x112f98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->pc = 0x112f9cu;
}
