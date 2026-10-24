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

// Function: strip_draw_polyline
// Address: 0x191af0 - 0x192988
void strip_draw_polyline_0x191af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strip_draw_polyline_0x191af0");
#endif

    switch (ctx->pc) {
        case 0x191ce8u: goto label_191ce8;
        case 0x191d00u: goto label_191d00;
        case 0x191d1cu: goto label_191d1c;
        case 0x191d30u: goto label_191d30;
        case 0x191d4cu: goto label_191d4c;
        case 0x191e18u: goto label_191e18;
        case 0x191fccu: goto label_191fcc;
        case 0x19206cu: goto label_19206c;
        case 0x1920a0u: goto label_1920a0;
        case 0x192124u: goto label_192124;
        case 0x192200u: goto label_192200;
        case 0x1922acu: goto label_1922ac;
        case 0x192504u: goto label_192504;
        case 0x192934u: goto label_192934;
        default: break;
    }

    ctx->pc = 0x191af0u;

    // 0x191af0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x191af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x191af4: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x191af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x191af8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x191af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x191afc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x191afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x191b00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x191b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x191b04: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x191b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x191b08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x191b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x191b0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x191b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x191b10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x191b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x191b14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x191b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x191b18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191b1c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x191b1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x191b20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x191b20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x191b24: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x191b24u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x191b28: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x191b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x191b2c: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x191b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
    // 0x191b30: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x191b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x191b34: 0x34530244  ori         $s3, $v0, 0x244
    ctx->pc = 0x191b34u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)580);
    // 0x191b38: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x191b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x191b3c: 0x3454026c  ori         $s4, $v0, 0x26C
    ctx->pc = 0x191b3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)620);
    // 0x191b40: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x191b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x191b44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191b48: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x191b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x191b4c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x191B4Cu;
    {
        const bool branch_taken_0x191b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b4c) {
            ctx->pc = 0x191BE4u;
            goto label_191be4;
        }
    }
    ctx->pc = 0x191B54u;
    // 0x191b54: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x191b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x191b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191b5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191B5Cu;
    {
        const bool branch_taken_0x191b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b5c) {
            ctx->pc = 0x191B70u;
            goto label_191b70;
        }
    }
    ctx->pc = 0x191B64u;
    // 0x191b64: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191b64u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191b68: 0x10000378  b           . + 4 + (0x378 << 2)
    ctx->pc = 0x191B68u;
    {
        const bool branch_taken_0x191b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b68) {
            ctx->pc = 0x19294Cu;
            goto label_19294c;
        }
    }
    ctx->pc = 0x191B70u;
label_191b70:
    // 0x191b70: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x191b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x191b74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x191b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191b78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x191b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x191b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191b80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x191b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x191b84: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x191b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x191b88: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x191b8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x191b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191b90: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x191b94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x191b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191b98: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191b9c: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x191b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x191ba0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191ba8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191bb0: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x191bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x191bb4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x191bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x191bb8: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x191bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x191bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191bc0: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x191bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x191bc4: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x191bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x191bc8: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x191bcc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x191bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191bd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191BD0u;
    {
        const bool branch_taken_0x191bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191bd0) {
            ctx->pc = 0x191BE4u;
            goto label_191be4;
        }
    }
    ctx->pc = 0x191BD8u;
    // 0x191bd8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191bd8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191bdc: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x191BDCu;
    {
        const bool branch_taken_0x191bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bdc) {
            ctx->pc = 0x19294Cu;
            goto label_19294c;
        }
    }
    ctx->pc = 0x191BE4u;
label_191be4:
    // 0x191be4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191be8: 0x8c370af0  lw          $s7, 0xAF0($at)
    ctx->pc = 0x191be8u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x191bec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x191BECu;
    {
        const bool branch_taken_0x191bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bec) {
            ctx->pc = 0x191C08u;
            goto label_191c08;
        }
    }
    ctx->pc = 0x191BF4u;
    // 0x191bf4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x191bf8: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x191bfc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x191bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x191c00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191C00u;
    {
        const bool branch_taken_0x191c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c00) {
            ctx->pc = 0x191C14u;
            goto label_191c14;
        }
    }
    ctx->pc = 0x191C08u;
