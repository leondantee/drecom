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

// Function: Md_parts_lnk_db
// Address: 0x257250 - 0x25753c
void Md_parts_lnk_db_0x257250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_lnk_db_0x257250");
#endif

    switch (ctx->pc) {
        case 0x2572ccu: goto label_2572cc;
        case 0x257384u: goto label_257384;
        case 0x257434u: goto label_257434;
        case 0x257510u: goto label_257510;
        default: break;
    }

    ctx->pc = 0x257250u;

    // 0x257250: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x257250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x257254: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x257254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x257258: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x257258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25725c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x257260: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x257260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x257264: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x257268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25726c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257274: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x257274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x257278: 0xa7a50088  sh          $a1, 0x88($sp)
    ctx->pc = 0x257278u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 5));
    // 0x25727c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257280: 0x8c74000c  lw          $s4, 0xC($v1)
    ctx->pc = 0x257280u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x257284: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x257288: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257288u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25728c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x25728cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257290: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x257290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x257294: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257298: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x257298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25729c: 0x263a821  addu        $s5, $s3, $v1
    ctx->pc = 0x25729cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2572a0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2572a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2572a4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x2572a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2572a8: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x2572a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2572ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2572acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2572b0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2572b4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2572b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2572b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2572b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2572bc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2572bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2572c0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2572c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2572c4: 0x3913c  dsll32      $s2, $v1, 4
    ctx->pc = 0x2572c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2572c8: 0x12913e  dsrl32      $s2, $s2, 4
    ctx->pc = 0x2572c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 4));
label_2572cc:
    // 0x2572cc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2572ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2572d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2572d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2572d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2572d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2572d8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2572D8u;
    {
        const bool branch_taken_0x2572d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2572d8) {
            ctx->pc = 0x257350u;
            goto label_257350;
        }
    }
    ctx->pc = 0x2572E0u;
    // 0x2572e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2572e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2572e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2572e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2572e8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2572e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2572ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2572ECu;
    {
        const bool branch_taken_0x2572ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2572ec) {
            ctx->pc = 0x257308u;
            goto label_257308;
        }
    }
    ctx->pc = 0x2572F4u;
    // 0x2572f4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2572f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2572f8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2572f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2572fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2572FCu;
    {
        const bool branch_taken_0x2572fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2572fc) {
            ctx->pc = 0x257320u;
            goto label_257320;
        }
    }
    ctx->pc = 0x257304u;
    // 0x257304: 0x0  nop
    ctx->pc = 0x257304u;
    // NOP
label_257308:
    // 0x257308: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25730c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25730cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257310: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x257310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x257314: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257314u;
    {
        const bool branch_taken_0x257314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257314) {
            ctx->pc = 0x257350u;
            goto label_257350;
        }
    }
    ctx->pc = 0x25731Cu;
    // 0x25731c: 0x0  nop
    ctx->pc = 0x25731cu;
    // NOP
label_257320:
    // 0x257320: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x257320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257324: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25732c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257330: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x257330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257334: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257338: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x257338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25733c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257344: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257348: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x257348u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x25734c: 0x0  nop
    ctx->pc = 0x25734cu;
    // NOP
