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

// Function: entry_001b5894
// Address: 0x1b5894 - 0x1b58d4
void entry_001b5894_0x1b5894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5894_0x1b5894");
#endif

    ctx->pc = 0x1b5894u;

    // 0x1b5894: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5898: 0x90a313a6  lbu         $v1, 0x13A6($a1)
    ctx->pc = 0x1b5898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
    // 0x1b589c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1b589cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b58a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b58a4: 0x10c50018  beq         $a2, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B58A4u;
    {
        const bool branch_taken_0x1b58a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b58a4) {
            ctx->pc = 0x1B5908u;
            return;
        }
    }
    ctx->pc = 0x1B58ACu;
    // 0x1b58ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b58acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b58b0: 0x10c40015  beq         $a2, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B58B0u;
    {
        const bool branch_taken_0x1b58b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b58b0) {
            ctx->pc = 0x1B5908u;
            return;
        }
    }
    ctx->pc = 0x1B58B8u;
    // 0x1b58b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b58bc: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B58BCu;
    {
        const bool branch_taken_0x1b58bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b58bc) {
            ctx->pc = 0x1B58D4u;
            return;
        }
    }
    ctx->pc = 0x1B58C4u;
    // 0x1b58c4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B58C4u;
    {
        const bool branch_taken_0x1b58c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b58c4) {
            ctx->pc = 0x1B58D4u;
            return;
        }
    }
    ctx->pc = 0x1B58CCu;
    // 0x1b58cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B58CCu;
    {
        const bool branch_taken_0x1b58cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b58cc) {
            ctx->pc = 0x1B5940u;
            return;
        }
    }
    ctx->pc = 0x1B58D4u;
}
