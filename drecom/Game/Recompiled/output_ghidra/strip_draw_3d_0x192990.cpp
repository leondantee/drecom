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

// Function: strip_draw_3d
// Address: 0x192990 - 0x1931e8
void strip_draw_3d_0x192990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strip_draw_3d_0x192990");
#endif

    switch (ctx->pc) {
        case 0x192b94u: goto label_192b94;
        case 0x192ba8u: goto label_192ba8;
        case 0x192bc4u: goto label_192bc4;
        case 0x192c00u: goto label_192c00;
        case 0x192d68u: goto label_192d68;
        case 0x192dc0u: goto label_192dc0;
        case 0x19319cu: goto label_19319c;
        default: break;
    }

    ctx->pc = 0x192990u;

    // 0x192990: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x192994: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x192994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x192998: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x192998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19299c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1929a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1929a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1929a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1929a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1929a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1929a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1929ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1929acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1929b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1929b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1929b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1929b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1929b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1929b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1929bc: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x1929bcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1929c0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1929c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1929c4: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x1929c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x1929c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1929c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1929cc: 0x34520244  ori         $s2, $v0, 0x244
    ctx->pc = 0x1929ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)580);
    // 0x1929d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1929d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1929d4: 0x3453026c  ori         $s3, $v0, 0x26C
    ctx->pc = 0x1929d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)620);
    // 0x1929d8: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x1929d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x1929dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1929dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1929e0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1929e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1929e4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1929E4u;
    {
        const bool branch_taken_0x1929e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1929e4) {
            ctx->pc = 0x192A7Cu;
            goto label_192a7c;
        }
    }
    ctx->pc = 0x1929ECu;
    // 0x1929ec: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1929ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1929f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1929f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1929f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1929F4u;
    {
        const bool branch_taken_0x1929f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1929f4) {
            ctx->pc = 0x192A08u;
            goto label_192a08;
        }
    }
    ctx->pc = 0x1929FCu;
    // 0x1929fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1929fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192a00: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x192A00u;
    {
        const bool branch_taken_0x192a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a00) {
            ctx->pc = 0x1931B4u;
            goto label_1931b4;
        }
    }
    ctx->pc = 0x192A08u;
label_192a08:
    // 0x192a08: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x192a0c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x192a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192a10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x192a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192a18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x192a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x192a1c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x192a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x192a20: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x192a24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192a28: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x192a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x192a2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192a30: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192a34: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192a34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x192a38: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x192a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192a40: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192a40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x192a44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192a48: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x192a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x192a4c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x192a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x192a50: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x192a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x192a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192a58: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x192a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x192a5c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x192a60: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x192a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x192a64: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x192a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192a68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192A68u;
    {
        const bool branch_taken_0x192a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192a68) {
            ctx->pc = 0x192A7Cu;
            goto label_192a7c;
        }
    }
    ctx->pc = 0x192A70u;
    // 0x192a70: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x192a70u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192a74: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x192A74u;
    {
        const bool branch_taken_0x192a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a74) {
            ctx->pc = 0x1931B4u;
            goto label_1931b4;
        }
    }
    ctx->pc = 0x192A7Cu;
label_192a7c:
    // 0x192a7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192a80: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x192a80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x192a84: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192A84u;
    {
        const bool branch_taken_0x192a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a84) {
            ctx->pc = 0x192A9Cu;
            goto label_192a9c;
        }
    }
    ctx->pc = 0x192A8Cu;
    // 0x192a8c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x192a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x192a90: 0x245edf50  addiu       $fp, $v0, -0x20B0
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x192a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192A94u;
    {
        const bool branch_taken_0x192a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a94) {
            ctx->pc = 0x192AA4u;
            goto label_192aa4;
        }
    }
    ctx->pc = 0x192A9Cu;
label_192a9c:
    // 0x192a9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x192a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x192aa0: 0x245ee550  addiu       $fp, $v0, -0x1AB0
    ctx->pc = 0x192aa0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
