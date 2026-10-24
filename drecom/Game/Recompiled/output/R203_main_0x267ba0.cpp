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

// Function: R203_main
// Address: 0x267ba0 - 0x26815c
void R203_main_0x267ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203_main_0x267ba0");
#endif

    switch (ctx->pc) {
        case 0x267c08u: goto label_267c08;
        case 0x267c50u: goto label_267c50;
        case 0x267c70u: goto label_267c70;
        case 0x267cf8u: goto label_267cf8;
        case 0x267d04u: goto label_267d04;
        case 0x267d10u: goto label_267d10;
        case 0x267db0u: goto label_267db0;
        case 0x267dbcu: goto label_267dbc;
        case 0x267dc8u: goto label_267dc8;
        case 0x267ea4u: goto label_267ea4;
        case 0x267f48u: goto label_267f48;
        case 0x267f94u: goto label_267f94;
        case 0x267fc0u: goto label_267fc0;
        case 0x267fecu: goto label_267fec;
        case 0x268024u: goto label_268024;
        case 0x26805cu: goto label_26805c;
        case 0x268094u: goto label_268094;
        case 0x2680f4u: goto label_2680f4;
        case 0x268104u: goto label_268104;
        case 0x26811cu: goto label_26811c;
        case 0x268130u: goto label_268130;
        case 0x268140u: goto label_268140;
        default: break;
    }

    ctx->pc = 0x267ba0u;

    // 0x267ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x267ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x267ba4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x267ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x267ba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267bb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267bb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x267bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x267bb8: 0x2452fd20  addiu       $s2, $v0, -0x2E0
    ctx->pc = 0x267bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x267bbc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x267bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x267bc0: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x267bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x267bc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267bc8: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x267bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x267bcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x267bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x267bd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x267bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x267bd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267BD4u;
    {
        const bool branch_taken_0x267bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267bd4) {
            ctx->pc = 0x267C08u;
            goto label_267c08;
        }
    }
    ctx->pc = 0x267BDCu;
    // 0x267bdc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267be0: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x267be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x267be4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x267be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x267be8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x267be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x267bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267BECu;
    {
        const bool branch_taken_0x267bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267bec) {
            ctx->pc = 0x267C08u;
            goto label_267c08;
        }
    }
    ctx->pc = 0x267BF4u;
    // 0x267bf4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x267bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x267bf8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x267bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x267bfc: 0x24458160  addiu       $a1, $v0, -0x7EA0
    ctx->pc = 0x267bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
    // 0x267c00: 0xc0848cc  jal         func_212330
    ctx->pc = 0x267C00u;
    SET_GPR_U32(ctx, 31, 0x267C08u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x267C00u, 0x267C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C08u;
label_267c08:
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
            goto label_267d28;
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
            goto label_267d18;
        }
    }
    ctx->pc = 0x267CF8u;
label_267cf8:
    // 0x267cf8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267cf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267cfc: 0xc09a300  jal         func_268C00
    ctx->pc = 0x267CFCu;
    SET_GPR_U32(ctx, 31, 0x267D04u);
    ctx->pc = 0x268C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268C00u, 0x267CFCu, 0x267D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D04u;
label_267d04:
    // 0x267d04: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267d04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267d08: 0xc09a480  jal         func_269200
    ctx->pc = 0x267D08u;
    SET_GPR_U32(ctx, 31, 0x267D10u);
    ctx->pc = 0x269200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269200u, 0x267D08u, 0x267D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D10u;
label_267d10:
    // 0x267d10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x267d14: 0x0  nop
    ctx->pc = 0x267d14u;
    // NOP
label_267d18:
    // 0x267d18: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x267d18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x267d1c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x267D1Cu;
    {
        const bool branch_taken_0x267d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267d1c) {
            ctx->pc = 0x267CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267cf8;
        }
    }
    ctx->pc = 0x267D24u;
    // 0x267d24: 0x0  nop
    ctx->pc = 0x267d24u;
    // NOP
label_267d28:
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
            goto label_267de0;
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
            goto label_267dd0;
        }
    }
    ctx->pc = 0x267DB0u;