label_191c08:
    // 0x191c08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x191c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x191c0c: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x191c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x191c10: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x191c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_191c14:
    // 0x191c14: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x191c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x191c18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191c1c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x191c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x191c20: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191C20u;
    {
        const bool branch_taken_0x191c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c20) {
            ctx->pc = 0x191C8Cu;
            goto label_191c8c;
        }
    }
    ctx->pc = 0x191C28u;
    // 0x191c28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191c2c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191c30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191c34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191c38: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x191c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191c3c: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x191c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x191c40: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x191c40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x191c44: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x191c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x191c48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x191c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x191c4c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x191c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x191c50: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x191c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x191c54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x191c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191c58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x191c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x191c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191c64: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x191c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x191c68: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x191c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191c6c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x191c6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x191c70: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x191c70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191c74: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191c78: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x191c78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191c7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x191c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x191c80: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x191c80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x191c84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x191C84u;
    {
        const bool branch_taken_0x191c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c84) {
            ctx->pc = 0x191CC8u;
            goto label_191cc8;
        }
    }
    ctx->pc = 0x191C8Cu;
label_191c8c:
    // 0x191c8c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191c90: 0x8c352580  lw          $s5, 0x2580($at)
    ctx->pc = 0x191c90u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x532580u));
    // 0x191c94: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x191c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x191c98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x191c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191c9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x191c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x191ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191ca8: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x191cac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x191cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x191cb0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x191cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191cb4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191cb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x191cb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x191cbc: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x191cbcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191cc0: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x191cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x191cc4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x191cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_191cc8:
    // 0x191cc8: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x191cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x191ccc: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x191cccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191cd0: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x191cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x191cd4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x191cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x191cd8: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x191cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x191cdc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x191cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191ce0: 0xc0d889c  jal         func_362270
    ctx->pc = 0x191CE0u;
    SET_GPR_U32(ctx, 31, 0x191CE8u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x191CE0u, 0x191CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191CE8u;
label_191ce8:
    // 0x191ce8: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x191ce8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x191cec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x191cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191cf0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x191cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x191cf4: 0x26c60480  addiu       $a2, $s6, 0x480
    ctx->pc = 0x191cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1152));
    // 0x191cf8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191CF8u;
    SET_GPR_U32(ctx, 31, 0x191D00u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x191D00u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D00u) { return; }
    ctx->pc = 0x191D00u;
label_191d00:
    // 0x191d00: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x191d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d04: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x191d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x191d08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x191d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191d0c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x191d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191d10: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x191d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191d14: 0xc040c60  jal         func_103180
    ctx->pc = 0x191D14u;
    SET_GPR_U32(ctx, 31, 0x191D1Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x191D1Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D1Cu) { return; }
    ctx->pc = 0x191D1Cu;
label_191d1c:
    // 0x191d1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x191d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191d20: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x191d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x191d24: 0x26c60490  addiu       $a2, $s6, 0x490
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1168));
    // 0x191d28: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191D28u;
    SET_GPR_U32(ctx, 31, 0x191D30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x191D30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D30u) { return; }
    ctx->pc = 0x191D30u;
label_191d30:
    // 0x191d30: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x191d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d34: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x191d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x191d38: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191d3c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191d40: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x191d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191d44: 0xc040c60  jal         func_103180
    ctx->pc = 0x191D44u;
    SET_GPR_U32(ctx, 31, 0x191D4Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x191D4Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D4Cu) { return; }
    ctx->pc = 0x191D4Cu;
label_191d4c:
    // 0x191d4c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x191d4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191d50: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x191d54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191d58: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x191d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191d60: 0x0  nop
    ctx->pc = 0x191d60u;
    // NOP
    // 0x191d64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x191D64u;
    {
        const bool branch_taken_0x191d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191d64) {
            ctx->pc = 0x191D88u;
            goto label_191d88;
        }
    }
    ctx->pc = 0x191D6Cu;
    // 0x191d6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191d70: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x191d70u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191d74: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x191d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191d7c: 0x0  nop
    ctx->pc = 0x191d7cu;
    // NOP
    // 0x191d80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x191D80u;
    {
        const bool branch_taken_0x191d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191d80) {
            ctx->pc = 0x191D90u;
            goto label_191d90;
        }
    }
    ctx->pc = 0x191D88u;
