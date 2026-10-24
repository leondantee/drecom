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

// Function: entry_001040cc
// Address: 0x1040cc - 0x1040f8
void entry_001040cc_0x1040cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001040cc_0x1040cc");
#endif

    ctx->pc = 0x1040ccu;

    // 0x1040cc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1040ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1040d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1040d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1040d4: 0x8c463dac  lw          $a2, 0x3DAC($v0)
    ctx->pc = 0x1040d4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383DACu));
    // 0x1040d8: 0x14c30075  bne         $a2, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1040D8u;
    {
        const bool branch_taken_0x1040d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1040DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040D8u;
        // 0x1040dc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040d8) {
            ctx->pc = 0x1042B0u;
            return;
        }
    }
    ctx->pc = 0x1040E0u;
    // 0x1040e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1040e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1040e4: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1040E4u;
    {
        const bool branch_taken_0x1040e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1040e4) {
            ctx->pc = 0x1040E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1040E4u;
            // 0x1040e8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1040F8u;
            return;
        }
    }
    ctx->pc = 0x1040ECu;
    // 0x1040ec: 0x1580000d  bnez        $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x1040ECu;
    {
        const bool branch_taken_0x1040ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1040ec) {
            ctx->pc = 0x104124u;
            return;
        }
    }
    ctx->pc = 0x1040F4u;
    // 0x1040f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1040f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1040f8u;
}
