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

// Function: entry_00187e30
// Address: 0x187e30 - 0x187e90
void entry_00187e30_0x187e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e30_0x187e30");
#endif

    ctx->pc = 0x187e30u;

    // 0x187e30: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x187e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x187e34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x187e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x187e38: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187e3c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187e40: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e48: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x187e4c: 0x305207ff  andi        $s2, $v0, 0x7FF
    ctx->pc = 0x187e4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x187e50: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187e54: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x187e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x187e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e5c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187e60: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187e64: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e6c: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x187e70: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x187e70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x187e74: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x187e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x187e78: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x187e7c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187E7Cu;
    {
        const bool branch_taken_0x187e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x187e7c) {
            ctx->pc = 0x187E90u;
            return;
        }
    }
    ctx->pc = 0x187E84u;
    // 0x187e84: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x187e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x187e88: 0x12530059  beq         $s2, $s3, . + 4 + (0x59 << 2)
    ctx->pc = 0x187E88u;
    {
        const bool branch_taken_0x187e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x187e88) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187E90u;
}