label_191d88:
    // 0x191d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191d8c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x191d8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191d90:
    // 0x191d90: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x191d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191d94: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x191d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191d9c: 0x0  nop
    ctx->pc = 0x191d9cu;
    // NOP
    // 0x191da0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191da4: 0x0  nop
    ctx->pc = 0x191da4u;
    // NOP
    // 0x191da8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x191DA8u;
    {
        const bool branch_taken_0x191da8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191da8) {
            ctx->pc = 0x191DCCu;
            goto label_191dcc;
        }
    }
    ctx->pc = 0x191DB0u;
    // 0x191db0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x191db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191db8: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x191db8u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191dbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191dc0: 0x0  nop
    ctx->pc = 0x191dc0u;
    // NOP
    // 0x191dc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x191DC4u;
    {
        const bool branch_taken_0x191dc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191dc4) {
            ctx->pc = 0x191DD4u;
            goto label_191dd4;
        }
    }
    ctx->pc = 0x191DCCu;
label_191dcc:
    // 0x191dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191dd0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x191dd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191dd4:
    // 0x191dd4: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x191dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191dd8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x191dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ddc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191de0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x191de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x191de4: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x191de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191de8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x191de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191dec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191df0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x191df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x191df4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x191df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191df8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x191df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191dfc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x191dfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191e00: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x191e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e04: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x191e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x191e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191e0c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x191e0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x191e10: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x191E10u;
    SET_GPR_U32(ctx, 31, 0x191E18u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x191E10u, 0x191E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E18u;
label_191e18:
    // 0x191e18: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x191e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x191e1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e24: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x191e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191e28: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x191e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191e2c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x191e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e30: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x191e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x191e34: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x191e34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191e38: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x191e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e3c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x191e3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x191e40: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x191e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e44: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x191e44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x191e48: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x191e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x191e4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x191e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x191e50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191e54: 0x0  nop
    ctx->pc = 0x191e54u;
    // NOP
    // 0x191e58: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x191e58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x191e5c: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x191e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x191e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191e68: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x191e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191e6c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x191e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191e70: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x191e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x191e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x191e78: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x191e78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191e7c: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x191e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e80: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x191e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191e84: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x191e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e88: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x191e88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x191e8c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x191e90: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x191e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x191e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191e98: 0x0  nop
    ctx->pc = 0x191e98u;
    // NOP
    // 0x191e9c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x191e9cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191ea0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x191ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ea4: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x191ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x191ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191eac: 0x0  nop
    ctx->pc = 0x191eacu;
    // NOP
    // 0x191eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191eb4: 0x0  nop
    ctx->pc = 0x191eb4u;
    // NOP
    // 0x191eb8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x191EB8u;
    {
        const bool branch_taken_0x191eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191eb8) {
            ctx->pc = 0x191EE4u;
            goto label_191ee4;
        }
    }
    ctx->pc = 0x191EC0u;
    // 0x191ec0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x191ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ec4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x191ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x191ec8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x191ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x191ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ed0: 0x0  nop
    ctx->pc = 0x191ed0u;
    // NOP
    // 0x191ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191ed8: 0x0  nop
    ctx->pc = 0x191ed8u;
    // NOP
    // 0x191edc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x191EDCu;
    {
        const bool branch_taken_0x191edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191edc) {
            ctx->pc = 0x191EECu;
            goto label_191eec;
        }
    }
    ctx->pc = 0x191EE4u;
label_191ee4:
    // 0x191ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191ee8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x191ee8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191eec:
    // 0x191eec: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x191eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ef0: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x191ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x191ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ef8: 0x0  nop
    ctx->pc = 0x191ef8u;
    // NOP
    // 0x191efc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f00: 0x0  nop
    ctx->pc = 0x191f00u;
    // NOP
    // 0x191f04: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x191F04u;
    {
        const bool branch_taken_0x191f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191f04) {
            ctx->pc = 0x191F30u;
            goto label_191f30;
        }
    }
    ctx->pc = 0x191F0Cu;
    // 0x191f0c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x191f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191f10: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x191f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x191f14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x191f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x191f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191f1c: 0x0  nop
    ctx->pc = 0x191f1cu;
    // NOP
    // 0x191f20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f24: 0x0  nop
    ctx->pc = 0x191f24u;
    // NOP
    // 0x191f28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x191F28u;
    {
        const bool branch_taken_0x191f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191f28) {
            ctx->pc = 0x191F38u;
            goto label_191f38;
        }
    }
    ctx->pc = 0x191F30u;