label_192aa4:
    // 0x192aa4: 0x8ec20ac0  lw          $v0, 0xAC0($s6)
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2752)));
    // 0x192aa8: 0x8ec20ac4  lw          $v0, 0xAC4($s6)
    ctx->pc = 0x192aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2756)));
    // 0x192aac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x192aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x192ab0: 0x92c20b1c  lbu         $v0, 0xB1C($s6)
    ctx->pc = 0x192ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2844)));
    // 0x192ab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192ab8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x192ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x192abc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192ac0: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x192ac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x192ac4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x192ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x192ac8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x192ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x192acc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x192ACCu;
    {
        const bool branch_taken_0x192acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192acc) {
            ctx->pc = 0x192B38u;
            goto label_192b38;
        }
    }
    ctx->pc = 0x192AD4u;
    // 0x192ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192ad8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x192adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192ae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192ae4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192ae8: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x192ae8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x192aec: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x192aecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192af0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x192af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x192af4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x192af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x192af8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x192af8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x192afc: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x192b00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x192b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192b04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192b0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192b10: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x192b14: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x192b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x192b18: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x192b18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x192b1c: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x192b1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b20: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x192b20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x192b24: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x192b24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192b28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x192b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x192b2c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x192b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x192b30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x192B30u;
    {
        const bool branch_taken_0x192b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b30) {
            ctx->pc = 0x192B74u;
            goto label_192b74;
        }
    }
    ctx->pc = 0x192B38u;
label_192b38:
    // 0x192b38: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192b3c: 0x8c352580  lw          $s5, 0x2580($at)
    ctx->pc = 0x192b3cu;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x532580u));
    // 0x192b40: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x192b44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x192b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192b48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x192b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192b50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192b54: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x192b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x192b58: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x192b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x192b5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x192b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192b60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x192b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x192b64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x192b64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x192b68: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x192b68u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b6c: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x192b70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x192b70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_192b74:
    // 0x192b74: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x192b74u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b78: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x192b78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b7c: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x192b80: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x192b80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x192b84: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x192b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x192b88: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x192b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b8c: 0xc0d889c  jal         func_362270
    ctx->pc = 0x192B8Cu;
    SET_GPR_U32(ctx, 31, 0x192B94u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x192B8Cu, 0x192B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B94u;
label_192b94:
    // 0x192b94: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x192b94u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x192b98: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x192b98u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192b9c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x192b9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192ba0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x192BA0u;
    {
        const bool branch_taken_0x192ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ba0) {
            ctx->pc = 0x192D40u;
            goto label_192d40;
        }
    }
    ctx->pc = 0x192BA8u;
label_192ba8:
    // 0x192ba8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192bac: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x192bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192bb0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192bb4: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x192bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192bb8: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x192bb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x192bbc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x192BBCu;
    SET_GPR_U32(ctx, 31, 0x192BC4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x192BC4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x192BC4u) { return; }
    ctx->pc = 0x192BC4u;
label_192bc4:
    // 0x192bc4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192bc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192bcc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x192bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192bd0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192bd4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192bd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x192bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x192bdc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192be0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x192be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192be4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192be8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x192be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192bec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192bf0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192bf4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x192bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192bf8: 0xc040c60  jal         func_103180
    ctx->pc = 0x192BF8u;
    SET_GPR_U32(ctx, 31, 0x192C00u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x192C00u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x192C00u) { return; }
    ctx->pc = 0x192C00u;
label_192c00:
    // 0x192c00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192c04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192c08: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c0c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x192c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x192c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c14: 0x0  nop
    ctx->pc = 0x192c14u;
    // NOP
    // 0x192c18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c1c: 0x0  nop
    ctx->pc = 0x192c1cu;
    // NOP
    // 0x192c20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x192C20u;
    {
        const bool branch_taken_0x192c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192c20) {
            ctx->pc = 0x192C50u;
            goto label_192c50;
        }
    }
    ctx->pc = 0x192C28u;
    // 0x192c28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192c2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192c30: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192c38: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x192c38u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192c3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c40: 0x0  nop
    ctx->pc = 0x192c40u;
    // NOP
    // 0x192c44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x192C44u;
    {
        const bool branch_taken_0x192c44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192c44) {
            ctx->pc = 0x192C58u;
            goto label_192c58;
        }
    }
    ctx->pc = 0x192C4Cu;
    // 0x192c4c: 0x0  nop
    ctx->pc = 0x192c4cu;
    // NOP
label_192c50:
    // 0x192c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c54: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x192c54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_192c58:
    // 0x192c58: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192c5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192c60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c64: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x192c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x192c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c6c: 0x0  nop
    ctx->pc = 0x192c6cu;
    // NOP
    // 0x192c70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c74: 0x0  nop
    ctx->pc = 0x192c74u;
    // NOP
    // 0x192c78: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x192C78u;
    {
        const bool branch_taken_0x192c78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192c78) {
            ctx->pc = 0x192CB0u;
            goto label_192cb0;
        }
    }
    ctx->pc = 0x192C80u;
    // 0x192c80: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192c84: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192c88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c8c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x192c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x192c90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x192c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x192c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c98: 0x0  nop
    ctx->pc = 0x192c98u;
    // NOP
    // 0x192c9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192ca0: 0x0  nop
    ctx->pc = 0x192ca0u;
    // NOP
    // 0x192ca4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x192CA4u;
    {
        const bool branch_taken_0x192ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192ca4) {
            ctx->pc = 0x192CB8u;
            goto label_192cb8;
        }
    }
    ctx->pc = 0x192CACu;
    // 0x192cac: 0x0  nop
    ctx->pc = 0x192cacu;
    // NOP
