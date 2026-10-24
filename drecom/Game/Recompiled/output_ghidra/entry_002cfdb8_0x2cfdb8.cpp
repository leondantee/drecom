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

// Function: entry_002cfdb8
// Address: 0x2cfdb8 - 0x2cfe00
void entry_002cfdb8_0x2cfdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cfdb8_0x2cfdb8");
#endif

    ctx->pc = 0x2cfdb8u;

    // 0x2cfdb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfdbc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfdc0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfdc4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfdc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfdcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfdd0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cfdd4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CFDD4u;
    {
        const bool branch_taken_0x2cfdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfdd4) {
            ctx->pc = 0x2CFE00u;
            return;
        }
    }
    ctx->pc = 0x2CFDDCu;
    // 0x2cfddc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfde0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfde4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfde8: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfdf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfdf4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2cfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2cfdf8: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CFDF8u;
    {
        const bool branch_taken_0x2cfdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfdf8) {
            ctx->pc = 0x2CFF04u;
            return;
        }
    }
    ctx->pc = 0x2CFE00u;
}
