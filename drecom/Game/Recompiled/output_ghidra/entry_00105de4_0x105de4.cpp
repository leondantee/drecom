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

// Function: entry_00105de4
// Address: 0x105de4 - 0x105df8
void entry_00105de4_0x105de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105de4_0x105de4");
#endif

    ctx->pc = 0x105de4u;

    // 0x105de4: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x105DE4u;
    {
        const bool branch_taken_0x105de4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DE4u;
        // 0x105de8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105de4) {
            ctx->pc = 0x105DF8u;
            return;
        }
    }
    ctx->pc = 0x105DECu;
    // 0x105dec: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x105df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105DF0u;
    {
        const bool branch_taken_0x105df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DF0u;
        // 0x105df4: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105df0) {
            ctx->pc = 0x105DFCu;
            return;
        }
    }
    ctx->pc = 0x105DF8u;
}