label_191f30:
    // 0x191f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f34: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x191f34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191f38:
    // 0x191f38: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x191f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x191f3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191F3Cu;
    {
        const bool branch_taken_0x191f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191f3c) {
            ctx->pc = 0x191F4Cu;
            goto label_191f4c;
        }
    }
    ctx->pc = 0x191F44u;
    // 0x191f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f48: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x191f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_191f4c:
    // 0x191f4c: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x191f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x191f50: 0xa2710001  sb          $s1, 0x1($s3)
    ctx->pc = 0x191f50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x191f54: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191f58: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x191f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191f5c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x191f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x191f60: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191f64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x191f64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191f68: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x191f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x191f6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x191f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x191f70: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x191f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f74: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x191f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x191f78: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x191f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x191f7c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x191f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f80: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x191f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x191f84: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x191f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x191f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191f90: 0x0  nop
    ctx->pc = 0x191f90u;
    // NOP
    // 0x191f94: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x191f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x191f98: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x191f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f9c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x191f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x191fa0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x191fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x191fa4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x191fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191fa8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x191fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x191fac: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x191facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x191fb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191fb8: 0x0  nop
    ctx->pc = 0x191fb8u;
    // NOP
    // 0x191fbc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x191fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x191fc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x191fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191fc4: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x191FC4u;
    {
        const bool branch_taken_0x191fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191fc4) {
            ctx->pc = 0x1924B0u;
            goto label_1924b0;
        }
    }
    ctx->pc = 0x191FCCu;
label_191fcc:
    // 0x191fcc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191fd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x191fd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191fd4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191fd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x191fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x191fdc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x191fdcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191fe0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191fe4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x191fe8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x191fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191fec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x191ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ff4: 0x0  nop
    ctx->pc = 0x191ff4u;
    // NOP
    // 0x191ff8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191ffc: 0x0  nop
    ctx->pc = 0x191ffcu;
    // NOP
    // 0x192000: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x192000u;
    {
        const bool branch_taken_0x192000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192000) {
            ctx->pc = 0x192030u;
            goto label_192030;
        }
    }
    ctx->pc = 0x192008u;
    // 0x192008: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19200c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x19200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192010: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192014: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192018: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x192018u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19201c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19201cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192020: 0x0  nop
    ctx->pc = 0x192020u;
    // NOP
    // 0x192024: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x192024u;
    {
        const bool branch_taken_0x192024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192024) {
            ctx->pc = 0x192038u;
            goto label_192038;
        }
    }
    ctx->pc = 0x19202Cu;
    // 0x19202c: 0x0  nop
    ctx->pc = 0x19202cu;
    // NOP
label_192030:
    // 0x192030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192034: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x192034u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_192038:
    // 0x192038: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x19203c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192040: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x192040u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192044: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x192044u;
    {
        const bool branch_taken_0x192044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x192044) {
            ctx->pc = 0x1921DCu;
            goto label_1921dc;
        }
    }
    ctx->pc = 0x19204Cu;
    // 0x19204c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x19204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192050: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192054: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192058: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x192058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x19205c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x19205cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x192060: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x192064: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x192064u;
    SET_GPR_U32(ctx, 31, 0x19206Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19206Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19206Cu) { return; }
    ctx->pc = 0x19206Cu;
label_19206c:
    // 0x19206c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x19206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192070: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192078: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x19207c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x192080: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192088: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x19208c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192090: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192094: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x192094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192098: 0xc040c60  jal         func_103180
    ctx->pc = 0x192098u;
    SET_GPR_U32(ctx, 31, 0x1920A0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1920A0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1920A0u) { return; }
    ctx->pc = 0x1920A0u;
