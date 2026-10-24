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

// Function: entry_001212d8
// Address: 0x1212d8 - 0x121308
void entry_001212d8_0x1212d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001212d8_0x1212d8");
#endif

    ctx->pc = 0x1212d8u;

    // 0x1212d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1212d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1212dc: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x1212dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1212e0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1212e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1212e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1212e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1212e8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1212E8u;
    {
        const bool branch_taken_0x1212e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1212e8) {
            ctx->pc = 0x121308u;
            return;
        }
    }
    ctx->pc = 0x1212F0u;
    // 0x1212f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1212f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1212f4: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x1212f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1212f8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1212f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1212fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1212fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121300: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x121300u;
    {
        const bool branch_taken_0x121300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121300) {
            ctx->pc = 0x121318u;
            return;
        }
    }
    ctx->pc = 0x121308u;
}