label_267db0:
    // 0x267db0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267db0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267db4: 0xc09a3c0  jal         func_268F00
    ctx->pc = 0x267DB4u;
    SET_GPR_U32(ctx, 31, 0x267DBCu);
    ctx->pc = 0x268F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268F00u, 0x267DB4u, 0x267DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DBCu;
label_267dbc:
    // 0x267dbc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267dc0: 0xc09a480  jal         func_269200
    ctx->pc = 0x267DC0u;
    SET_GPR_U32(ctx, 31, 0x267DC8u);
    ctx->pc = 0x269200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269200u, 0x267DC0u, 0x267DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DC8u;
label_267dc8:
    // 0x267dc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x267dcc: 0x0  nop
    ctx->pc = 0x267dccu;
    // NOP
label_267dd0:
    // 0x267dd0: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x267dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x267dd4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x267DD4u;
    {
        const bool branch_taken_0x267dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267dd4) {
            ctx->pc = 0x267DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267db0;
        }
    }
    ctx->pc = 0x267DDCu;
    // 0x267ddc: 0x0  nop
    ctx->pc = 0x267ddcu;
    // NOP
label_267de0:
    // 0x267de0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267de4: 0x8c23fcf8  lw          $v1, -0x308($at)
    ctx->pc = 0x267de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCF8u));
    // 0x267de8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x267de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x267dec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267df0: 0xac23fcf8  sw          $v1, -0x308($at)
    ctx->pc = 0x267df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCF8u, _value); } while (0);
    // 0x267df4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267df8: 0x8c23fcf8  lw          $v1, -0x308($at)
    ctx->pc = 0x267df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCF8u));
    // 0x267dfc: 0x4610010  bgez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x267DFCu;
    {
        const bool branch_taken_0x267dfc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x267dfc) {
            ctx->pc = 0x267E40u;
            goto label_267e40;
        }
    }
    ctx->pc = 0x267E04u;
    // 0x267e04: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x267e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x267e08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e0c: 0xac23fcf8  sw          $v1, -0x308($at)
    ctx->pc = 0x267e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCF8u, _value); } while (0);
    // 0x267e10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e14: 0x8c23fd00  lw          $v1, -0x300($at)
    ctx->pc = 0x267e14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FD00u));
    // 0x267e18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x267e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x267e1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e20: 0xac23fd00  sw          $v1, -0x300($at)
    ctx->pc = 0x267e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD00u, _value); } while (0);
    // 0x267e24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e28: 0x8c24fd00  lw          $a0, -0x300($at)
    ctx->pc = 0x267e28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD00u));
    // 0x267e2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267e30: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267E30u;
    {
        const bool branch_taken_0x267e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x267e30) {
            ctx->pc = 0x267E40u;
            goto label_267e40;
        }
    }
    ctx->pc = 0x267E38u;
    // 0x267e38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e3c: 0xac20fd00  sw          $zero, -0x300($at)
    ctx->pc = 0x267e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD00u, _value); } while (0);
label_267e40:
    // 0x267e40: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x267e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267e44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267e48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x267e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x267e4c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x267E4Cu;
    {
        const bool branch_taken_0x267e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e4c) {
            ctx->pc = 0x267F28u;
            goto label_267f28;
        }
    }
    ctx->pc = 0x267E54u;
    // 0x267e54: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x267e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x267e58: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x267e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x267e5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x267e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x267e60: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x267e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x267e64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x267e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x267e68: 0xa22210a8  sb          $v0, 0x10A8($s1)
    ctx->pc = 0x267e68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x267e6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e70: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x267e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x267e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x267e78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x267e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x267e7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e80: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x267e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x267e84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e88: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x267e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267e8c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x267e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x267e90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x267e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x267e94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267e98: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x267e98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x267e9c: 0xc09a904  jal         func_26A410
    ctx->pc = 0x267E9Cu;
    SET_GPR_U32(ctx, 31, 0x267EA4u);
    ctx->pc = 0x26A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A410u, 0x267E9Cu, 0x267EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EA4u;