label_1920a0:
    // 0x1920a0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1920a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920a4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1920a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1920a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1920ac: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1920acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1920b0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1920b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920b4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1920b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1920b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1920bc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1920bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1920c0: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1920c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920c4: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1920c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1920c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1920cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1920d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1920d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1920d4: 0x0  nop
    ctx->pc = 0x1920d4u;
    // NOP
    // 0x1920d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1920d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1920dc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1920dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1920e0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1920e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920e4: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1920e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1920e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1920ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1920ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1920f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1920f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1920f4: 0x0  nop
    ctx->pc = 0x1920f4u;
    // NOP
    // 0x1920f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1920f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1920fc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1920fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x192100: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x192100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192104: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x192104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192108: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x192108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19210c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x19210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192110: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x192110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192114: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x192114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x192118: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x192118u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x19211c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x19211Cu;
    SET_GPR_U32(ctx, 31, 0x192124u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x19211Cu, 0x192124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192124u;
label_192124:
    // 0x192124: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x192124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192128: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x192128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x19212c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x19212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192130: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x192130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x192134: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19213c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192144: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192148: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x192148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19214c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x19214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192150: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x192150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x192154: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x192154u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192158: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x192158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19215c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x19215cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x192160: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192164: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192168: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19216c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x19216cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x192170: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x192170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x192174: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x192174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x192178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19217c: 0x0  nop
    ctx->pc = 0x19217cu;
    // NOP
    // 0x192180: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x192180u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x192184: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192188: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19218c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192194: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192198: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x192198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19219c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x19219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1921a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1921a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1921a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1921a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1921a8: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x1921a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1921acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1921b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1921b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1921b4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1921b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1921b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1921b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1921bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1921c0: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x1921c4: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x1921c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x1921c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1921c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1921cc: 0x0  nop
    ctx->pc = 0x1921ccu;
    // NOP
    // 0x1921d0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1921d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1921d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1921D4u;
    {
        const bool branch_taken_0x1921d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921d4) {
            ctx->pc = 0x1922D0u;
            goto label_1922d0;
        }
    }
    ctx->pc = 0x1921DCu;
label_1921dc:
    // 0x1921dc: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x1921dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1921e0: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1921e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921e4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1921e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1921e8: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x1921e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1921ec: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1921ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1921f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1921f4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1921f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1921f8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1921F8u;
    SET_GPR_U32(ctx, 31, 0x192200u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1921F8u, 0x192200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192200u;
label_192200:
    // 0x192200: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192208: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19220c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19220cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192210: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192214: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x192214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192218: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x192218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19221c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x19221cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x192220: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x192220u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192224: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x192224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192228: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x192228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19222c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19222cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192230: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192234: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192238: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x192238u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19223c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19223cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x192240: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x192240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x192244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192248: 0x0  nop
    ctx->pc = 0x192248u;
    // NOP
    // 0x19224c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x19224cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x192250: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192258: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x192258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19225c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19225cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192260: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192264: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x192264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192268: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x192268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19226c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x19226cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x192270: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192270u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192274: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x192274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192278: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x192278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19227c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192280: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192284: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x192284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192288: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192288u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19228c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x192290: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x192290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x192294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192298: 0x0  nop
    ctx->pc = 0x192298u;
    // NOP
    // 0x19229c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x19229cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1922a0: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x1922a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1922a4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1922A4u;
    SET_GPR_U32(ctx, 31, 0x1922ACu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1922A4u, 0x1922ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1922ACu;
label_1922ac:
    // 0x1922ac: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1922acu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1922b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1922b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1922b4: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x1922b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1922b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1922B8u;
    {
        const bool branch_taken_0x1922b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1922b8) {
            ctx->pc = 0x1922C8u;
            goto label_1922c8;
        }
    }
    ctx->pc = 0x1922C0u;
    // 0x1922c0: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x1922c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1922c4: 0x0  nop
    ctx->pc = 0x1922c4u;
    // NOP
label_1922c8:
    // 0x1922c8: 0x1ef182  srl         $fp, $fp, 6
    ctx->pc = 0x1922c8u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
    // 0x1922cc: 0x0  nop
    ctx->pc = 0x1922ccu;
    // NOP
label_1922d0:
    // 0x1922d0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1922d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1922d4: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x1922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x1922d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1922d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1922dc: 0x0  nop
    ctx->pc = 0x1922dcu;
    // NOP
    // 0x1922e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1922e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1922e4: 0x0  nop
    ctx->pc = 0x1922e4u;
    // NOP
    // 0x1922e8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1922E8u;
    {
        const bool branch_taken_0x1922e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1922e8) {
            ctx->pc = 0x192318u;
            goto label_192318;
        }
    }
    ctx->pc = 0x1922F0u;
    // 0x1922f0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1922f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1922f4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1922f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1922f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1922fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1922fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192300: 0x0  nop
    ctx->pc = 0x192300u;
    // NOP
    // 0x192304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192308: 0x0  nop
    ctx->pc = 0x192308u;
    // NOP
    // 0x19230c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x19230Cu;
    {
        const bool branch_taken_0x19230c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19230c) {
            ctx->pc = 0x192320u;
            goto label_192320;
        }
    }
    ctx->pc = 0x192314u;
    // 0x192314: 0x0  nop
    ctx->pc = 0x192314u;
    // NOP
