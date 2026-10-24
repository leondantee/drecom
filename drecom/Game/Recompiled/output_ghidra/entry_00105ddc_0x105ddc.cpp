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

// Function: entry_00105ddc
// Address: 0x105ddc - 0x105de4
void entry_00105ddc_0x105ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ddc_0x105ddc");
#endif

    ctx->pc = 0x105ddcu;

    // 0x105ddc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x105DDCu;
    {
        const bool branch_taken_0x105ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DDCu;
        // 0x105de0: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ddc) {
            ctx->pc = 0x105D5Cu;
            return;
        }
    }
    ctx->pc = 0x105DE4u;
}
