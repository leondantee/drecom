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

// Function: entry_0011caa0
// Address: 0x11caa0 - 0x11cac4
void entry_0011caa0_0x11caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011caa0_0x11caa0");
#endif

    ctx->pc = 0x11caa0u;

    // 0x11caa0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11caa4: 0x1010  mfhi        $v0
    ctx->pc = 0x11caa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11caa8: 0x1812  mflo        $v1
    ctx->pc = 0x11caa8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x11caac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x11caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x11cab0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11cab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cab4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x11cab4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11cab8: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x11cabc: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CABCu;
    {
        const bool branch_taken_0x11cabc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x11cabc) {
            ctx->pc = 0x11CAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CABCu;
            // 0x11cac0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CAC4u;
            return;
        }
    }
    ctx->pc = 0x11CAC4u;
}
