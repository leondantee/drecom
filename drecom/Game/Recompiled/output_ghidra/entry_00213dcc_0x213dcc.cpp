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

// Function: entry_00213dcc
// Address: 0x213dcc - 0x213de0
void entry_00213dcc_0x213dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213dcc_0x213dcc");
#endif

    ctx->pc = 0x213dccu;

    // 0x213dcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x213dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x213dd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x213dd4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x213dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x213dd8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x213DD8u;
    {
        const bool branch_taken_0x213dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DD8u;
        // 0x213ddc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dd8) {
            ctx->pc = 0x213EB0u;
            return;
        }
    }
    ctx->pc = 0x213DE0u;
}