label_192318:
    // 0x192318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19231c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19231cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_192320:
    // 0x192320: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x192320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192324: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x192324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x192328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19232c: 0x0  nop
    ctx->pc = 0x19232cu;
    // NOP
    // 0x192330: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192334: 0x0  nop
    ctx->pc = 0x192334u;
    // NOP
    // 0x192338: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x192338u;
    {
        const bool branch_taken_0x192338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192338) {
            ctx->pc = 0x192368u;
            goto label_192368;
        }
    }
    ctx->pc = 0x192340u;
    // 0x192340: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x192340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192344: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x192344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x192348: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x192348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19234c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19234cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192350: 0x0  nop
    ctx->pc = 0x192350u;
    // NOP
    // 0x192354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192358: 0x0  nop
    ctx->pc = 0x192358u;
    // NOP
    // 0x19235c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x19235Cu;
    {
        const bool branch_taken_0x19235c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19235c) {
            ctx->pc = 0x192370u;
            goto label_192370;
        }
    }
    ctx->pc = 0x192364u;
    // 0x192364: 0x0  nop
    ctx->pc = 0x192364u;
    // NOP
label_192368:
    // 0x192368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19236c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19236cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_192370:
    // 0x192370: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x192370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x192374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192374u;
    {
        const bool branch_taken_0x192374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192374) {
            ctx->pc = 0x192388u;
            goto label_192388;
        }
    }
    ctx->pc = 0x19237Cu;
    // 0x19237c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192380: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x192380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x192384: 0x0  nop
    ctx->pc = 0x192384u;
    // NOP
label_192388:
    // 0x192388: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19238c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192390: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x192390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x192394: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19239c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1923a0: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x1923a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1923a4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1923a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1923a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1923a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1923ac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1923b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1923bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1923bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1923c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1923c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1923c4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1923cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1923d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1923d8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1923e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1923e8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1923e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1923ec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1923f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1923fc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192400: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192404: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192408: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x192408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19240c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x19240cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x192410: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192414: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192418: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19241c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19241cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x192420: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192428: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19242c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192430: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192434: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x192434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x192438: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19243c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192440: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192444: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192448: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x192448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19244c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x19244cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x192450: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192458: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19245c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192460: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x192460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x192464: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19246c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192470: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192474: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x192474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192478: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x192478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x19247c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19247cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192484: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192488: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19248c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19248cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x192490: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192498: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19249c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1924a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1924a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1924a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1924a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1924a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1924a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1924ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1924acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1924b0:
    // 0x1924b0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1924b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1924b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1924b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1924b8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1924b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1924bc: 0x1020fec3  beqz        $at, . + 4 + (-0x13D << 2)
    ctx->pc = 0x1924BCu;
    {
        const bool branch_taken_0x1924bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924bc) {
            ctx->pc = 0x191FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191fcc;
        }
    }
    ctx->pc = 0x1924C4u;
    // 0x1924c4: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x1924c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x1924c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1924c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1924cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1924ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1924d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1924D0u;
    {
        const bool branch_taken_0x1924d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1924d0) {
            ctx->pc = 0x1924F0u;
            goto label_1924f0;
        }
    }
    ctx->pc = 0x1924D8u;
    // 0x1924d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1924d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1924dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1924DCu;
    {
        const bool branch_taken_0x1924dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1924dc) {
            ctx->pc = 0x1924F0u;
            goto label_1924f0;
        }
    }
    ctx->pc = 0x1924E4u;
    // 0x1924e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1924e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924e8: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x1924E8u;
    {
        const bool branch_taken_0x1924e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924e8) {
            ctx->pc = 0x19294Cu;
            goto label_19294c;
        }
    }
    ctx->pc = 0x1924F0u;
label_1924f0:
    // 0x1924f0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1924f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1924f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1924f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924fc: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1924FCu;
    {
        const bool branch_taken_0x1924fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924fc) {
            ctx->pc = 0x1927A0u;
            goto label_1927a0;
        }
    }
    ctx->pc = 0x192504u;