label_267ea4:
    // 0x267ea4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267ea8: 0x94230092  lhu         $v1, 0x92($at)
    ctx->pc = 0x267ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0092u));
    // 0x267eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x267eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x267eb0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x267eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x267eb4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x267EB4u;
    {
        const bool branch_taken_0x267eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267eb4) {
            ctx->pc = 0x267F28u;
            goto label_267f28;
        }
    }
    ctx->pc = 0x267EBCu;
    // 0x267ebc: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x267ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267ec0: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x267ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x267ec4: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x267ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x267ec8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x267ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x267ecc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x267eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x267ed0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x267ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x267ed4: 0xa22010a8  sb          $zero, 0x10A8($s1)
    ctx->pc = 0x267ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x267ed8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267edc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x267edcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267ee0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x267ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x267ee4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x267ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x267ee8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267eec: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x267eecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x267ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267ef4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x267ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x267ef8: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x267ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x267efc: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x267efcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x267f00: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x267f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x267f04: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x267f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x267f08: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x267f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x267f0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267f10: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x267f10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x267f14: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x267f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x267f18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x267f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x267f1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x267f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x267f20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267f24: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x267f24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
label_267f28:
    // 0x267f28: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x267f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267f2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267f30: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x267f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x267f34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x267F34u;
    {
        const bool branch_taken_0x267f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f34) {
            ctx->pc = 0x267F48u;
            goto label_267f48;
        }
    }
    ctx->pc = 0x267F3Cu;
    // 0x267f3c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x267f3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x267f40: 0xc09a70c  jal         func_269C30
    ctx->pc = 0x267F40u;
    SET_GPR_U32(ctx, 31, 0x267F48u);
    ctx->pc = 0x269C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C30u, 0x267F40u, 0x267F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F48u;
