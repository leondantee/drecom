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

// Function: entry_001dbc08
// Address: 0x1dbc08 - 0x1dbc48
void entry_001dbc08_0x1dbc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbc08_0x1dbc08");
#endif

    ctx->pc = 0x1dbc08u;

    // 0x1dbc08: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1dbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dbc0c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dbc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1dbc10: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1dbc10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dbc14: 0x30850002  andi        $a1, $a0, 0x2
    ctx->pc = 0x1dbc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1dbc18: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DBC18u;
    {
        const bool branch_taken_0x1dbc18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc18) {
            ctx->pc = 0x1DBC68u;
            return;
        }
    }
    ctx->pc = 0x1DBC20u;
    // 0x1dbc20: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbc24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC24u;
    {
        const bool branch_taken_0x1dbc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc24) {
            ctx->pc = 0x1DBC48u;
            return;
        }
    }
    ctx->pc = 0x1DBC2Cu;
    // 0x1dbc2c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbc34: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1dbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbc38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbc3c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1dbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1dbc40: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DBC40u;
    {
        const bool branch_taken_0x1dbc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc40) {
            ctx->pc = 0x1DBCB0u;
            return;
        }
    }
    ctx->pc = 0x1DBC48u;
}
