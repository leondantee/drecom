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

// Function: caseD_70
// Address: 0x11b9d0 - 0x11b9f4
void caseD_70_0x11b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_70_0x11b9d0");
#endif

    ctx->pc = 0x11b9d0u;

    // 0x11b9d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11b9d4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b9d8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11b9dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b9e0: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x11b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x11b9e4: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x11b9e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x11b9e8: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x11b9ec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11B9ECu;
    {
        const bool branch_taken_0x11b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9ECu;
        // 0x11b9f0: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9ec) {
            ctx->pc = 0x11BAD8u;
            return;
        }
    }
    ctx->pc = 0x11B9F4u;
}