label_192cb0:
    // 0x192cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192cb4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x192cb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_192cb8:
    // 0x192cb8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192cbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192cc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x192cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cc4: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x192cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x192cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192ccc: 0x0  nop
    ctx->pc = 0x192cccu;
    // NOP
    // 0x192cd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192cd4: 0x0  nop
    ctx->pc = 0x192cd4u;
    // NOP
    // 0x192cd8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x192CD8u;
    {
        const bool branch_taken_0x192cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192cd8) {
            ctx->pc = 0x192D10u;
            goto label_192d10;
        }
    }
    ctx->pc = 0x192CE0u;
    // 0x192ce0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192ce4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192ce8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x192ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cec: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x192cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x192cf0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x192cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x192cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192cf8: 0x0  nop
    ctx->pc = 0x192cf8u;
    // NOP
    // 0x192cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192d00: 0x0  nop
    ctx->pc = 0x192d00u;
    // NOP
    // 0x192d04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x192D04u;
    {
        const bool branch_taken_0x192d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192d04) {
            ctx->pc = 0x192D18u;
            goto label_192d18;
        }
    }
    ctx->pc = 0x192D0Cu;
    // 0x192d0c: 0x0  nop
    ctx->pc = 0x192d0cu;
    // NOP
label_192d10:
    // 0x192d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192d14: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x192d14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_192d18:
    // 0x192d18: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x192d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x192d1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192D1Cu;
    {
        const bool branch_taken_0x192d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d1c) {
            ctx->pc = 0x192D30u;
            goto label_192d30;
        }
    }
    ctx->pc = 0x192D24u;
    // 0x192d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192d28: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x192d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x192d2c: 0x0  nop
    ctx->pc = 0x192d2cu;
    // NOP
label_192d30:
    // 0x192d30: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x192d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192d34: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x192d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x192d38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192d3c: 0x0  nop
    ctx->pc = 0x192d3cu;
    // NOP
label_192d40:
    // 0x192d40: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x192d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192d48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x192d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x192d4c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x192d50: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x192d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192d54: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x192D54u;
    {
        const bool branch_taken_0x192d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d54) {
            ctx->pc = 0x192BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192ba8;
        }
    }
    ctx->pc = 0x192D5Cu;
    // 0x192d5c: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x192d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192d60: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x192D60u;
    SET_GPR_U32(ctx, 31, 0x192D68u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x192D60u, 0x192D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D68u;
label_192d68:
    // 0x192d68: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x192d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x192d6c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x192d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x192d70: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192D70u;
    {
        const bool branch_taken_0x192d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d70) {
            ctx->pc = 0x192D7Cu;
            goto label_192d7c;
        }
    }
    ctx->pc = 0x192D78u;
    // 0x192d78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x192d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_192d7c:
    // 0x192d7c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x192d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x192d80: 0x96c30340  lhu         $v1, 0x340($s6)
    ctx->pc = 0x192d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x192d84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x192d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x192d88: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x192d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x192d8c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x192D8Cu;
    {
        const bool branch_taken_0x192d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d8c) {
            ctx->pc = 0x192DACu;
            goto label_192dac;
        }
    }
    ctx->pc = 0x192D94u;
    // 0x192d94: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x192d98: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x192D98u;
    {
        const bool branch_taken_0x192d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d98) {
            ctx->pc = 0x192DACu;
            goto label_192dac;
        }
    }
    ctx->pc = 0x192DA0u;
    // 0x192da0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x192da0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192da4: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x192DA4u;
    {
        const bool branch_taken_0x192da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192da4) {
            ctx->pc = 0x1931B4u;
            goto label_1931b4;
        }
    }
    ctx->pc = 0x192DACu;
label_192dac:
    // 0x192dac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x192dacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192db0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x192db0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192db4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x192db4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192db8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x192DB8u;
    {
        const bool branch_taken_0x192db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192db8) {
            ctx->pc = 0x193038u;
            goto label_193038;
        }
    }
    ctx->pc = 0x192DC0u;