label_257350:
    // 0x257350: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257354: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257358: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25735c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257360: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257364: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257368: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25736c: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x25736Cu;
    {
        const bool branch_taken_0x25736c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25736c) {
            ctx->pc = 0x2572CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2572cc;
        }
    }
    ctx->pc = 0x257374u;
    // 0x257374: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257374u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257378: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x257378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25737c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x25737cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257380: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_257384:
    // 0x257384: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257388: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25738c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257390: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x257390u;
    {
        const bool branch_taken_0x257390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257390) {
            ctx->pc = 0x257400u;
            goto label_257400;
        }
    }
    ctx->pc = 0x257398u;
    // 0x257398: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25739c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2573a0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2573a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2573a4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2573A4u;
    {
        const bool branch_taken_0x2573a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2573a4) {
            ctx->pc = 0x257400u;
            goto label_257400;
        }
    }
    ctx->pc = 0x2573ACu;
    // 0x2573ac: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2573acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2573b0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2573b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2573b4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2573B4u;
    {
        const bool branch_taken_0x2573b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2573b4) {
            ctx->pc = 0x257400u;
            goto label_257400;
        }
    }
    ctx->pc = 0x2573BCu;
    // 0x2573bc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2573bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2573c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2573c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2573c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2573c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2573c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2573C8u;
    {
        const bool branch_taken_0x2573c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2573c8) {
            ctx->pc = 0x257400u;
            goto label_257400;
        }
    }
    ctx->pc = 0x2573D0u;
    // 0x2573d0: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x2573d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2573d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2573d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2573d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2573d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2573dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2573dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2573e0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2573e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2573e4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2573e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2573e8: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x2573e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2573ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2573ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2573f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2573f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2573f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2573f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2573f8: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x2573f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2573fc: 0x0  nop
    ctx->pc = 0x2573fcu;
    // NOP
label_257400:
    // 0x257400: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257404: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25740c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257410: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257414: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257418: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25741c: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x25741Cu;
    {
        const bool branch_taken_0x25741c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25741c) {
            ctx->pc = 0x257384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257384;
        }
    }
    ctx->pc = 0x257424u;
    // 0x257424: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257424u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257428: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x257428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25742c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x25742cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257430: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_257434:
    // 0x257434: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257438: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25743c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257440: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x257440u;
    {
        const bool branch_taken_0x257440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257440) {
            ctx->pc = 0x257490u;
            goto label_257490;
        }
    }
    ctx->pc = 0x257448u;
    // 0x257448: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25744c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257450: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x257450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257454: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257454u;
    {
        const bool branch_taken_0x257454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257454) {
            ctx->pc = 0x257490u;
            goto label_257490;
        }
    }
    ctx->pc = 0x25745Cu;
    // 0x25745c: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x25745cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257460: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257468: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25746c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x25746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257470: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257474: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x257474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257478: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25747c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25747cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257480: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257484: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x257484u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x257488: 0x0  nop
    ctx->pc = 0x257488u;
    // NOP
    // 0x25748c: 0x0  nop
    ctx->pc = 0x25748cu;
    // NOP
label_257490:
    // 0x257490: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257494: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25749c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2574a0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x2574a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2574a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2574a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2574a8: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2574a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2574ac: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2574ACu;
    {
        const bool branch_taken_0x2574ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2574ac) {
            ctx->pc = 0x257434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257434;
        }
    }
    ctx->pc = 0x2574B4u;
    // 0x2574b4: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x2574b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2574b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2574b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2574bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2574bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2574c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2574c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2574c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2574c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2574c8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x2574c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2574cc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2574ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2574d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2574d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2574d4: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x2574d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x2574d8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2574dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2574dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2574e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2574E0u;
    {
        const bool branch_taken_0x2574e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2574e0) {
            ctx->pc = 0x257500u;
            goto label_257500;
        }
    }
    ctx->pc = 0x2574E8u;
    // 0x2574e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2574e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2574ec: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x2574ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x2574f0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2574f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2574f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2574f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2574f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2574F8u;
    {
        const bool branch_taken_0x2574f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2574f8) {
            ctx->pc = 0x257510u;
            goto label_257510;
        }
    }
    ctx->pc = 0x257500u;
label_257500:
    // 0x257500: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257504: 0x97a50088  lhu         $a1, 0x88($sp)
    ctx->pc = 0x257504u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257508: 0xc095d50  jal         func_257540
    ctx->pc = 0x257508u;
    SET_GPR_U32(ctx, 31, 0x257510u);
    ctx->pc = 0x257540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257540u, 0x257508u, 0x257510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257510u;
label_257510:
    // 0x257510: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x257510u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257514: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x257514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257518: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x257518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25751c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25751cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x257520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25752c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25752cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257530: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x257530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x257534: 0x3e00008  jr          $ra
    ctx->pc = 0x257534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25753Cu;
}
