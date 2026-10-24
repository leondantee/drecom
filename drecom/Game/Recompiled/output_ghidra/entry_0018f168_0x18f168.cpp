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

// Function: entry_0018f168
// Address: 0x18f168 - 0x18f1d4
void entry_0018f168_0x18f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f168_0x18f168");
#endif

    ctx->pc = 0x18f168u;

    // 0x18f168: 0x8fb20130  lw          $s2, 0x130($sp)
    ctx->pc = 0x18f168u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f16c: 0x8e5701fc  lw          $s7, 0x1FC($s2)
    ctx->pc = 0x18f16cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x18f170: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f174: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f178: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x18f178u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18f17c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f180: 0x90620210  lbu         $v0, 0x210($v1)
    ctx->pc = 0x18f180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x18f184: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f188: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f18c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x18f18cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18f190: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f194: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x18f198: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f198u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f19c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f1a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18f1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18f1a4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f1a8: 0x94520118  lhu         $s2, 0x118($v0)
    ctx->pc = 0x18f1a8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f1ac: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x18f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18f1b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f1b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F1B4u;
    {
        const bool branch_taken_0x18f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1b4) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18F1BCu;
    // 0x18f1bc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x18f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f1c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x18f1c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1c4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x18f1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f1c8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x18f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x18f1cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18F1CCu;
    {
        const bool branch_taken_0x18f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1cc) {
            ctx->pc = 0x18F1E8u;
            return;
        }
    }
    ctx->pc = 0x18F1D4u;
}
