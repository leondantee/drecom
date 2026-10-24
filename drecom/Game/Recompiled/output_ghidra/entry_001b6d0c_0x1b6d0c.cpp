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

// Function: entry_001b6d0c
// Address: 0x1b6d0c - 0x1b6d64
void entry_001b6d0c_0x1b6d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d0c_0x1b6d0c");
#endif

    ctx->pc = 0x1b6d0cu;

    // 0x1b6d0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6d10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b6d14: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b6d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b6d18: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b6d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b6d1c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6D1Cu;
    {
        const bool branch_taken_0x1b6d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d1c) {
            ctx->pc = 0x1B6D6Cu;
            return;
        }
    }
    ctx->pc = 0x1B6D24u;
    // 0x1b6d24: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6d28: 0x90a313a6  lbu         $v1, 0x13A6($a1)
    ctx->pc = 0x1b6d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
    // 0x1b6d2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b6d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b6d30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6d34: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6D34u;
    {
        const bool branch_taken_0x1b6d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b6d34) {
            ctx->pc = 0x1B6D64u;
            return;
        }
    }
    ctx->pc = 0x1B6D3Cu;
    // 0x1b6d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6d40: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6D40u;
    {
        const bool branch_taken_0x1b6d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b6d40) {
            ctx->pc = 0x1B6D64u;
            return;
        }
    }
    ctx->pc = 0x1B6D48u;
    // 0x1b6d48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b6d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6d4c: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6D4Cu;
    {
        const bool branch_taken_0x1b6d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1b6d4c) {
            ctx->pc = 0x1B6D6Cu;
            return;
        }
    }
    ctx->pc = 0x1B6D54u;
    // 0x1b6d54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6D54u;
    {
        const bool branch_taken_0x1b6d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d54) {
            ctx->pc = 0x1B6D6Cu;
            return;
        }
    }
    ctx->pc = 0x1B6D5Cu;
    // 0x1b6d5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6D5Cu;
    {
        const bool branch_taken_0x1b6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d5c) {
            ctx->pc = 0x1B6D6Cu;
            return;
        }
    }
    ctx->pc = 0x1B6D64u;
}
