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

// Function: entry_00112bd0
// Address: 0x112bd0 - 0x112be8
void entry_00112bd0_0x112bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112bd0_0x112bd0");
#endif

    ctx->pc = 0x112bd0u;

    // 0x112bd0: 0x16e00018  bnez        $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x112BD0u;
    {
        const bool branch_taken_0x112bd0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BD0u;
        // 0x112bd4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bd0) {
            ctx->pc = 0x112C34u;
            return;
        }
    }
    ctx->pc = 0x112BD8u;
    // 0x112bd8: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x112bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x112bdc: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x112bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112be0: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x112be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112be4: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x112be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x112be8u;
}
