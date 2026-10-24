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

// Function: entry_00113044
// Address: 0x113044 - 0x113054
void entry_00113044_0x113044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113044_0x113044");
#endif

    ctx->pc = 0x113044u;

    // 0x113044: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x113044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x113048: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x113048u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11304c: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x11304cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x113050: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x113050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113054u;
}
