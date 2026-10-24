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

// Function: entry_0010c810
// Address: 0x10c810 - 0x10c820
void entry_0010c810_0x10c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c810_0x10c810");
#endif

    ctx->pc = 0x10c810u;

    // 0x10c810: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x10c810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10c814: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c818: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10C818u;
    {
        const bool branch_taken_0x10c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C818u;
        // 0x10c81c: 0x90620040  lbu         $v0, 0x40($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c818) {
            ctx->pc = 0x10C850u;
            return;
        }
    }
    ctx->pc = 0x10C820u;
}