label_192504:
    // 0x192504: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x192508: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x192508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x19250c: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x19250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192510: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192514: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x192514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x192518: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19251c: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x19251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192520: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192524: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x192524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192528: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x192528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19252c: 0x0  nop
    ctx->pc = 0x19252cu;
    // NOP
    // 0x192530: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x192530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x192534: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x192534u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x192538: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x192538u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19253c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x19253cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192540: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x192540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192544: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x192544u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x192548: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192548u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19254c: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x19254cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192550: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192550u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192554: 0x4a0003bf  vwaitq
    ctx->pc = 0x192554u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192558: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19255c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19255cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192560: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x192560u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192564: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x192564u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192568: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x192568u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19256c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19256cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192570: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192570u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192574: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x192574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192578: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19257c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192580: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x192580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x192584: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x192584u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x192588: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x19258c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19258cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192590: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x192590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192594: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192594u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192598: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19259c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1925a0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1925a4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1925a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1925a8: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x1925a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x1925ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1925acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1925b0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1925b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1925b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1925b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1925b8: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x1925b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x1925bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1925bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1925c0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1925c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1925c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1925c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1925c8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1925c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1925cc: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x1925ccu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1925d0: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x1925d0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1925d4: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1925d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1925d8: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x1925d8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1925dc: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1925dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1925e0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1925e4: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x1925e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1925e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1925e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1925ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1925ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1925f0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1925f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1925f4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1925f4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1925f8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1925f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1925fc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1925fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192600: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x192604: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192608: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x192608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19260c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19260cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192610: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192618: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x192618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19261c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x19261cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x192620: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x192620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x192624: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192628: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x192628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19262c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19262cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192630: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x192630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x192634: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192638: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x192638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19263c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19263cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192640: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192644: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x192644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x192648: 0x0  nop
    ctx->pc = 0x192648u;
    // NOP
    // 0x19264c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19264cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x192650: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x192650u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x192654: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x192654u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192658: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x192658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19265c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19265cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192660: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192660u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192664: 0x4a0003bf  vwaitq
    ctx->pc = 0x192664u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192668: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19266c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19266cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192670: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192674: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192678: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x19267c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19267cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192680: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192680u;
    {
        const bool branch_taken_0x192680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192680) {
            ctx->pc = 0x192698u;
            goto label_192698;
        }
    }
    ctx->pc = 0x192688u;
    // 0x192688: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19268c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x19268cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192690u;
    {
        const bool branch_taken_0x192690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192690) {
            ctx->pc = 0x1926A0u;
            goto label_1926a0;
        }
    }
    ctx->pc = 0x192698u;
label_192698:
    // 0x192698: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x192698u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19269c: 0x0  nop
    ctx->pc = 0x19269cu;
    // NOP
label_1926a0:
    // 0x1926a0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1926a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1926a4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1926a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1926a8: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1926a8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1926ac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1926acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1926b0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1926b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1926b4: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1926b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1926b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1926b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1926bc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1926bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1926c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1926c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1926c4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1926C4u;
    {
        const bool branch_taken_0x1926c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1926c4) {
            ctx->pc = 0x1926DCu;
            goto label_1926dc;
        }
    }
    ctx->pc = 0x1926CCu;
    // 0x1926cc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1926ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1926d0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1926d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1926d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1926D4u;
    {
        const bool branch_taken_0x1926d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1926d4) {
            ctx->pc = 0x1926E0u;
            goto label_1926e0;
        }
    }
    ctx->pc = 0x1926DCu;
label_1926dc:
    // 0x1926dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1926dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1926e0:
    // 0x1926e0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1926e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1926e4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1926e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1926e8: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1926e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1926ec: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1926ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1926f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1926f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1926f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1926f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1926f8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1926f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1926fc: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1926fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x192700: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x192700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192704: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x192704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19270c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x19270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x192710: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192714: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x192714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192718: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x192718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x19271c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x19271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192720: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x192720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192724: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x192724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192728: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192728u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19272c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x19272cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192730: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192734: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192734u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192738: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x19273c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19273cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192740: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x192740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x192744: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x192744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192748: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x192748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19274c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19274cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192750: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x192754: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192758: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x192758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19275c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19275cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192760: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192760u;
    {
        const bool branch_taken_0x192760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192760) {
            ctx->pc = 0x192778u;
            goto label_192778;
        }
    }
    ctx->pc = 0x192768u;
    // 0x192768: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19276c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x19276cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192770u;
    {
        const bool branch_taken_0x192770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192770) {
            ctx->pc = 0x192780u;
            goto label_192780;
        }
    }
    ctx->pc = 0x192778u;
