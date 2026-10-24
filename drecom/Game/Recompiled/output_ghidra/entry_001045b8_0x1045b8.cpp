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

// Function: entry_001045b8
// Address: 0x1045b8 - 0x1045d4
void entry_001045b8_0x1045b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001045b8_0x1045b8");
#endif

    ctx->pc = 0x1045b8u;

    // 0x1045b8: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1045B8u;
    {
        const bool branch_taken_0x1045b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1045BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045B8u;
        // 0x1045bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045b8) {
            ctx->pc = 0x104614u;
            return;
        }
    }
    ctx->pc = 0x1045C0u;
    // 0x1045c0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1045c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1045c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1045C4u;
    {
        const bool branch_taken_0x1045c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045C4u;
        // 0x1045c8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045c4) {
            ctx->pc = 0x1045D4u;
            return;
        }
    }
    ctx->pc = 0x1045CCu;
    // 0x1045cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1045CCu;
    {
        const bool branch_taken_0x1045cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045CCu;
        // 0x1045d0: 0x8c443c1c  lw          $a0, 0x3C1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045cc) {
            ctx->pc = 0x1045DCu;
            return;
        }
    }
    ctx->pc = 0x1045D4u;
}
