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

// Function: entry_001d8d10
// Address: 0x1d8d10 - 0x1d8dc8
void entry_001d8d10_0x1d8d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8d10_0x1d8d10");
#endif

    switch (ctx->pc) {
        case 0x1d8d1cu: goto label_1d8d1c;
        default: break;
    }

    ctx->pc = 0x1d8d10u;

    // 0x1d8d10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d8d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8d14: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1D8D14u;
    SET_GPR_U32(ctx, 31, 0x1D8D1Cu);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1D8D1Cu;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8D1Cu) { return; }
    ctx->pc = 0x1D8D1Cu;
label_1d8d1c:
    // 0x1d8d1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1d8d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8d20: 0x163c  dsll32      $v0, $zero, 24
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 24));
    // 0x1d8d24: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d8d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1d8d28: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1d8d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8d2c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8d30: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d8d34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d3c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1d8d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8d40: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1d8d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d8d44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d48: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8d4c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8d50: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x1d8d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8d58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8d5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d8d60: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1d8d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d8d64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d68: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8d6c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8d70: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x1d8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x1d8d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8d78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8d7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d8d80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8d84: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d8d88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1d8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1d8d8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8d90: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d8d94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d8d98: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8d9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8da0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8da4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8DA4u;
    {
        const bool branch_taken_0x1d8da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8da4) {
            ctx->pc = 0x1D8DC8u;
            return;
        }
    }
    ctx->pc = 0x1D8DACu;
    // 0x1d8dac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8db0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1d8db4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d8db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d8db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8dbc: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x1d8dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8dc0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D8DC0u;
    {
        const bool branch_taken_0x1d8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8dc0) {
            ctx->pc = 0x1D8E30u;
            return;
        }
    }
    ctx->pc = 0x1D8DC8u;
}
