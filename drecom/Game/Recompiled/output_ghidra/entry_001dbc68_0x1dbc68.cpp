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

// Function: entry_001dbc68
// Address: 0x1dbc68 - 0x1dbc94
void entry_001dbc68_0x1dbc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbc68_0x1dbc68");
#endif

    ctx->pc = 0x1dbc68u;

    // 0x1dbc68: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x1dbc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc70: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC70u;
    {
        const bool branch_taken_0x1dbc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbc70) {
            ctx->pc = 0x1DBC94u;
            return;
        }
    }
    ctx->pc = 0x1DBC78u;
    // 0x1dbc78: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1dbc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc7c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1dbc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dbc80: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1dbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbc88: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1dbc88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1dbc8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC8Cu;
    {
        const bool branch_taken_0x1dbc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc8c) {
            ctx->pc = 0x1DBCB0u;
            return;
        }
    }
    ctx->pc = 0x1DBC94u;
}
