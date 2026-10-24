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

// Function: entry_00112b80
// Address: 0x112b80 - 0x112b98
void entry_00112b80_0x112b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b80_0x112b80");
#endif

    ctx->pc = 0x112b80u;

    // 0x112b80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x112b80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x112b84: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x112b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x112b88: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x112B88u;
    {
        const bool branch_taken_0x112b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B88u;
        // 0x112b8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b88) {
            ctx->pc = 0x112B50u;
            return;
        }
    }
    ctx->pc = 0x112B90u;
    // 0x112b90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x112B90u;
    {
        const bool branch_taken_0x112b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B90u;
        // 0x112b94: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b90) {
            ctx->pc = 0x112BBCu;
            return;
        }
    }
    ctx->pc = 0x112B98u;
}
