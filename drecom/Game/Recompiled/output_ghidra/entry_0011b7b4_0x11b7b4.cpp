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

// Function: entry_0011b7b4
// Address: 0x11b7b4 - 0x11b7c8
void entry_0011b7b4_0x11b7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7b4_0x11b7b4");
#endif

    ctx->pc = 0x11b7b4u;

    // 0x11b7b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7B4u;
    {
        const bool branch_taken_0x11b7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7B4u;
        // 0x11b7b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7b4) {
            ctx->pc = 0x11B7C8u;
            return;
        }
    }
    ctx->pc = 0x11B7BCu;
    // 0x11b7bc: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x11b7bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B7C0u;
    {
        const bool branch_taken_0x11b7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7C0u;
        // 0x11b7c4: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c0) {
            ctx->pc = 0x11B7D0u;
            return;
        }
    }
    ctx->pc = 0x11B7C8u;
}
