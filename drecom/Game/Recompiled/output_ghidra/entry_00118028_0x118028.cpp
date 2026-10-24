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

// Function: entry_00118028
// Address: 0x118028 - 0x118044
void entry_00118028_0x118028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118028_0x118028");
#endif

    ctx->pc = 0x118028u;

    // 0x118028: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x118028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11802c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x11802cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x118030: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118030u;
    {
        const bool branch_taken_0x118030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x118034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118030u;
        // 0x118034: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118030) {
            ctx->pc = 0x118044u;
            return;
        }
    }
    ctx->pc = 0x118038u;
    // 0x118038: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x118038u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11803c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11803Cu;
    {
        const bool branch_taken_0x11803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11803Cu;
        // 0x118040: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11803c) {
            ctx->pc = 0x118048u;
            return;
        }
    }
    ctx->pc = 0x118044u;
}
