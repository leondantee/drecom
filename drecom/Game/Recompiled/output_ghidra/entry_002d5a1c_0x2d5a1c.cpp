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

// Function: entry_002d5a1c
// Address: 0x2d5a1c - 0x2d5aa8
void entry_002d5a1c_0x2d5a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5a1c_0x2d5a1c");
#endif

    ctx->pc = 0x2d5a1cu;

    // 0x2d5a1c: 0x16200022  bnez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D5A1Cu;
    {
        const bool branch_taken_0x2d5a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a1c) {
            ctx->pc = 0x2D5AA8u;
            return;
        }
    }
    ctx->pc = 0x2D5A24u;
    // 0x2d5a24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d5a28: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d5a2c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d5a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5a30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d5a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5a38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d5a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5a3c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d5a40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d5a44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d5a48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d5a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5a4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d5a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5a54: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d5a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d5a58: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d5a5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d5a60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d5a64: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d5a64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d5a68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d5a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5a6c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x2d5a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d5a70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5a74: 0x2464133c  addiu       $a0, $v1, 0x133C
    ctx->pc = 0x2d5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d5a78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5a7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d5a80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d5a84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5a88: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d5a8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5a90: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2d5a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2d5a94: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5A94u;
    {
        const bool branch_taken_0x2d5a94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a94) {
            ctx->pc = 0x2D5AA8u;
            return;
        }
    }
    ctx->pc = 0x2D5A9Cu;
    // 0x2d5a9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d5aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5aa4: 0xac641340  sw          $a0, 0x1340($v1)
    ctx->pc = 0x2d5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 4));
    ctx->pc = 0x2d5aa8u;
}
