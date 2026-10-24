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

// Function: entry_00141ca8
// Address: 0x141ca8 - 0x141cb0
void entry_00141ca8_0x141ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ca8_0x141ca8");
#endif

    ctx->pc = 0x141ca8u;

    // 0x141ca8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x141ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x141cac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x141cb0u;
}
