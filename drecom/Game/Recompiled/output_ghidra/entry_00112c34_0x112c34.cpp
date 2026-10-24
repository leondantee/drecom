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

// Function: entry_00112c34
// Address: 0x112c34 - 0x112c44
void entry_00112c34_0x112c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c34_0x112c34");
#endif

    ctx->pc = 0x112c34u;

    // 0x112c34: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x112c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x112c38: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112c3c: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x112c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x112c40: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x112c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112c44u;
}
