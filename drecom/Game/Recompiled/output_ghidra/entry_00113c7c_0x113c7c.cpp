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

// Function: entry_00113c7c
// Address: 0x113c7c - 0x113c90
void entry_00113c7c_0x113c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c7c_0x113c7c");
#endif

    ctx->pc = 0x113c7cu;

    // 0x113c7c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x113c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113c84: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x113c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x113c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113c8c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x113c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    ctx->pc = 0x113c90u;
}
