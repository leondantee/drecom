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

// Function: entry_001080d0
// Address: 0x1080d0 - 0x1080fc
void entry_001080d0_0x1080d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001080d0_0x1080d0");
#endif

    ctx->pc = 0x1080d0u;

    // 0x1080d0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1080d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1080d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1080d8: 0x8c433c0c  lw          $v1, 0x3C0C($v0)
    ctx->pc = 0x1080d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C0Cu));
    // 0x1080dc: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x1080dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080e0: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1080E0u;
    {
        const bool branch_taken_0x1080e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1080E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E0u;
        // 0x1080e4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e0) {
            ctx->pc = 0x1080FCu;
            return;
        }
    }
    ctx->pc = 0x1080E8u;
    // 0x1080e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1080e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1080ec: 0x8c433c18  lw          $v1, 0x3C18($v0)
    ctx->pc = 0x1080ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C18u));
    // 0x1080f0: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1080f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080f4: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1080F4u;
    {
        const bool branch_taken_0x1080f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F4u;
        // 0x1080f8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080f4) {
            ctx->pc = 0x108108u;
            return;
        }
    }
    ctx->pc = 0x1080FCu;
}
