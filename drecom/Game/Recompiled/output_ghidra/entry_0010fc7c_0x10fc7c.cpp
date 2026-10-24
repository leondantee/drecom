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

// Function: entry_0010fc7c
// Address: 0x10fc7c - 0x10fc84
void entry_0010fc7c_0x10fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc7c_0x10fc7c");
#endif

    ctx->pc = 0x10fc7cu;

    // 0x10fc7c: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x10fc7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x10fc80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fc84u;
}
