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

// Function: entry_0018cd48
// Address: 0x18cd48 - 0x18cd9c
void entry_0018cd48_0x18cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd48_0x18cd48");
#endif

    ctx->pc = 0x18cd48u;

    // 0x18cd48: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x18cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x18cd4c: 0x24626ef0  addiu       $v0, $v1, 0x6EF0
    ctx->pc = 0x18cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28400));
    // 0x18cd50: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x18cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18cd54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cd58: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18cd58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cd5c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18cd60: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18cd64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x18cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18cd68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18cd6c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18cd70: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18cd74: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18cd78: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18cd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cd7c: 0x92220097  lbu         $v0, 0x97($s1)
    ctx->pc = 0x18cd7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 151)));
    // 0x18cd80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cd84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD84u;
    {
        const bool branch_taken_0x18cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cd84) {
            ctx->pc = 0x18CD9Cu;
            return;
        }
    }
    ctx->pc = 0x18CD8Cu;
    // 0x18cd8c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18cd90: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18cd94: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x18CD94u;
    {
        const bool branch_taken_0x18cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd94) {
            ctx->pc = 0x18D2F0u;
            return;
        }
    }
    ctx->pc = 0x18CD9Cu;
}
