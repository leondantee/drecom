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

// Function: entry_00216c24
// Address: 0x216c24 - 0x216c44
void entry_00216c24_0x216c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216c24_0x216c24");
#endif

    ctx->pc = 0x216c24u;

    // 0x216c24: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x216c28: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x216c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x216c2c: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x216c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x216c30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x216C30u;
    {
        const bool branch_taken_0x216c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C30u;
        // 0x216c34: 0x242880b  movn        $s1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c30) {
            ctx->pc = 0x216C44u;
            return;
        }
    }
    ctx->pc = 0x216C38u;
    // 0x216c38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x216c3c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x216c3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216c40: 0x8c57aaec  lw          $s7, -0x5514($v0)
    ctx->pc = 0x216c40u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x38AAECu));
    ctx->pc = 0x216c44u;
}
