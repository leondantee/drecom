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

// Function: entry_001065c8
// Address: 0x1065c8 - 0x1065e8
void entry_001065c8_0x1065c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001065c8_0x1065c8");
#endif

    ctx->pc = 0x1065c8u;

    // 0x1065c8: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x1065c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x1065cc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1065ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065d0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1065D0u;
    {
        const bool branch_taken_0x1065d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1065D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065D0u;
        // 0x1065d4: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065d0) {
            ctx->pc = 0x1065E8u;
            return;
        }
    }
    ctx->pc = 0x1065D8u;
    // 0x1065d8: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1065d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1065dc: 0x8ce23dac  lw          $v0, 0x3DAC($a3)
    ctx->pc = 0x1065dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x1065e0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1065e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1065e4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1065e4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1065e8u;
}
