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

// Function: entry_00107a1c
// Address: 0x107a1c - 0x107a3c
void entry_00107a1c_0x107a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a1c_0x107a1c");
#endif

    ctx->pc = 0x107a1cu;

    // 0x107a1c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x107a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107a20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107A20u;
    {
        const bool branch_taken_0x107a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A20u;
        // 0x107a24: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a20) {
            ctx->pc = 0x107A3Cu;
            return;
        }
    }
    ctx->pc = 0x107A28u;
    // 0x107a28: 0x8c623aa0  lw          $v0, 0x3AA0($v1)
    ctx->pc = 0x107a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15008)));
    // 0x107a2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107A2Cu;
    {
        const bool branch_taken_0x107a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A2Cu;
        // 0x107a30: 0x8d223d78  lw          $v0, 0x3D78($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a2c) {
            ctx->pc = 0x107A40u;
            return;
        }
    }
    ctx->pc = 0x107A34u;
    // 0x107a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a38: 0xacc23ad4  sw          $v0, 0x3AD4($a2)
    ctx->pc = 0x107a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15060), GPR_U32(ctx, 2));
    ctx->pc = 0x107a3cu;
}
