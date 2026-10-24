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

// Function: entry_001092c8
// Address: 0x1092c8 - 0x1092fc
void entry_001092c8_0x1092c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092c8_0x1092c8");
#endif

    ctx->pc = 0x1092c8u;

    // 0x1092c8: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1092c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1092cc: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x1092ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48520);
    // 0x1092d0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1092d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1092d4: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1092D4u;
    {
        const bool branch_taken_0x1092d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1092D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092D4u;
        // 0x1092d8: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092d4) {
            ctx->pc = 0x10931Cu;
            return;
        }
    }
    ctx->pc = 0x1092DCu;
    // 0x1092dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1092DCu;
    {
        const bool branch_taken_0x1092dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1092dc) {
            ctx->pc = 0x1092FCu;
            return;
        }
    }
    ctx->pc = 0x1092E4u;
    // 0x1092e4: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1092E4u;
    {
        const bool branch_taken_0x1092e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x1092E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092E4u;
        // 0x1092e8: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092e4) {
            ctx->pc = 0x109314u;
            return;
        }
    }
    ctx->pc = 0x1092ECu;
    // 0x1092ec: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1092ECu;
    {
        const bool branch_taken_0x1092ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x1092F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092ECu;
        // 0x1092f0: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092ec) {
            ctx->pc = 0x10931Cu;
            return;
        }
    }
    ctx->pc = 0x1092F4u;
    // 0x1092f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1092F4u;
    {
        const bool branch_taken_0x1092f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092F4u;
        // 0x1092f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092f4) {
            ctx->pc = 0x109324u;
            return;
        }
    }
    ctx->pc = 0x1092FCu;
}
