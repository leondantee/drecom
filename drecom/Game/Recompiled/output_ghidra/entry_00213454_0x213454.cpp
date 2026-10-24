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

// Function: entry_00213454
// Address: 0x213454 - 0x213460
void entry_00213454_0x213454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213454_0x213454");
#endif

    ctx->pc = 0x213454u;

    // 0x213454: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x213454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x213458: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x213458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x21345c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x21345cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    ctx->pc = 0x213460u;
}
