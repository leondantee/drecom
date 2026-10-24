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

// Function: entry_0018fb3c
// Address: 0x18fb3c - 0x18fba8
void entry_0018fb3c_0x18fb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fb3c_0x18fb3c");
#endif

    ctx->pc = 0x18fb3cu;

    // 0x18fb3c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb40: 0x8c5e01fc  lw          $fp, 0x1FC($v0)
    ctx->pc = 0x18fb40u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x18fb44: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb48: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18fb4c: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x18fb4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18fb50: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb54: 0x90500210  lbu         $s0, 0x210($v0)
    ctx->pc = 0x18fb54u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x18fb58: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x18fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18fb5c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18fb60: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x18fb64: 0x8fb00190  lw          $s0, 0x190($sp)
    ctx->pc = 0x18fb64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb68: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18fb6c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fb70: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18fb74: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18fb78: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb7c: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fb80: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x18fb80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fb84: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x18fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x18fb88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18FB88u;
    {
        const bool branch_taken_0x18fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb88) {
            ctx->pc = 0x18FBA8u;
            return;
        }
    }
    ctx->pc = 0x18FB90u;
    // 0x18fb90: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18fb94: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fb94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fb98: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x18fb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fb9c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18fba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FBA0u;
    {
        const bool branch_taken_0x18fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fba0) {
            ctx->pc = 0x18FBC0u;
            return;
        }
    }
    ctx->pc = 0x18FBA8u;
}
