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

// Function: entry_00101614
// Address: 0x101614 - 0x101638
void entry_00101614_0x101614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101614_0x101614");
#endif

    ctx->pc = 0x101614u;

    // 0x101614: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x101614u;
    {
        const bool branch_taken_0x101614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101614u;
        // 0x101618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101614) {
            ctx->pc = 0x10168Cu;
            return;
        }
    }
    ctx->pc = 0x10161Cu;
    // 0x10161c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x10161cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x101620: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x101620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x101624: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x101624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x101628: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x101628u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
    // 0x10162c: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x101630: 0x3c0a1f00  lui         $t2, 0x1F00
    ctx->pc = 0x101630u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7936 << 16));
    // 0x101634: 0x35085000  ori         $t0, $t0, 0x5000
    ctx->pc = 0x101634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20480);
    ctx->pc = 0x101638u;
}
