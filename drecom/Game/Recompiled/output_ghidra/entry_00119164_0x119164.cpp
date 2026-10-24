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

// Function: entry_00119164
// Address: 0x119164 - 0x119178
void entry_00119164_0x119164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119164_0x119164");
#endif

    ctx->pc = 0x119164u;

    // 0x119164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119164u;
    {
        const bool branch_taken_0x119164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119164u;
        // 0x119168: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119164) {
            ctx->pc = 0x119178u;
            return;
        }
    }
    ctx->pc = 0x11916Cu;
    // 0x11916c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x119170: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x119170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x119174: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x119174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x119178u;
}
