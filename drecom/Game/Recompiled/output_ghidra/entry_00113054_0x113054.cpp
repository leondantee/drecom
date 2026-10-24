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

// Function: entry_00113054
// Address: 0x113054 - 0x11306c
void entry_00113054_0x113054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113054_0x113054");
#endif

    ctx->pc = 0x113054u;

    // 0x113054: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x113054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x113058: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x113058u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x11305c: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x11305cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x113060: 0x114102a  slt         $v0, $t0, $s4
    ctx->pc = 0x113060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x113064: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x113064u;
    {
        const bool branch_taken_0x113064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113064u;
        // 0x113068: 0x8fa30240  lw          $v1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113064) {
            ctx->pc = 0x112FB8u;
            return;
        }
    }
    ctx->pc = 0x11306Cu;
}
