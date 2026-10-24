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

// Function: entry_00112dfc
// Address: 0x112dfc - 0x112e28
void entry_00112dfc_0x112dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112dfc_0x112dfc");
#endif

    ctx->pc = 0x112dfcu;

    // 0x112dfc: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x112dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x112e00: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x112E00u;
    {
        const bool branch_taken_0x112e00 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x112E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E00u;
        // 0x112e04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e00) {
            ctx->pc = 0x112EF0u;
            return;
        }
    }
    ctx->pc = 0x112E08u;
    // 0x112e08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x112e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x112e0c: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x112E0Cu;
    {
        const bool branch_taken_0x112e0c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x112E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E0Cu;
        // 0x112e10: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e0c) {
            ctx->pc = 0x112E54u;
            return;
        }
    }
    ctx->pc = 0x112E14u;
    // 0x112e14: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x112e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x112e18: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x112e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x112e1c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x112e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x112e20: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x112e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e24: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x112e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112e28u;
}
