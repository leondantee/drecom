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

// Function: entry_001fb528
// Address: 0x1fb528 - 0x1fb558
void entry_001fb528_0x1fb528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb528_0x1fb528");
#endif

    ctx->pc = 0x1fb528u;

    // 0x1fb528: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb52c: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fb52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fb530: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb534: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fb538: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB538u;
    {
        const bool branch_taken_0x1fb538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1fb538) {
            ctx->pc = 0x1FB558u;
            return;
        }
    }
    ctx->pc = 0x1FB540u;
    // 0x1fb540: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb544: 0x9065034f  lbu         $a1, 0x34F($v1)
    ctx->pc = 0x1fb544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fb548: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fb548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb54c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x1fb54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1fb550: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FB550u;
    {
        const bool branch_taken_0x1fb550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fb550) {
            ctx->pc = 0x1FB640u;
            return;
        }
    }
    ctx->pc = 0x1FB558u;
}
