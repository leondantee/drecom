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

// Function: Scr_parts_move
// Address: 0x13b8d0 - 0x13bd54
void Scr_parts_move_0x13b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_move_0x13b8d0");
#endif

    switch (ctx->pc) {
        case 0x13b944u: goto label_13b944;
        case 0x13b95cu: goto label_13b95c;
        case 0x13ba38u: goto label_13ba38;
        case 0x13bad8u: goto label_13bad8;
        case 0x13baf0u: goto label_13baf0;
        case 0x13bd0cu: goto label_13bd0c;
        default: break;
    }

    ctx->pc = 0x13b8d0u;

    // 0x13b8d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13b8d4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x13b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x13b8d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13b8dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13b8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13b8e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b8e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b8e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b8ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b8f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b8f8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x13b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x13b8fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13b900: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x13b900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x13b904: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b908: 0x24570080  addiu       $s7, $v0, 0x80
    ctx->pc = 0x13b908u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x13b90c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13b90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x13b910: 0x8c34dbd4  lw          $s4, -0x242C($at)
    ctx->pc = 0x13b910u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3EDBD4u));
    // 0x13b914: 0x14b143  sra         $s6, $s4, 5
    ctx->pc = 0x13b914u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 20), 5));
    // 0x13b918: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13b918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13b91c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x13b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x13b920: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13b924: 0x24023518  addiu       $v0, $zero, 0x3518
    ctx->pc = 0x13b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13592));
    // 0x13b928: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x13b928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13b92c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x13b930: 0x2445e658  addiu       $a1, $v0, -0x19A8
    ctx->pc = 0x13b930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960728));
    // 0x13b934: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x13b934u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x13b938: 0x72c03e28  paddub      $a3, $s6, $zero
    ctx->pc = 0x13b938u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x13b93c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x13B93Cu;
    SET_GPR_U32(ctx, 31, 0x13B944u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x13B93Cu, 0x13B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B944u;
label_13b944:
    // 0x13b944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b948: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x13b948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13b94c: 0x30720001  andi        $s2, $v1, 0x1
    ctx->pc = 0x13b94cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13b950: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x13b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13b954: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x13b954u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x13b958: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x13b958u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_13b95c:
    // 0x13b95c: 0x92030100  lbu         $v1, 0x100($s0)
    ctx->pc = 0x13b95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x13b960: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B960u;
    {
        const bool branch_taken_0x13b960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b960) {
            ctx->pc = 0x13B998u;
            goto label_13b998;
        }
    }
    ctx->pc = 0x13B968u;
    // 0x13b968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b96c: 0xa2030100  sb          $v1, 0x100($s0)
    ctx->pc = 0x13b96cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b970: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13b970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b974: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13b974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b978: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x13b97c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B97Cu;
    {
        const bool branch_taken_0x13b97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b97c) {
            ctx->pc = 0x13B998u;
            goto label_13b998;
        }
    }
    ctx->pc = 0x13B984u;
    // 0x13b984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b988: 0xa2030101  sb          $v1, 0x101($s0)
    ctx->pc = 0x13b988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b98c: 0xa2000102  sb          $zero, 0x102($s0)
    ctx->pc = 0x13b98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b990: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b994: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13b994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
label_13b998:
    // 0x13b998: 0x92030101  lbu         $v1, 0x101($s0)
    ctx->pc = 0x13b998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 257)));
    // 0x13b99c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b9a0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B9A0u;
    {
        const bool branch_taken_0x13b9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b9a0) {
            ctx->pc = 0x13B9B4u;
            goto label_13b9b4;
        }
    }
    ctx->pc = 0x13B9A8u;
    // 0x13b9a8: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13b9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13b9ac: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x13B9ACu;
    {
        const bool branch_taken_0x13b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9ac) {
            ctx->pc = 0x13BD18u;
            goto label_13bd18;
        }
    }
    ctx->pc = 0x13B9B4u;
