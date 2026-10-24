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

// Function: Color_edit_win_disp
// Address: 0x1a8d40 - 0x1a93d4
void Color_edit_win_disp_0x1a8d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Color_edit_win_disp_0x1a8d40");
#endif

    switch (ctx->pc) {
        case 0x1a8e88u: goto label_1a8e88;
        case 0x1a8f10u: goto label_1a8f10;
        case 0x1a8f1cu: goto label_1a8f1c;
        case 0x1a8fc0u: goto label_1a8fc0;
        case 0x1a8fccu: goto label_1a8fcc;
        case 0x1a902cu: goto label_1a902c;
        case 0x1a9080u: goto label_1a9080;
        case 0x1a90ccu: goto label_1a90cc;
        case 0x1a92ecu: goto label_1a92ec;
        default: break;
    }

    ctx->pc = 0x1a8d40u;

    // 0x1a8d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a8d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a8d44: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1a8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a8d48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a8d4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a8d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a8d50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a8d54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a8d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a8d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a8d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a8d60: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1a8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1a8d64: 0xa3a500a0  sb          $a1, 0xA0($sp)
    ctx->pc = 0x1a8d64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a8d68: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x1a8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
    // 0x1a8d6c: 0x8fb400a8  lw          $s4, 0xA8($sp)
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1a8d70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1a8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1a8d74: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x1a8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1a8d78: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1a8d78u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8d7c: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1a8d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8d80: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A8D80u;
    {
        const bool branch_taken_0x1a8d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d80) {
            ctx->pc = 0x1A8DE4u;
            goto label_1a8de4;
        }
    }
    ctx->pc = 0x1A8D88u;
    // 0x1a8d88: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1a8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1a8d8c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a8d8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8d90: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a8d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8d94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a8d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8d98: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a8d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a8d9c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1a8d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1a8da0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a8da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8da4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8da8: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x1a8da8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1a8dac: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x1a8dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a8db0: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x1a8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x1a8db4: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x1a8db4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8db8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1a8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a8dbc: 0x28283  sra         $s0, $v0, 10
    ctx->pc = 0x1a8dbcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1a8dc0: 0x3203001f  andi        $v1, $s0, 0x1F
    ctx->pc = 0x1a8dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a8dc4: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1a8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a8dc8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1a8dc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8dcc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a8dd0: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x1a8dd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1a8dd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a8dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a8dd8: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1a8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1a8ddc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A8DDCu;
    {
        const bool branch_taken_0x1a8ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ddc) {
            ctx->pc = 0x1A8E24u;
            goto label_1a8e24;
        }
    }
    ctx->pc = 0x1A8DE4u;
label_1a8de4:
    // 0x1a8de4: 0x8fb30098  lw          $s3, 0x98($sp)
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1a8de8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8dec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8df0: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1a8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1a8df4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8df8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1a8dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8e00: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1a8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x1a8e04: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8e08: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x1a8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1a8e0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8e10: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1a8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a8e14: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8e18: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1a8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1a8e1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8e20: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1a8e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
label_1a8e24:
    // 0x1a8e24: 0x86860308  lh          $a2, 0x308($s4)
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x1a8e28: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x1a8e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1a8e2c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1a8e2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1a8e30: 0x92840306  lbu         $a0, 0x306($s4)
    ctx->pc = 0x1a8e30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 774)));
    // 0x1a8e34: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a8e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8e3c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1a8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a8e40: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x1a8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1a8e44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a8e48: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x1a8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x1a8e4c: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x1a8e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8e50: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A8E50u;
    {
        const bool branch_taken_0x1a8e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e50) {
            ctx->pc = 0x1A8EE4u;
            goto label_1a8ee4;
        }
    }
    ctx->pc = 0x1A8E58u;
    // 0x1a8e58: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1a8e58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8e5c: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1a8e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a8e60: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1a8e64: 0x34630808  ori         $v1, $v1, 0x808
    ctx->pc = 0x1a8e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x1a8e68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a8e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8e6c: 0x3c031c08  lui         $v1, 0x1C08
    ctx->pc = 0x1a8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7176 << 16));
    // 0x1a8e70: 0x34632b13  ori         $v1, $v1, 0x2B13
    ctx->pc = 0x1a8e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11027);
    // 0x1a8e74: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a8e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a8e78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1a8e7c: 0x2465f140  addiu       $a1, $v1, -0xEC0
    ctx->pc = 0x1a8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x1a8e80: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A8E80u;
    SET_GPR_U32(ctx, 31, 0x1A8E88u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A8E80u, 0x1A8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E88u;
label_1a8e88:
    // 0x1a8e88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8e88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8e8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8e90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8e94: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1a8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1a8e98: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a8e9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8ea0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1a8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1a8ea4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a8ea8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8eac: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1a8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1a8eb0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a8eb4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8EB4u;
    {
        const bool branch_taken_0x1a8eb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a8eb4) {
            ctx->pc = 0x1A8EC8u;
            goto label_1a8ec8;
        }
    }
    ctx->pc = 0x1A8EBCu;
    // 0x1a8ebc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a8ebcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8EC0u;
    {
        const bool branch_taken_0x1a8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ec0) {
            ctx->pc = 0x1A8ECCu;
            goto label_1a8ecc;
        }
    }
    ctx->pc = 0x1A8EC8u;
