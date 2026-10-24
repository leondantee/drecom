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

// Function: entry_001071d8
// Address: 0x1071d8 - 0x107204
void entry_001071d8_0x1071d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001071d8_0x1071d8");
#endif

    ctx->pc = 0x1071d8u;

    // 0x1071d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1071d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1071dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1071dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1071e0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1071e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1071e4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1071e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1071e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1071e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1071ec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1071ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1071f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1071f4: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1071F4u;
    {
        const bool branch_taken_0x1071f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1071F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071F4u;
        // 0x1071f8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071f4) {
            ctx->pc = 0x1071B8u;
            return;
        }
    }
    ctx->pc = 0x1071FCu;
    // 0x1071fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1071FCu;
    {
        const bool branch_taken_0x1071fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071FCu;
        // 0x107200: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071fc) {
            ctx->pc = 0x107218u;
            return;
        }
    }
    ctx->pc = 0x107204u;
}
