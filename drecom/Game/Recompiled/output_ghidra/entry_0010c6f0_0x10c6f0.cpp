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

// Function: entry_0010c6f0
// Address: 0x10c6f0 - 0x10c700
void entry_0010c6f0_0x10c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c6f0_0x10c6f0");
#endif

    ctx->pc = 0x10c6f0u;

    // 0x10c6f0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x10c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10c6f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c6f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10C6F8u;
    {
        const bool branch_taken_0x10c6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6F8u;
        // 0x10c6fc: 0x90620030  lbu         $v0, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6f8) {
            ctx->pc = 0x10C734u;
            return;
        }
    }
    ctx->pc = 0x10C700u;
}
