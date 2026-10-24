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

// Function: entry_00107f20
// Address: 0x107f20 - 0x107f40
void entry_00107f20_0x107f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f20_0x107f20");
#endif

    ctx->pc = 0x107f20u;

    // 0x107f20: 0x8c433d7c  lw          $v1, 0x3D7C($v0)
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15740)));
    // 0x107f24: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107F24u;
    {
        const bool branch_taken_0x107f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x107F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F24u;
        // 0x107f28: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f24) {
            ctx->pc = 0x107F40u;
            return;
        }
    }
    ctx->pc = 0x107F2Cu;
    // 0x107f2c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107f30: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107f34: 0x8c443c14  lw          $a0, 0x3C14($v0)
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C14u));
    // 0x107f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F38u;
        // 0x107f3c: 0x8c653c20  lw          $a1, 0x3C20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107F4Cu;
            return;
        }
    }
    ctx->pc = 0x107F40u;
}
