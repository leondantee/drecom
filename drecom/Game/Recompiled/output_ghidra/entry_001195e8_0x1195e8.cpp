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

// Function: entry_001195e8
// Address: 0x1195e8 - 0x119620
void entry_001195e8_0x1195e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001195e8_0x1195e8");
#endif

    ctx->pc = 0x1195e8u;

label_1195e8:
    // 0x1195e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1195e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1195ec: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x1195ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x1195f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1195f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1195f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1195f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1195f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1195f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1195fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1195fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119600: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x119600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x119604: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x119604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x119608: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119608u;
    {
        const bool branch_taken_0x119608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119608u;
        // 0x11960c: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119608) {
            ctx->pc = 0x1195E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1195e8;
        }
    }
    ctx->pc = 0x119610u;
    // 0x119610: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x119610u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x119614: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x119614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x119618: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119618u;
    {
        const bool branch_taken_0x119618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119618u;
        // 0x11961c: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119618) {
            ctx->pc = 0x119644u;
            return;
        }
    }
    ctx->pc = 0x119620u;
}
