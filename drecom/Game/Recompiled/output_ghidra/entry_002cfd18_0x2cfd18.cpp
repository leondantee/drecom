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

// Function: entry_002cfd18
// Address: 0x2cfd18 - 0x2cfd80
void entry_002cfd18_0x2cfd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cfd18_0x2cfd18");
#endif

    ctx->pc = 0x2cfd18u;

    // 0x2cfd18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfd1c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfd20: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfd24: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfd28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfd30: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2cfd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cfd34: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFD34u;
    {
        const bool branch_taken_0x2cfd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd34) {
            ctx->pc = 0x2CFD80u;
            return;
        }
    }
    ctx->pc = 0x2CFD3Cu;
    // 0x2cfd3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfd40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfd44: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfd48: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfd54: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2cfd54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cfd58: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFD58u;
    {
        const bool branch_taken_0x2cfd58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd58) {
            ctx->pc = 0x2CFD80u;
            return;
        }
    }
    ctx->pc = 0x2CFD60u;
    // 0x2cfd60: 0x3c02bfef  lui         $v0, 0xBFEF
    ctx->pc = 0x2cfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49135 << 16));
    // 0x2cfd64: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x2cfd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x2cfd68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfd6c: 0x0  nop
    ctx->pc = 0x2cfd6cu;
    // NOP
    // 0x2cfd70: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2cfd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cfd74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cfd74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfd78: 0x0  nop
    ctx->pc = 0x2cfd78u;
    // NOP
    // 0x2cfd7c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2cfd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->pc = 0x2cfd80u;
}