label_13b9b4:
    // 0x13b9b4: 0x92030101  lbu         $v1, 0x101($s0)
    ctx->pc = 0x13b9b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 257)));
    // 0x13b9b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13b9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b9c0: 0x148300c9  bne         $a0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x13B9C0u;
    {
        const bool branch_taken_0x13b9c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13b9c0) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13B9C8u;
    // 0x13b9c8: 0x92030102  lbu         $v1, 0x102($s0)
    ctx->pc = 0x13b9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x13b9cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13b9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b9d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13b9d4: 0x108300ba  beq         $a0, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x13B9D4u;
    {
        const bool branch_taken_0x13b9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13b9d4) {
            ctx->pc = 0x13BCC0u;
            goto label_13bcc0;
        }
    }
    ctx->pc = 0x13B9DCu;
    // 0x13b9dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b9e0: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x13B9E0u;
    {
        const bool branch_taken_0x13b9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13b9e0) {
            ctx->pc = 0x13BAB8u;
            goto label_13bab8;
        }
    }
    ctx->pc = 0x13B9E8u;
    // 0x13b9e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b9ec: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13B9ECu;
    {
        const bool branch_taken_0x13b9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13b9ec) {
            ctx->pc = 0x13BA18u;
            goto label_13ba18;
        }
    }
    ctx->pc = 0x13B9F4u;
    // 0x13b9f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B9F4u;
    {
        const bool branch_taken_0x13b9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9f4) {
            ctx->pc = 0x13BA04u;
            goto label_13ba04;
        }
    }
    ctx->pc = 0x13B9FCu;
    // 0x13b9fc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x13B9FCu;
    {
        const bool branch_taken_0x13b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9fc) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13BA04u;
label_13ba04:
    // 0x13ba04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ba08: 0xa2020102  sb          $v0, 0x102($s0)
    ctx->pc = 0x13ba08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ba0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x13ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13ba10: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x13ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x13ba14: 0x0  nop
    ctx->pc = 0x13ba14u;
    // NOP
label_13ba18:
    // 0x13ba18: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13ba18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ba1c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x13ba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x13ba20: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x13ba20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ba24: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13ba24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13ba28: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13ba2c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x13ba2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13ba30: 0xc04f560  jal         func_13D580
    ctx->pc = 0x13BA30u;
    SET_GPR_U32(ctx, 31, 0x13BA38u);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x13BA30u, 0x13BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA38u;
label_13ba38:
    // 0x13ba38: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13ba3c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13ba40: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x13ba40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13ba44: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13ba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13ba48: 0x8c23b7b8  lw          $v1, -0x4848($at)
    ctx->pc = 0x13ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7B8u));
    // 0x13ba4c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x13ba4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13ba50: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x13ba50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x13ba54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13ba54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ba58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13ba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13ba5c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x13ba5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ba60: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13ba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13ba64: 0x8c23b7bc  lw          $v1, -0x4844($at)
    ctx->pc = 0x13ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7BCu));
    // 0x13ba68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13ba68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ba6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13ba6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13ba70: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13ba74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13ba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13ba78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13ba7c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x13ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x13ba80: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13ba84: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x13ba84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x13ba88: 0x10200097  beqz        $at, . + 4 + (0x97 << 2)
    ctx->pc = 0x13BA88u;
    {
        const bool branch_taken_0x13ba88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba88) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13BA90u;
    // 0x13ba90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13ba90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13ba94: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13ba98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13ba9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13baa0: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x13BAA0u;
    {
        const bool branch_taken_0x13baa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baa0) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13BAA8u;
    // 0x13baa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13baac: 0xa2030102  sb          $v1, 0x102($s0)
    ctx->pc = 0x13baacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bab0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x13BAB0u;
    {
        const bool branch_taken_0x13bab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bab0) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13BAB8u;
label_13bab8:
    // 0x13bab8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13bab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13babc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13bac0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x13bac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13bac4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13bac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13bac8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x13bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13bacc: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x13baccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13bad0: 0xc04f560  jal         func_13D580
    ctx->pc = 0x13BAD0u;
    SET_GPR_U32(ctx, 31, 0x13BAD8u);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x13BAD0u, 0x13BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAD8u;
