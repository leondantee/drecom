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

// Function: entry_0032cd1c
// Address: 0x32cd1c - 0x32cd58
void entry_0032cd1c_0x32cd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032cd1c_0x32cd1c");
#endif

    ctx->pc = 0x32cd1cu;

    // 0x32cd1c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x32cd1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32cd20: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x32cd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x32cd24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cd28: 0x1443005b  bne         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x32CD28u;
    {
        const bool branch_taken_0x32cd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32cd28) {
            ctx->pc = 0x32CE98u;
            return;
        }
    }
    ctx->pc = 0x32CD30u;
    // 0x32cd30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32cd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32cd34: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32cd38: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x32cd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x32cd3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CD3Cu;
    {
        const bool branch_taken_0x32cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cd3c) {
            ctx->pc = 0x32CD58u;
            return;
        }
    }
    ctx->pc = 0x32CD44u;
    // 0x32cd44: 0x92622912  lbu         $v0, 0x2912($s3)
    ctx->pc = 0x32cd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10514)));
    // 0x32cd48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32cd4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32cd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cd50: 0x14510051  bne         $v0, $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x32CD50u;
    {
        const bool branch_taken_0x32cd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x32cd50) {
            ctx->pc = 0x32CE98u;
            return;
        }
    }
    ctx->pc = 0x32CD58u;
}