label_192dc0:
    // 0x192dc0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x192dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192dc4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x192dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x192dc8: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x192dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192dcc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x192dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192dd0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x192dd4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192dd8: 0x26c702d0  addiu       $a3, $s6, 0x2D0
    ctx->pc = 0x192dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192ddc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x192ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192de0: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x192de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x192de4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x192de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x192de8: 0x0  nop
    ctx->pc = 0x192de8u;
    // NOP
    // 0x192dec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x192decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x192df0: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x192df0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x192df4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x192df4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192df8: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x192df8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x192dfc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x192dfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192e00: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x192e00u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x192e04: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192e04u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192e08: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x192e08u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e0c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192e10: 0x4a0003bf  vwaitq
    ctx->pc = 0x192e10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192e14: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192e18: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192e18u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192e1c: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x192e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e20: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x192e20u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e24: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x192e24u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e28: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192e2c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192e2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192e30: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x192e30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192e34: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192e38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x192e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192e3c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x192e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x192e40: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x192e40u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x192e44: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x192e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192e48: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192e4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192e50: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192e50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192e54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192e58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x192e5c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x192e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192e60: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x192e64: 0x24c705b0  addiu       $a3, $a2, 0x5B0
    ctx->pc = 0x192e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
    // 0x192e68: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x192e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192e6c: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x192e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x192e70: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x192e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e74: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x192e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192e78: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x192e78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192e7c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x192e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x192e80: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x192e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192e84: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x192e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192e88: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192e88u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192e8c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192e90: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192e94: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192e94u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192e98: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192e98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192e9c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192ea0: 0xdea70000  ld          $a3, 0x0($s5)
    ctx->pc = 0x192ea0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192ea4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x192ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192ea8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x192ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192eac: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x192eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x192eb0: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x192eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x192eb4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x192eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192eb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192ebc: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192ec0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192ec0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192ec4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x192ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x192ec8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192ecc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192ed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192ed4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x192ed8: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x192ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192edc: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x192edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x192ee0: 0x24c705b0  addiu       $a3, $a2, 0x5B0
    ctx->pc = 0x192ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
    // 0x192ee4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x192ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192ee8: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x192ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x192eec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x192eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192ef0: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x192ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192ef4: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x192ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192ef8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x192ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x192efc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x192efcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192f00: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x192f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192f04: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192f04u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192f08: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192f08u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192f0c: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192f10: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192f10u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192f14: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192f14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192f18: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192f18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192f1c: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192f20: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192f20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192f24: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x192F24u;
    {
        const bool branch_taken_0x192f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f24) {
            ctx->pc = 0x192F3Cu;
            goto label_192f3c;
        }
    }
    ctx->pc = 0x192F2Cu;
    // 0x192f2c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x192f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192f30: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x192f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192f34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192F34u;
    {
        const bool branch_taken_0x192f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f34) {
            ctx->pc = 0x192F40u;
            goto label_192f40;
        }
    }
    ctx->pc = 0x192F3Cu;
label_192f3c:
    // 0x192f3c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x192f3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_192f40:
    // 0x192f40: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x192f40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192f44: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x192f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192f48: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x192f48u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x192f4c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x192f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192f50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192f54: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192f58: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192f58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192f5c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x192f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x192f60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192f64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192F64u;
    {
        const bool branch_taken_0x192f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f64) {
            ctx->pc = 0x192F7Cu;
            goto label_192f7c;
        }
    }
    ctx->pc = 0x192F6Cu;
    // 0x192f6c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x192f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192f70: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x192f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192f74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192F74u;
    {
        const bool branch_taken_0x192f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f74) {
            ctx->pc = 0x192F80u;
            goto label_192f80;
        }
    }
    ctx->pc = 0x192F7Cu;
label_192f7c:
    // 0x192f7c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x192f7cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_192f80:
    // 0x192f80: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x192f80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192f84: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x192f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192f88: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x192f88u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x192f8c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192f94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x192f98: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192f9c: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x192f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x192fa0: 0x24c705b0  addiu       $a3, $a2, 0x5B0
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
    // 0x192fa4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192fa8: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x192fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x192fac: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x192facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fb0: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192fb4: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x192fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192fb8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x192fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x192fbc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x192fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192fc0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x192fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192fc4: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192fc4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192fc8: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192fcc: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192fd0: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192fd4: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192fd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192fd8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192fdc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x192fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192fe0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192fe4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x192fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x192fe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192fec: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192ff0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192ff0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192ff4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x192ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x192ff8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192ffc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192FFCu;
    {
        const bool branch_taken_0x192ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ffc) {
            ctx->pc = 0x193014u;
            goto label_193014;
        }
    }
    ctx->pc = 0x193004u;
    // 0x193004: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x193004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193008: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x193008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19300c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19300Cu;
    {
        const bool branch_taken_0x19300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19300c) {
            ctx->pc = 0x193018u;
            goto label_193018;
        }
    }
    ctx->pc = 0x193014u;
