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

// Function: entry_001fa430
// Address: 0x1fa430 - 0x1fa478
void entry_001fa430_0x1fa430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa430_0x1fa430");
#endif

    ctx->pc = 0x1fa430u;

    // 0x1fa430: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa434: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa438: 0x9083007f  lbu         $v1, 0x7F($a0)
    ctx->pc = 0x1fa438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
    // 0x1fa43c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1fa43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1fa440: 0xa083007f  sb          $v1, 0x7F($a0)
    ctx->pc = 0x1fa440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa444: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa448: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa44c: 0x9063007f  lbu         $v1, 0x7F($v1)
    ctx->pc = 0x1fa44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1fa450: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa454: 0x28610031  slti        $at, $v1, 0x31
    ctx->pc = 0x1fa454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1fa458: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FA458u;
    {
        const bool branch_taken_0x1fa458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa458) {
            ctx->pc = 0x1FA514u;
            return;
        }
    }
    ctx->pc = 0x1FA460u;
    // 0x1fa460: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1fa460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fa464: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa468: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa46c: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1fa46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fa470: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FA470u;
    {
        const bool branch_taken_0x1fa470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa470) {
            ctx->pc = 0x1FA514u;
            return;
        }
    }
    ctx->pc = 0x1FA478u;
}
