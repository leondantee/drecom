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

// Function: entry_00109280
// Address: 0x109280 - 0x1092a0
void entry_00109280_0x109280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109280_0x109280");
#endif

    ctx->pc = 0x109280u;

    // 0x109280: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x109280u;
    {
        const bool branch_taken_0x109280 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x109284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109280u;
        // 0x109284: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109280) {
            ctx->pc = 0x1092C8u;
            return;
        }
    }
    ctx->pc = 0x109288u;
    // 0x109288: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109288u;
    {
        const bool branch_taken_0x109288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109288) {
            ctx->pc = 0x1092A0u;
            return;
        }
    }
    ctx->pc = 0x109290u;
    // 0x109290: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x109290u;
    {
        const bool branch_taken_0x109290 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x109290) {
            ctx->pc = 0x109294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109290u;
            // 0x109294: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109334u;
            return;
        }
    }
    ctx->pc = 0x109298u;
    // 0x109298: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x109298u;
    {
        const bool branch_taken_0x109298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109298u;
        // 0x10929c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109298) {
            ctx->pc = 0x10938Cu;
            return;
        }
    }
    ctx->pc = 0x1092A0u;
}