label_13bad8:
    // 0x13bad8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x13bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13badc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13badcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13bae0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13bae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13bae4: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x13bae4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13bae8: 0xc04f588  jal         func_13D620
    ctx->pc = 0x13BAE8u;
    SET_GPR_U32(ctx, 31, 0x13BAF0u);
    ctx->pc = 0x13D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D620u, 0x13BAE8u, 0x13BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAF0u;
label_13baf0:
    // 0x13baf0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13baf4: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x13baf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x13baf8: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x13BAF8u;
    {
        const bool branch_taken_0x13baf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baf8) {
            ctx->pc = 0x13BC18u;
            goto label_13bc18;
        }
    }
    ctx->pc = 0x13BB00u;
    // 0x13bb00: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x13bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13bb04: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb08: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb0c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x13bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13bb10: 0x28610031  slti        $at, $v1, 0x31
    ctx->pc = 0x13bb10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x13bb14: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13BB14u;
    {
        const bool branch_taken_0x13bb14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb14) {
            ctx->pc = 0x13BB68u;
            goto label_13bb68;
        }
    }
    ctx->pc = 0x13BB1Cu;
    // 0x13bb1c: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13bb20: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13bb24: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bb28: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x13bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13bb2c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x13bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13bb30: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bb34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13bb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bb38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bb3c: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb40: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb40u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb44: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bb48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bb48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bb4c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x13bb4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x13bb50: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BB50u;
    {
        const bool branch_taken_0x13bb50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb50) {
            ctx->pc = 0x13BB68u;
            goto label_13bb68;
        }
    }
    ctx->pc = 0x13BB58u;
    // 0x13bb58: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13bb5c: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb60: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb64: 0x0  nop
    ctx->pc = 0x13bb64u;
    // NOP
label_13bb68:
    // 0x13bb68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bb6c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13bb70: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13bb74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bb78: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BB78u;
    {
        const bool branch_taken_0x13bb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb78) {
            ctx->pc = 0x13BB90u;
            goto label_13bb90;
        }
    }
    ctx->pc = 0x13BB80u;
    // 0x13bb80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bb84: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb88: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb88u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb8c: 0x0  nop
    ctx->pc = 0x13bb8cu;
    // NOP
label_13bb90:
    // 0x13bb90: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bb94: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bb98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bb98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bb9c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13bb9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13bba0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13BBA0u;
    {
        const bool branch_taken_0x13bba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bba0) {
            ctx->pc = 0x13BBE0u;
            goto label_13bbe0;
        }
    }
    ctx->pc = 0x13BBA8u;
    // 0x13bba8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbac: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x13bbb0: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bbb4: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbb8: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bbbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bbbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bbc0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x13bbc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13bbc4: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x13BBC4u;
    {
        const bool branch_taken_0x13bbc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bbc4) {
            ctx->pc = 0x13BC40u;
            goto label_13bc40;
        }
    }
    ctx->pc = 0x13BBCCu;
    // 0x13bbcc: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bbd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bbd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bbd4: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bbd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13BBD8u;
    {
        const bool branch_taken_0x13bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbd8) {
            ctx->pc = 0x13BC40u;
            goto label_13bc40;
        }
    }
    ctx->pc = 0x13BBE0u;
label_13bbe0:
    // 0x13bbe0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbe4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13bbe8: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bbec: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbf0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bbf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bbf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bbf8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13bbf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13bbfc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BBFCu;
    {
        const bool branch_taken_0x13bbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bbfc) {
            ctx->pc = 0x13BC40u;
            goto label_13bc40;
        }
    }
    ctx->pc = 0x13BC04u;
    // 0x13bc04: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bc08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bc08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bc0c: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bc10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13BC10u;
    {
        const bool branch_taken_0x13bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc10) {
            ctx->pc = 0x13BC40u;
            goto label_13bc40;
        }
    }
    ctx->pc = 0x13BC18u;
