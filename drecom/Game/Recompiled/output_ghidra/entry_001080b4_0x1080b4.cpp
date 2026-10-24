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

// Function: entry_001080b4
// Address: 0x1080b4 - 0x1080d0
void entry_001080b4_0x1080b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001080b4_0x1080b4");
#endif

    ctx->pc = 0x1080b4u;

    // 0x1080b4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1080b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1080b8: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x1080b8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080bc: 0x8c833c04  lw          $v1, 0x3C04($a0)
    ctx->pc = 0x1080bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C04u));
    // 0x1080c0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1080c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1080c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1080c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1080C8u;
    {
        const bool branch_taken_0x1080c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080C8u;
        // 0x1080cc: 0x2c80b  movn        $t9, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080c8) {
            ctx->pc = 0x108238u;
            return;
        }
    }
    ctx->pc = 0x1080D0u;
}