label_1a8ec8:
    // 0x1a8ec8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1a8ec8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a8ecc:
    // 0x1a8ecc: 0xafb5007c  sw          $s5, 0x7C($sp)
    ctx->pc = 0x1a8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 21));
    // 0x1a8ed0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a8ed4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a8ed8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1a8edc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A8EDCu;
    {
        const bool branch_taken_0x1a8edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8edc) {
            ctx->pc = 0x1A8F10u;
            goto label_1a8f10;
        }
    }
    ctx->pc = 0x1A8EE4u;
label_1a8ee4:
    // 0x1a8ee4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a8ee8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a8ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a8eec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8ef0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a8ef4: 0x34422b13  ori         $v0, $v0, 0x2B13
    ctx->pc = 0x1a8ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11027);
    // 0x1a8ef8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a8ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8efc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a8f00: 0x2445f140  addiu       $a1, $v0, -0xEC0
    ctx->pc = 0x1a8f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1a8f04: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1a8f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8f08: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A8F08u;
    SET_GPR_U32(ctx, 31, 0x1A8F10u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A8F08u, 0x1A8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F10u;
label_1a8f10:
    // 0x1a8f10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1a8f10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8f14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A8F14u;
    {
        const bool branch_taken_0x1a8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f14) {
            ctx->pc = 0x1A8F70u;
            goto label_1a8f70;
        }
    }
    ctx->pc = 0x1A8F1Cu;
label_1a8f1c:
    // 0x1a8f1c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8f20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8f24: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1a8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a8f28: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x1a8f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1a8f2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8F2Cu;
    {
        const bool branch_taken_0x1a8f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f2c) {
            ctx->pc = 0x1A8F48u;
            goto label_1a8f48;
        }
    }
    ctx->pc = 0x1A8F34u;
    // 0x1a8f34: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a8f38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8f3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8f40: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1a8f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1a8f44: 0x0  nop
    ctx->pc = 0x1a8f44u;
    // NOP
label_1a8f48:
    // 0x1a8f48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8f4c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8f50: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1a8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a8f54: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8F54u;
    {
        const bool branch_taken_0x1a8f54 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a8f54) {
            ctx->pc = 0x1A8F68u;
            goto label_1a8f68;
        }
    }
    ctx->pc = 0x1A8F5Cu;
    // 0x1a8f5c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8f60: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8f64: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1a8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_1a8f68:
    // 0x1a8f68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a8f6c: 0x0  nop
    ctx->pc = 0x1a8f6cu;
    // NOP
label_1a8f70:
    // 0x1a8f70: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1a8f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a8f74: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A8F74u;
    {
        const bool branch_taken_0x1a8f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f74) {
            ctx->pc = 0x1A8F1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8f1c;
        }
    }
    ctx->pc = 0x1A8F7Cu;
    // 0x1a8f7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a8f80: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8f84: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1a8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a8f88: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a8f8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8f90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8f94: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a8f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8f98: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a8f9c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a8fa0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a8fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8fa4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a8fa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8fac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8fb0: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a8fb4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1a8fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a8fb8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8FB8u;
    SET_GPR_U32(ctx, 31, 0x1A8FC0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8FB8u, 0x1A8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FC0u;
label_1a8fc0:
    // 0x1a8fc0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1a8fc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8fc4: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1A8FC4u;
    {
        const bool branch_taken_0x1a8fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fc4) {
            ctx->pc = 0x1A92F0u;
            goto label_1a92f0;
        }
    }
    ctx->pc = 0x1A8FCCu;
