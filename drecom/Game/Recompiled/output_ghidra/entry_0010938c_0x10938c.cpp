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

// Function: entry_0010938c
// Address: 0x10938c - 0x1093a0
void entry_0010938c_0x10938c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010938c_0x10938c");
#endif

    ctx->pc = 0x10938cu;

    // 0x10938c: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x10938cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x109390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109390u;
    {
        const bool branch_taken_0x109390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109390u;
        // 0x109394: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109390) {
            ctx->pc = 0x1093A0u;
            return;
        }
    }
    ctx->pc = 0x109398u;
    // 0x109398: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x109398u;
    {
        const bool branch_taken_0x109398 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x109398) {
            ctx->pc = 0x10939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109398u;
            // 0x10939c: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109280u;
            return;
        }
    }
    ctx->pc = 0x1093A0u;
}
