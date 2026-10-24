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

// Function: entry_002164f4
// Address: 0x2164f4 - 0x2164fc
void entry_002164f4_0x2164f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002164f4_0x2164f4");
#endif

    ctx->pc = 0x2164f4u;

    // 0x2164f4: 0x2484ca78  addiu       $a0, $a0, -0x3588
    ctx->pc = 0x2164f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953592));
    // 0x2164f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2164f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2164fcu;
}