label_267f48:
    // 0x267f48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267f4c: 0x8c24fce8  lw          $a0, -0x318($at)
    ctx->pc = 0x267f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FCE8u));
    // 0x267f50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267f54: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x267f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x267f58: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267F58u;
    {
        const bool branch_taken_0x267f58 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x267f58) {
            ctx->pc = 0x267F6Cu;
            goto label_267f6c;
        }
    }
    ctx->pc = 0x267F60u;
    // 0x267f60: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x267F60u;
    {
        const bool branch_taken_0x267f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f60) {
            ctx->pc = 0x267F6Cu;
            goto label_267f6c;
        }
    }
    ctx->pc = 0x267F68u;
    // 0x267f68: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x267f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_267f6c:
    // 0x267f6c: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x267F6Cu;
    {
        const bool branch_taken_0x267f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267f6c) {
            ctx->pc = 0x268140u;
            goto label_268140;
        }
    }
    ctx->pc = 0x267F74u;
    // 0x267f74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267f78: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x267f78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x267f7c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x267f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x267f80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x267f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267f84: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x267f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x267f88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x267f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x267f8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x267F8Cu;
    SET_GPR_U32(ctx, 31, 0x267F94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267F8Cu, 0x267F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F94u;
label_267f94:
    // 0x267f94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x267f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267f9c: 0x0  nop
    ctx->pc = 0x267f9cu;
    // NOP
    // 0x267fa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x267fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267fa4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x267fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x267fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267fac: 0x0  nop
    ctx->pc = 0x267facu;
    // NOP
    // 0x267fb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x267fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267fb4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x267fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x267fb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x267FB8u;
    SET_GPR_U32(ctx, 31, 0x267FC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267FB8u, 0x267FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FC0u;
label_267fc0:
    // 0x267fc0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x267fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x267fc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267fc8: 0x0  nop
    ctx->pc = 0x267fc8u;
    // NOP
    // 0x267fcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x267fccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267fd0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x267fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x267fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267fd8: 0x0  nop
    ctx->pc = 0x267fd8u;
    // NOP
    // 0x267fdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x267fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x267fe0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x267fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x267fe4: 0xc067648  jal         func_19D920
    ctx->pc = 0x267FE4u;
    SET_GPR_U32(ctx, 31, 0x267FECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267FE4u, 0x267FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FECu;
label_267fec:
    // 0x267fec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x267fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x267ff0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267ff4: 0x0  nop
    ctx->pc = 0x267ff4u;
    // NOP
    // 0x267ff8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x267ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267ffc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x267ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x268000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268004: 0x0  nop
    ctx->pc = 0x268004u;
    // NOP
    // 0x268008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x268008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26800c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x268010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x268010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268014: 0x0  nop
    ctx->pc = 0x268014u;
    // NOP
    // 0x268018: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x268018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x26801c: 0xc067648  jal         func_19D920
    ctx->pc = 0x26801Cu;
    SET_GPR_U32(ctx, 31, 0x268024u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26801Cu, 0x268024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268024u;
label_268024:
    // 0x268024: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x268024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x268028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26802c: 0x0  nop
    ctx->pc = 0x26802cu;
    // NOP
    // 0x268030: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x268030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268034: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x268034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x268038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26803c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268040: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x268040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268044: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x268044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x268048: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x268048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26804c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26804cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x268050: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x268050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x268054: 0xc067648  jal         func_19D920
    ctx->pc = 0x268054u;
    SET_GPR_U32(ctx, 31, 0x26805Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x268054u, 0x26805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26805Cu;
label_26805c:
    // 0x26805c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x26805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x268060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268064: 0x0  nop
    ctx->pc = 0x268064u;
    // NOP
    // 0x268068: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x268068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26806c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x26806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x268070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268074: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x268074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268078: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x268078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26807c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x26807cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x268080: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x268080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x268084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x268088: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x268088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26808c: 0xc067648  jal         func_19D920
    ctx->pc = 0x26808Cu;
    SET_GPR_U32(ctx, 31, 0x268094u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26808Cu, 0x268094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268094u;
label_268094:
    // 0x268094: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x268094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x268098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26809c: 0x0  nop
    ctx->pc = 0x26809cu;
    // NOP
    // 0x2680a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2680a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2680a4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2680a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2680a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2680a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2680ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2680acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2680b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2680b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2680b4: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2680b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2680b8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2680b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2680bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2680bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2680c0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2680c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2680c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2680c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2680c8: 0x0  nop
    ctx->pc = 0x2680c8u;
    // NOP
    // 0x2680cc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2680ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2680d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2680d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2680d4: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x2680d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2680d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2680d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2680dc: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x2680dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2680e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2680e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2680e4: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x2680e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x2680e8: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x2680e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2680ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x2680ECu;
    SET_GPR_U32(ctx, 31, 0x2680F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2680F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2680F4u) { return; }
    ctx->pc = 0x2680F4u;
label_2680f4:
    // 0x2680f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2680f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2680f8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2680f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2680fc: 0xc040c24  jal         func_103090
    ctx->pc = 0x2680FCu;
    SET_GPR_U32(ctx, 31, 0x268104u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x268104u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x268104u) { return; }
    ctx->pc = 0x268104u;
label_268104:
    // 0x268104: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x268104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x268108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x268108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26810c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268110: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x268110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268114: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x268114u;
    SET_GPR_U32(ctx, 31, 0x26811Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x26811Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26811Cu) { return; }
    ctx->pc = 0x26811Cu;
label_26811c:
    // 0x26811c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268120: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x268120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268124: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x268124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268128: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x268128u;
    SET_GPR_U32(ctx, 31, 0x268130u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x268130u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x268130u) { return; }
    ctx->pc = 0x268130u;
label_268130:
    // 0x268130: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x268130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268134: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x268134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x268138: 0xc099d88  jal         func_267620
    ctx->pc = 0x268138u;
    SET_GPR_U32(ctx, 31, 0x268140u);
    ctx->pc = 0x267620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267620u, 0x268138u, 0x268140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268140u;
label_268140:
    // 0x268140: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x268140u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26814c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26814cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268150: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x268150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x268154: 0x3e00008  jr          $ra
    ctx->pc = 0x268154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26815Cu;
}
