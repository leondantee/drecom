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

// Function: entry_0033b67c
// Address: 0x33b67c - 0x33b690
void entry_0033b67c_0x33b67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b67c_0x33b67c");
#endif

    ctx->pc = 0x33b67cu;

    // 0x33b67c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b680: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x33b680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x33b684: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b688: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x33b688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x33b68c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33b68cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x33b690u;
}
