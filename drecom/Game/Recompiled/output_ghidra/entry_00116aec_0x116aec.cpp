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

// Function: entry_00116aec
// Address: 0x116aec - 0x116afc
void entry_00116aec_0x116aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116aec_0x116aec");
#endif

    ctx->pc = 0x116aecu;

    // 0x116aec: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x116aecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x116af0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x116af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116af4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x116AF4u;
    {
        const bool branch_taken_0x116af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AF4u;
        // 0x116af8: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116af4) {
            ctx->pc = 0x116E50u;
            return;
        }
    }
    ctx->pc = 0x116AFCu;
}
