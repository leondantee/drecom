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

// Function: entry_00361c40
// Address: 0x361c40 - 0x361c48
void entry_00361c40_0x361c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361c40_0x361c40");
#endif

    ctx->pc = 0x361c40u;

    // 0x361c40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x361c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x361c44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x361c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x361c48u;
}
