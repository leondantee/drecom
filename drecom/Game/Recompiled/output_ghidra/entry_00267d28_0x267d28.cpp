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

// Function: entry_00267d28
// Address: 0x267d28 - 0x267db0
void entry_00267d28_0x267d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267d28_0x267d28");
#endif

    ctx->pc = 0x267d28u;

    // 0x267d28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267d2c: 0x8c23fcf0  lw          $v1, -0x310($at)
    ctx->pc = 0x267d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCF0u));
    // 0x267d30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x267d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x267d34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267d38: 0xac23fcf0  sw          $v1, -0x310($at)
    ctx->pc = 0x267d38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCF0u, _value); } while (0);
    // 0x267d3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267d40: 0x8c23fcf0  lw          $v1, -0x310($at)
    ctx->pc = 0x267d40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCF0u));
    // 0x267d44: 0x4610026  bgez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x267D44u;
    {
        const bool branch_taken_0x267d44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x267d44) {
            ctx->pc = 0x267DE0u;
            return;
        }
    }
    ctx->pc = 0x267D4Cu;
    // 0x267d4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x267d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x267d50: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x267d50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x267d54: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x267d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267d58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x267d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x267d5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x267d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x267d60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267d64: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x267d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x267d68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x267d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x267d6c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x267d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x267d70: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x267d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267d74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x267d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x267d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x267d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x267d7c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x267d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x267d80: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x267d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x267d84: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x267d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x267d88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x267d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x267d8c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x267d8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x267d90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267d94: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x267d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x267d98: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x267d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x267d9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267da0: 0xac23fcf0  sw          $v1, -0x310($at)
    ctx->pc = 0x267da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCF0u, _value); } while (0);
    // 0x267da4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x267da4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267da8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x267DA8u;
    {
        const bool branch_taken_0x267da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267da8) {
            ctx->pc = 0x267DD0u;
            return;
        }
    }
    ctx->pc = 0x267DB0u;
}
