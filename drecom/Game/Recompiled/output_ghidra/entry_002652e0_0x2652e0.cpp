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

// Function: entry_002652e0
// Address: 0x2652e0 - 0x2652e8
void entry_002652e0_0x2652e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002652e0_0x2652e0");
#endif

    ctx->pc = 0x2652e0u;

    // 0x2652e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2652e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2652e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2652e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x2652e8u;
}