label_192778:
    // 0x192778: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x192778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19277c: 0x0  nop
    ctx->pc = 0x19277cu;
    // NOP
label_192780:
    // 0x192780: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x192780u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192784: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x192784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x192788: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x192788u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19278c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19278cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192790: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x192790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x192794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x192794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x192798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19279c: 0x0  nop
    ctx->pc = 0x19279cu;
    // NOP
label_1927a0:
    // 0x1927a0: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x1927a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1927a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1927a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1927a8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1927a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1927ac: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
    ctx->pc = 0x1927ACu;
    {
        const bool branch_taken_0x1927ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1927ac) {
            ctx->pc = 0x192504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192504;
        }
    }
    ctx->pc = 0x1927B4u;
    // 0x1927b4: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x1927b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x1927b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1927b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1927bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1927bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1927c0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1927C0u;
    {
        const bool branch_taken_0x1927c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927c0) {
            ctx->pc = 0x19287Cu;
            goto label_19287c;
        }
    }
    ctx->pc = 0x1927C8u;
    // 0x1927c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1927c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1927cc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1927CCu;
    {
        const bool branch_taken_0x1927cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1927cc) {
            ctx->pc = 0x192824u;
            goto label_192824;
        }
    }
    ctx->pc = 0x1927D4u;
    // 0x1927d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1927d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1927d8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1927dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1927dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1927e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1927e4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1927e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1927e8: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x1927e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1927ec: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1927ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1927f0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1927f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1927f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1927f8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1927f8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1927fc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192800: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192804: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x192804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x192808: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19280c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x192810: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x192810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x192814: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192818: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x192818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19281c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19281Cu;
    {
        const bool branch_taken_0x19281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19281c) {
            ctx->pc = 0x192870u;
            goto label_192870;
        }
    }
    ctx->pc = 0x192824u;
label_192824:
    // 0x192824: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192828: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19282c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192834: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192838: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x19283c: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x19283cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x192840: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192844: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x192844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x192848: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19284c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x192850: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x192850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x192854: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x192854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x192858: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x192858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19285c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19285cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x192860: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x192860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x192864: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x192864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192868: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19286c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19286cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_192870:
    // 0x192870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192874: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x192874u;
    {
        const bool branch_taken_0x192874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192874) {
            ctx->pc = 0x19294Cu;
            goto label_19294c;
        }
    }
    ctx->pc = 0x19287Cu;
label_19287c:
    // 0x19287c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192880: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x192884: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x192884u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x192888: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19288c: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x192890: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192894: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192898: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x19289c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1928a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1928a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1928a4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1928a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1928a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1928a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1928ac: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x1928acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1928b0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1928b4: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1928b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1928b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1928b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1928bc: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1928bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x1928c0: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x1928c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x1928c4: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1928c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1928c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1928c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1928cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1928CCu;
    {
        const bool branch_taken_0x1928cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1928cc) {
            ctx->pc = 0x1928E0u;
            goto label_1928e0;
        }
    }
    ctx->pc = 0x1928D4u;
    // 0x1928d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1928d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1928d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1928D8u;
    {
        const bool branch_taken_0x1928d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928d8) {
            ctx->pc = 0x19294Cu;
            goto label_19294c;
        }
    }
    ctx->pc = 0x1928E0u;
label_1928e0:
    // 0x1928e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1928e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1928e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1928e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1928e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1928ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1928ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1928f0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1928f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1928f4: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1928f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1928f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1928f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1928fc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1928fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x192900: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x192904: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x192904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192908: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19290c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19290cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x192910: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192914: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192914u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x192918: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19291c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19291cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192920: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192924: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x192924u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x192928: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x192928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x19292c: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x19292Cu;
    SET_GPR_U32(ctx, 31, 0x192934u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x19292Cu, 0x192934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192934u;
label_192934:
    // 0x192934: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192938: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x19293c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192940: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192944: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x192944u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x192948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19294c:
    // 0x19294c: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x19294cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x192950: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x192950u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192954: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x192954u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192958: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x192958u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19295c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19295cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192960: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x192960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192964: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x192964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192968: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x192968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19296c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19296cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192970: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192974: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x192974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x192978: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x192978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19297c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x19297cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x192980: 0x3e00008  jr          $ra
    ctx->pc = 0x192980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192988u;
}
