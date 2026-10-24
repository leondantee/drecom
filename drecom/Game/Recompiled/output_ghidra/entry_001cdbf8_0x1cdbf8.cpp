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

// Function: entry_001cdbf8
// Address: 0x1cdbf8 - 0x1cdc38
void entry_001cdbf8_0x1cdbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdbf8_0x1cdbf8");
#endif

    ctx->pc = 0x1cdbf8u;

    // 0x1cdbf8: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1cdbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdbfc: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x1cdbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1cdc00: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1cdc00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cdc04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cdc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdc08: 0x10a301b9  beq         $a1, $v1, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1CDC08u;
    {
        const bool branch_taken_0x1cdc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cdc08) {
            ctx->pc = 0x1CE2F0u;
            return;
        }
    }
    ctx->pc = 0x1CDC10u;
    // 0x1cdc10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cdc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdc14: 0x10a40193  beq         $a1, $a0, . + 4 + (0x193 << 2)
    ctx->pc = 0x1CDC14u;
    {
        const bool branch_taken_0x1cdc14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cdc14) {
            ctx->pc = 0x1CE264u;
            return;
        }
    }
    ctx->pc = 0x1CDC1Cu;
    // 0x1cdc1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc20: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CDC20u;
    {
        const bool branch_taken_0x1cdc20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cdc20) {
            ctx->pc = 0x1CDCBCu;
            return;
        }
    }
    ctx->pc = 0x1CDC28u;
    // 0x1cdc28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDC28u;
    {
        const bool branch_taken_0x1cdc28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc28) {
            ctx->pc = 0x1CDC38u;
            return;
        }
    }
    ctx->pc = 0x1CDC30u;
    // 0x1cdc30: 0x1000031f  b           . + 4 + (0x31F << 2)
    ctx->pc = 0x1CDC30u;
    {
        const bool branch_taken_0x1cdc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc30) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CDC38u;
}