label_1a8fcc:
    // 0x1a8fcc: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1a8fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8fd0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A8FD0u;
    {
        const bool branch_taken_0x1a8fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fd0) {
            ctx->pc = 0x1A9088u;
            goto label_1a9088;
        }
    }
    ctx->pc = 0x1A8FD8u;
    // 0x1a8fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8fdc: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A8FDCu;
    {
        const bool branch_taken_0x1a8fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a8fdc) {
            ctx->pc = 0x1A9034u;
            goto label_1a9034;
        }
    }
    ctx->pc = 0x1A8FE4u;
    // 0x1a8fe4: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a8fe8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a8fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8fec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a8fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a8ff0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a8ff4: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a8ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a8ff8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8ffc: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9000: 0x34423100  ori         $v0, $v0, 0x3100
    ctx->pc = 0x1a9000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12544);
    // 0x1a9004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9008: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a9008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a900c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9010: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a9014: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1a9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a9018: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1a9018u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1a901c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9020: 0x2445f148  addiu       $a1, $v0, -0xEB8
    ctx->pc = 0x1a9020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963528));
    // 0x1a9024: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9024u;
    SET_GPR_U32(ctx, 31, 0x1A902Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9024u, 0x1A902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A902Cu;
label_1a902c:
    // 0x1a902c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1A902Cu;
    {
        const bool branch_taken_0x1a902c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a902c) {
            ctx->pc = 0x1A90D0u;
            goto label_1a90d0;
        }
    }
    ctx->pc = 0x1A9034u;
label_1a9034:
    // 0x1a9034: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a9034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a9038: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a9038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a903c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a903cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9040: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a9044: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9048: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a904c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9050: 0x34423100  ori         $v0, $v0, 0x3100
    ctx->pc = 0x1a9050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12544);
    // 0x1a9054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9058: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a9058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a905c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a905cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9060: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a9060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a9064: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1a9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a9068: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a9068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a906c: 0x331c3  sra         $a2, $v1, 7
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1a9070: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9074: 0x2445f148  addiu       $a1, $v0, -0xEB8
    ctx->pc = 0x1a9074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963528));
    // 0x1a9078: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9078u;
    SET_GPR_U32(ctx, 31, 0x1A9080u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9078u, 0x1A9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9080u;
label_1a9080:
    // 0x1a9080: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9080u;
    {
        const bool branch_taken_0x1a9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9080) {
            ctx->pc = 0x1A90D0u;
            goto label_1a90d0;
        }
    }
    ctx->pc = 0x1A9088u;
label_1a9088:
    // 0x1a9088: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a908c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a908cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9090: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9094: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a9094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a9098: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a909c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a90a0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a90a4: 0x34423100  ori         $v0, $v0, 0x3100
    ctx->pc = 0x1a90a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12544);
    // 0x1a90a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a90a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a90ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a90acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a90b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a90b4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1a90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a90b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a90bc: 0x2445f148  addiu       $a1, $v0, -0xEB8
    ctx->pc = 0x1a90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963528));
    // 0x1a90c0: 0x8c660070  lw          $a2, 0x70($v1)
    ctx->pc = 0x1a90c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1a90c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A90C4u;
    SET_GPR_U32(ctx, 31, 0x1A90CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A90C4u, 0x1A90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90CCu;
label_1a90cc:
    // 0x1a90cc: 0x0  nop
    ctx->pc = 0x1a90ccu;
    // NOP
label_1a90d0:
    // 0x1a90d0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1a90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x1a90d4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1a90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1a90d8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1a90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1a90dc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1a90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1a90e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a90e4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a90e8: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1a90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a90ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a90f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a90f4: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1a90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x1a90f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a90fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9100: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9108: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a910c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1a910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1a9110: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a9114: 0x34431a06  ori         $v1, $v0, 0x1A06
    ctx->pc = 0x1a9114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a9118: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a9118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a911c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a911cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9124: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9128: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1a9128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1a912c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9130: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9130u;
    {
        const bool branch_taken_0x1a9130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9130) {
            ctx->pc = 0x1A9180u;
            goto label_1a9180;
        }
    }
    ctx->pc = 0x1A9138u;
    // 0x1a9138: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a913c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9140: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1a9140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1a9144: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a9148: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a914c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9150: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a9150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9154: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a9158: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a9158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a915c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9160: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a9160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9164: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a916c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9170: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x1a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1a9174: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a9174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9178: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A9178u;
    {
        const bool branch_taken_0x1a9178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9178) {
            ctx->pc = 0x1A91D0u;
            goto label_1a91d0;
        }
    }
    ctx->pc = 0x1A9180u;
label_1a9180:
    // 0x1a9180: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1a9180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9184: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A9184u;
    {
        const bool branch_taken_0x1a9184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9184) {
            ctx->pc = 0x1A91D0u;
            goto label_1a91d0;
        }
    }
    ctx->pc = 0x1A918Cu;
    // 0x1a918c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a9190: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a9190u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9194: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a9194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a9198: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a919c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a91a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a91a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a91a4: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a91a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a91a8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1a91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1a91ac: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a91acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a91b0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a91b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a91b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a91b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a91bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a91c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a91c4: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1a91c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a91cc: 0x0  nop
    ctx->pc = 0x1a91ccu;
    // NOP