label_13bc18:
    // 0x13bc18: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bc1c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13bc20: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bc24: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bc28: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x13bc28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13bc2c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BC2Cu;
    {
        const bool branch_taken_0x13bc2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bc2c) {
            ctx->pc = 0x13BC40u;
            goto label_13bc40;
        }
    }
    ctx->pc = 0x13BC34u;
    // 0x13bc34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bc38: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bc3c: 0xa2000102  sb          $zero, 0x102($s0)
    ctx->pc = 0x13bc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 0));
label_13bc40:
    // 0x13bc40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bc44: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13bc48: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13bc4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bc50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BC50u;
    {
        const bool branch_taken_0x13bc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bc50) {
            ctx->pc = 0x13BC70u;
            goto label_13bc70;
        }
    }
    ctx->pc = 0x13BC58u;
    // 0x13bc58: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bc5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bc60: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BC60u;
    {
        const bool branch_taken_0x13bc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13bc60) {
            ctx->pc = 0x13BC70u;
            goto label_13bc70;
        }
    }
    ctx->pc = 0x13BC68u;
    // 0x13bc68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc6c: 0xa2030102  sb          $v1, 0x102($s0)
    ctx->pc = 0x13bc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 3));
label_13bc70:
    // 0x13bc70: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13bc74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13bc78: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x13bc78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13bc7c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13bc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13bc80: 0x8c23b7d0  lw          $v1, -0x4830($at)
    ctx->pc = 0x13bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7D0u));
    // 0x13bc84: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x13bc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13bc88: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x13bc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x13bc8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13bc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13bc90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13bc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13bc94: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x13bc94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13bc98: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13bc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13bc9c: 0x8c23b7d4  lw          $v1, -0x482C($at)
    ctx->pc = 0x13bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7D4u));
    // 0x13bca0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13bca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13bca4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13bca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13bca8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13bcac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13bcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13bcb0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13bcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13bcb4: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x13bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x13bcb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13BCB8u;
    {
        const bool branch_taken_0x13bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcb8) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13BCC0u;
label_13bcc0:
    // 0x13bcc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bcc4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13bcc8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13bccc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bcd0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BCD0u;
    {
        const bool branch_taken_0x13bcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bcd0) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13BCD8u;
    // 0x13bcd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bcdc: 0xa2030102  sb          $v1, 0x102($s0)
    ctx->pc = 0x13bcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bce0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bce4: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
label_13bce8:
    // 0x13bce8: 0x92030101  lbu         $v1, 0x101($s0)
    ctx->pc = 0x13bce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 257)));
    // 0x13bcec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13bcecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13bcf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bcf4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BCF4u;
    {
        const bool branch_taken_0x13bcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13bcf4) {
            ctx->pc = 0x13BD10u;
            goto label_13bd10;
        }
    }
    ctx->pc = 0x13BCFCu;
    // 0x13bcfc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13bcfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13bd00: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13bd00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13bd04: 0xc04f7e0  jal         func_13DF80
    ctx->pc = 0x13BD04u;
    SET_GPR_U32(ctx, 31, 0x13BD0Cu);
    ctx->pc = 0x13DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF80u, 0x13BD04u, 0x13BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD0Cu;
label_13bd0c:
    // 0x13bd0c: 0x0  nop
    ctx->pc = 0x13bd0cu;
    // NOP
label_13bd10:
    // 0x13bd10: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13bd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13bd14: 0x0  nop
    ctx->pc = 0x13bd14u;
    // NOP
label_13bd18:
    // 0x13bd18: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x13bd18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x13bd1c: 0x16a0ff0f  bnez        $s5, . + 4 + (-0xF1 << 2)
    ctx->pc = 0x13BD1Cu;
    {
        const bool branch_taken_0x13bd1c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bd1c) {
            ctx->pc = 0x13B95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b95c;
        }
    }
    ctx->pc = 0x13BD24u;
    // 0x13bd24: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x13bd24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13bd28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13bd28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bd2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13bd2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bd30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13bd30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bd34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13bd34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bd38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bd38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bd3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bd40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bd48: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD54u;
}
