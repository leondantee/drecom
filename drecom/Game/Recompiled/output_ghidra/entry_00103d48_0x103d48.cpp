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

// Function: entry_00103d48
// Address: 0x103d48 - 0x103d70
void entry_00103d48_0x103d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103d48_0x103d48");
#endif

    ctx->pc = 0x103d48u;

    // 0x103d48: 0x32140001  andi        $s4, $s0, 0x1
    ctx->pc = 0x103d48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x103d4c: 0x1010  mfhi        $v0
    ctx->pc = 0x103d4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x103d50: 0x9012  mflo        $s2
    ctx->pc = 0x103d50u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x103d54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x103d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d58: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x103d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x103d5c: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x103D5Cu;
    {
        const bool branch_taken_0x103d5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D5Cu;
        // 0x103d60: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d5c) {
            ctx->pc = 0x103DA8u;
            return;
        }
    }
    ctx->pc = 0x103D64u;
    // 0x103d64: 0x3c0f0038  lui         $t7, 0x38
    ctx->pc = 0x103d64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)56 << 16));
    // 0x103d68: 0x3c190038  lui         $t9, 0x38
    ctx->pc = 0x103d68u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)56 << 16));
    // 0x103d6c: 0x0  nop
    ctx->pc = 0x103d6cu;
    // NOP
    ctx->pc = 0x103d70u;
}