label_1a91d0:
    // 0x1a91d0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a91d4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1a91d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a91dc: 0x244200f6  addiu       $v0, $v0, 0xF6
    ctx->pc = 0x1a91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 246));
    // 0x1a91e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a91e4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a91e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a91ec: 0x34438580  ori         $v1, $v0, 0x8580
    ctx->pc = 0x1a91ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34176);
    // 0x1a91f0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a91f4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a91f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a91fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9200: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a9204: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a9204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9208: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x1a9208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a920c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a920cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9210: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9218: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a921c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x1a921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1a9220: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a9220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9224: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a9224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9228: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a9228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a922c: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1a922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a9230: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a9230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9238: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a9238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a923c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a9240: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a9240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a9244: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x1a9244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x1a9248: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1a9248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a924c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1a924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1a9250: 0x0  nop
    ctx->pc = 0x1a9250u;
    // NOP
    // 0x1a9254: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9254u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a9258: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a9258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a925c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1a925cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1a9260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9264: 0x24420158  addiu       $v0, $v0, 0x158
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x1a9268: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a9268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a926c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a9270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a9270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a9274: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a9278: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a9278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1a927c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a9280: 0x244200fe  addiu       $v0, $v0, 0xFE
    ctx->pc = 0x1a9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 254));
    // 0x1a9284: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a9288: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a928c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9294: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a9294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9298: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a929c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a929cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a92a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a92a4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1a92a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a92ac: 0x3414fffb  ori         $s4, $zero, 0xFFFB
    ctx->pc = 0x1a92acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a92b0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a92b4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a92b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a92bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a92c0: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1a92c4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1a92c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1a92c8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a92cc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a92d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a92d4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a92d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a92dc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a92e0: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x1a92e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1a92e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A92E4u;
    SET_GPR_U32(ctx, 31, 0x1A92ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A92E4u, 0x1A92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92ECu;
label_1a92ec:
    // 0x1a92ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a92f0:
    // 0x1a92f0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1a92f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a92f4: 0x1460ff35  bnez        $v1, . + 4 + (-0xCB << 2)
    ctx->pc = 0x1A92F4u;
    {
        const bool branch_taken_0x1a92f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a92f4) {
            ctx->pc = 0x1A8FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8fcc;
        }
    }
    ctx->pc = 0x1A92FCu;
    // 0x1a92fc: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x1a92fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a9300: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9300u;
    {
        const bool branch_taken_0x1a9300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9300) {
            ctx->pc = 0x1A9380u;
            goto label_1a9380;
        }
    }
    ctx->pc = 0x1A9308u;
    // 0x1a9308: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1a9308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a930c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a930cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a9310: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a9310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a9314: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1a9314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1a9318: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x1a9318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a931c: 0x1318c3  sra         $v1, $s3, 3
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 3));
    // 0x1a9320: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a9320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a9324: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1a9324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x1a9328: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a9328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a932c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a932cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a9330: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a9330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a9334: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1a9334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a9338: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x1a9338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a933c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9340: 0x419c3  sra         $v1, $a0, 7
    ctx->pc = 0x1a9340u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
    // 0x1a9344: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1a9344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1a9348: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a9348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a934c: 0x33280  sll         $a2, $v1, 10
    ctx->pc = 0x1a934cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1a9350: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x1a9350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a9354: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1a9354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1a9358: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1a9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a935c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9360: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x1a9360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a9364: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1a9364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9368: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1a9368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1a936c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a936cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9370: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a9370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a9374: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1a9374u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a9378: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A9378u;
    {
        const bool branch_taken_0x1a9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9378) {
            ctx->pc = 0x1A93ACu;
            goto label_1a93ac;
        }
    }
    ctx->pc = 0x1A9380u;
label_1a9380:
    // 0x1a9380: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1a9380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9384: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1a9384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a9388: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1a9388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a938c: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x1a938cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a9390: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a9390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9394: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a9394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a9398: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a9398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a939c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1a939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a93a0: 0x32e00  sll         $a1, $v1, 24
    ctx->pc = 0x1a93a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1a93a4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1a93a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a93a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a93a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1a93ac:
    // 0x1a93ac: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1a93acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a93b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a93b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a93b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a93b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a93b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a93b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a93bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a93bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a93c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a93c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a93c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a93c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a93c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1a93c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a93cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A93CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A93CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A93D4u;
}
