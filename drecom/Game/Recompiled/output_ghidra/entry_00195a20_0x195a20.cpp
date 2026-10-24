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

// Function: entry_00195a20
// Address: 0x195a20 - 0x195a38
void entry_00195a20_0x195a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a20_0x195a20");
#endif

    ctx->pc = 0x195a20u;

    // 0x195a20: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195a24: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195a28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A28u;
    {
        const bool branch_taken_0x195a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195a28) {
            ctx->pc = 0x195A38u;
            return;
        }
    }
    ctx->pc = 0x195A30u;
    // 0x195a30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195a34: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x195a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x195a38u;
}
