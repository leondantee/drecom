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

// Function: entry_001ff9a0
// Address: 0x1ff9a0 - 0x1ff9d0
void entry_001ff9a0_0x1ff9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff9a0_0x1ff9a0");
#endif

    ctx->pc = 0x1ff9a0u;

    // 0x1ff9a0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9a4: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ff9a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ff9a8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff9ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ff9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ff9b0: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF9B0u;
    {
        const bool branch_taken_0x1ff9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ff9b0) {
            ctx->pc = 0x1FF9D0u;
            return;
        }
    }
    ctx->pc = 0x1FF9B8u;
    // 0x1ff9b8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9bc: 0x9083034f  lbu         $v1, 0x34F($a0)
    ctx->pc = 0x1ff9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1ff9c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff9c4: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x1ff9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1ff9c8: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FF9C8u;
    {
        const bool branch_taken_0x1ff9c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ff9c8) {
            ctx->pc = 0x1FFAB8u;
            return;
        }
    }
    ctx->pc = 0x1FF9D0u;
}
