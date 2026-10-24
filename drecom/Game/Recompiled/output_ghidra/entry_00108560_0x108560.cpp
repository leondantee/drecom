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

// Function: entry_00108560
// Address: 0x108560 - 0x108588
void entry_00108560_0x108560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108560_0x108560");
#endif

    ctx->pc = 0x108560u;

label_108560:
    // 0x108560: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108564: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x108564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x108568: 0x0  nop
    ctx->pc = 0x108568u;
    // NOP
    // 0x10856c: 0x0  nop
    ctx->pc = 0x10856cu;
    // NOP
    // 0x108570: 0x0  nop
    ctx->pc = 0x108570u;
    // NOP
    // 0x108574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108574u;
    {
        const bool branch_taken_0x108574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108574) {
            ctx->pc = 0x108560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108560;
        }
    }
    ctx->pc = 0x10857Cu;
    // 0x10857c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10857cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108580: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x108580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x108584: 0x0  nop
    ctx->pc = 0x108584u;
    // NOP
    ctx->pc = 0x108588u;
}
