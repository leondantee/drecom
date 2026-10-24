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

// Function: entry_002634cc
// Address: 0x2634cc - 0x2634f8
void entry_002634cc_0x2634cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002634cc_0x2634cc");
#endif

    ctx->pc = 0x2634ccu;

    // 0x2634cc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2634ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2634d0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2634d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2634d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2634d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2634d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2634d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2634dc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2634dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2634e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2634e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2634e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2634e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2634e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2634E8u;
    {
        const bool branch_taken_0x2634e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634e8) {
            ctx->pc = 0x263510u;
            return;
        }
    }
    ctx->pc = 0x2634F0u;
    // 0x2634f0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2634f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2634f4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2634f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2634f8u;
}
