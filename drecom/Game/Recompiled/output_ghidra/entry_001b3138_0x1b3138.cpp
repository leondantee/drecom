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

// Function: entry_001b3138
// Address: 0x1b3138 - 0x1b316c
void entry_001b3138_0x1b3138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3138_0x1b3138");
#endif

    ctx->pc = 0x1b3138u;

    // 0x1b3138: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b313c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3140: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3144: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3144u;
    {
        const bool branch_taken_0x1b3144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3144) {
            ctx->pc = 0x1B316Cu;
            return;
        }
    }
    ctx->pc = 0x1B314Cu;
    // 0x1b314c: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b3150: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x1b3150u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3154: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x1b3154u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x1b3158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b315c: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1b315cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3160: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x1b3160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3164: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B3164u;
    {
        const bool branch_taken_0x1b3164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3164) {
            ctx->pc = 0x1B31E0u;
            return;
        }
    }
    ctx->pc = 0x1B316Cu;
}
