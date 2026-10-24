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

// Function: entry_00116264
// Address: 0x116264 - 0x116270
void entry_00116264_0x116264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116264_0x116264");
#endif

    ctx->pc = 0x116264u;

    // 0x116264: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x116264u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x116268: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x116268u;
    {
        const bool branch_taken_0x116268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116268u;
        // 0x11626c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116268) {
            ctx->pc = 0x116248u;
            return;
        }
    }
    ctx->pc = 0x116270u;
}