label_193014:
    // 0x193014: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x193014u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_193018:
    // 0x193018: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x193018u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19301c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x19301cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x193020: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x193020u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x193024: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193028: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x19302c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x193030: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x193034: 0x0  nop
    ctx->pc = 0x193034u;
    // NOP
label_193038:
    // 0x193038: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x193038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x19303c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x193040: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x193040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x193044: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x193044u;
    {
        const bool branch_taken_0x193044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193044) {
            ctx->pc = 0x192DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192dc0;
        }
    }
    ctx->pc = 0x19304Cu;
    // 0x19304c: 0x96c30340  lhu         $v1, 0x340($s6)
    ctx->pc = 0x19304cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193050: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x193050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x193054: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x193054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x193058: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x193058u;
    {
        const bool branch_taken_0x193058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193058) {
            ctx->pc = 0x1930F4u;
            goto label_1930f4;
        }
    }
    ctx->pc = 0x193060u;
    // 0x193060: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x193060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x193064: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x193064u;
    {
        const bool branch_taken_0x193064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193064) {
            ctx->pc = 0x1930ACu;
            goto label_1930ac;
        }
    }
    ctx->pc = 0x19306Cu;
    // 0x19306c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19306cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x193070: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x193070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19307c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x19307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193080: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x193080u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x193084: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x193084u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193088: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x193088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x19308c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x193090: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x193090u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x193094: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193098: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x193098u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x19309c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x19309cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x1930a0: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1930a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1930a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1930A4u;
    {
        const bool branch_taken_0x1930a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930a4) {
            ctx->pc = 0x1930E8u;
            goto label_1930e8;
        }
    }
    ctx->pc = 0x1930ACu;
label_1930ac:
    // 0x1930ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1930acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1930b0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1930b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1930b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1930b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1930b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1930b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1930bc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1930bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1930c0: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x1930c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1930c4: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x1930c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1930c8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1930c8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1930cc: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x1930ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x1930d0: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1930d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1930d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1930d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1930d8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1930d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1930dc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1930dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1930e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1930e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1930e4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1930e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_1930e8:
    // 0x1930e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1930e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1930ec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1930ECu;
    {
        const bool branch_taken_0x1930ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930ec) {
            ctx->pc = 0x1931B4u;
            goto label_1931b4;
        }
    }
    ctx->pc = 0x1930F4u;
label_1930f4:
    // 0x1930f4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1930f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1930f8: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x1930f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x532580u));
    // 0x1930fc: 0x2a38023  subu        $s0, $s5, $v1
    ctx->pc = 0x1930fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x193100: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x193100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193104: 0x101882  srl         $v1, $s0, 2
    ctx->pc = 0x193104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x193108: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x193108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19310c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x193110: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x193110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x532580u));
    // 0x193114: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x193114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193118: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19311c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x19311cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193120: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x193120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x193124: 0x32480  sll         $a0, $v1, 18
    ctx->pc = 0x193124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
    // 0x193128: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x193128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x19312c: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x19312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x193130: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193134: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x193138: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x193138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x19313c: 0x611821  addu        $v1, $v1, $at
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x193140: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x193140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x193144: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x193144u;
    {
        const bool branch_taken_0x193144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193144) {
            ctx->pc = 0x193158u;
            goto label_193158;
        }
    }
    ctx->pc = 0x19314Cu;
    // 0x19314c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x19314cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193150: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x193150u;
    {
        const bool branch_taken_0x193150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193150) {
            ctx->pc = 0x1931B4u;
            goto label_1931b4;
        }
    }
    ctx->pc = 0x193158u;
label_193158:
    // 0x193158: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x193158u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x19315c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x19315cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x193160: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x193160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x193164: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x193164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x193168: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x193168u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x19316c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x19316cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x193170: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x193170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x193174: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x193174u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x193178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19317c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x19317cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193180: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x193180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x193184: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x193184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x193188: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x19318c: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x193190: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x193190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x193194: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x193194u;
    SET_GPR_U32(ctx, 31, 0x19319Cu);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x193194u, 0x19319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19319Cu;
label_19319c:
    // 0x19319c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1931a0: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1931a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1931a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1931a8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1931a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1931ac: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x1931acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x1931b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1931b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1931b4:
    // 0x1931b4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1931b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1931b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1931b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1931bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1931bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1931c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1931c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1931c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1931c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1931c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1931c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1931cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1931ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1931d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1931d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1931d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1931d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1931d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1931d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1931dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1931dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1931e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1931E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1931E8u;
}
