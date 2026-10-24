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

// Function: entry_00106e38
// Address: 0x106e38 - 0x106e58
void entry_00106e38_0x106e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106e38_0x106e38");
#endif

    ctx->pc = 0x106e38u;

    // 0x106e38: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x106e38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106e3c: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106E3Cu;
    {
        const bool branch_taken_0x106e3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E3Cu;
        // 0x106e40: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e3c) {
            ctx->pc = 0x106E58u;
            return;
        }
    }
    ctx->pc = 0x106E44u;
    // 0x106e44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106e48: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x106e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x106e4c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x106E4Cu;
    {
        const bool branch_taken_0x106e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E4Cu;
        // 0x106e50: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e4c) {
            ctx->pc = 0x106E20u;
            return;
        }
    }
    ctx->pc = 0x106E54u;
    // 0x106e54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x106e58u;
}
