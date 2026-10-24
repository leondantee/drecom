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

// Function: entry_00267c08
// Address: 0x267c08 - 0x267cf8
void entry_00267c08_0x267c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267c08_0x267c08");
#endif

    switch (ctx->pc) {
        case 0x267c50u: goto label_267c50;
        case 0x267c70u: goto label_267c70;
        default: break;
    }

    ctx->pc = 0x267c08u;

    // 0x267c08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c0c: 0x8c22fd08  lw          $v0, -0x2F8($at)
    ctx->pc = 0x267c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FD08u));
    // 0x267c10: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x267c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x267c14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c18: 0xac22fd08  sw          $v0, -0x2F8($at)
    ctx->pc = 0x267c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD08u, _value); } while (0);
    // 0x267c1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c20: 0x8c22fd08  lw          $v0, -0x2F8($at)
    ctx->pc = 0x267c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FD08u));
    // 0x267c24: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x267c28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c2c: 0xac22fd08  sw          $v0, -0x2F8($at)
    ctx->pc = 0x267c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD08u, _value); } while (0);
    // 0x267c30: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x267c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267c34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x267c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267c38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c3c: 0x8c26fd08  lw          $a2, -0x2F8($at)
    ctx->pc = 0x267c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x61FD08u));
    // 0x267c40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267c44: 0x8c270140  lw          $a3, 0x140($at)
    ctx->pc = 0x267c44u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0140u));
    // 0x267c48: 0xc04f704  jal         func_13DC10
    ctx->pc = 0x267C48u;
    SET_GPR_U32(ctx, 31, 0x267C50u);
    ctx->pc = 0x13DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC10u, 0x267C48u, 0x267C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C50u;
label_267c50:
    // 0x267c50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x267c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267c54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x267c54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267c58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c5c: 0x8c26fd08  lw          $a2, -0x2F8($at)
    ctx->pc = 0x267c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x61FD08u));
    // 0x267c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267c64: 0x8c270140  lw          $a3, 0x140($at)
    ctx->pc = 0x267c64u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0140u));
    // 0x267c68: 0xc04f704  jal         func_13DC10
    ctx->pc = 0x267C68u;
    SET_GPR_U32(ctx, 31, 0x267C70u);
    ctx->pc = 0x13DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC10u, 0x267C68u, 0x267C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C70u;
label_267c70:
    // 0x267c70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c74: 0x8c23fce8  lw          $v1, -0x318($at)
    ctx->pc = 0x267c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE8u));
    // 0x267c78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x267c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x267c7c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c80: 0xac23fce8  sw          $v1, -0x318($at)
    ctx->pc = 0x267c80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCE8u, _value); } while (0);
    // 0x267c84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267c88: 0x8c23fce8  lw          $v1, -0x318($at)
    ctx->pc = 0x267c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE8u));
    // 0x267c8c: 0x4610026  bgez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x267C8Cu;
    {
        const bool branch_taken_0x267c8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x267c8c) {
            ctx->pc = 0x267D28u;
            return;
        }
    }
    ctx->pc = 0x267C94u;
    // 0x267c94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x267c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x267c98: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x267c98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x267c9c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x267c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267ca0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x267ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x267ca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x267ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x267ca8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267cac: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x267cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x267cb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x267cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x267cb4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x267cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x267cb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x267cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267cbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x267cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x267cc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x267cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x267cc4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x267cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x267cc8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x267cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x267ccc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x267cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x267cd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x267cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x267cd4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x267cd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x267cd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267cdc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x267cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x267ce0: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x267ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x267ce4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267ce8: 0xac23fce8  sw          $v1, -0x318($at)
    ctx->pc = 0x267ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCE8u, _value); } while (0);
    // 0x267cec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x267cecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x267CF0u;
    {
        const bool branch_taken_0x267cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267cf0) {
            ctx->pc = 0x267D18u;
            return;
        }
    }
    ctx->pc = 0x267CF8u;
}
