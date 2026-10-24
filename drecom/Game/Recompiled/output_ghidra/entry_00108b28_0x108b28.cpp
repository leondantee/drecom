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

// Function: entry_00108b28
// Address: 0x108b28 - 0x108b50
void entry_00108b28_0x108b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108b28_0x108b28");
#endif

    ctx->pc = 0x108b28u;

label_108b28:
    // 0x108b28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108b2c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x108b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x108b30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x108b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x108b34: 0x0  nop
    ctx->pc = 0x108b34u;
    // NOP
    // 0x108b38: 0x0  nop
    ctx->pc = 0x108b38u;
    // NOP
    // 0x108b3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108B3Cu;
    {
        const bool branch_taken_0x108b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108b3c) {
            ctx->pc = 0x108B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108b28;
        }
    }
    ctx->pc = 0x108B44u;
    // 0x108b44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108b48: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x108b4c: 0x0  nop
    ctx->pc = 0x108b4cu;
    // NOP
    ctx->pc = 0x108b50u;
}
