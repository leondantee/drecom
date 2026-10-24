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

// Function: MappingT32
// Address: 0x17a160 - 0x17a58c
void MappingT32_0x17a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MappingT32_0x17a160");
#endif

    switch (ctx->pc) {
        case 0x17a1d0u: goto label_17a1d0;
        case 0x17a370u: goto label_17a370;
        case 0x17a498u: goto label_17a498;
        case 0x17a4ecu: goto label_17a4ec;
        case 0x17a518u: goto label_17a518;
        case 0x17a558u: goto label_17a558;
        default: break;
    }

    ctx->pc = 0x17a160u;

    // 0x17a160: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x17a164: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x17a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x17a168: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17a16c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17a170: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17a174: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17a178: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17a17c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17a180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a18c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x17a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x17a190: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x17a190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x17a194: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x17a194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x17a198: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x17a198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x17a19c: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x17a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
    // 0x17a1a0: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x17a1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17a1a4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x17a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17a1a8: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x17a1a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a1ac: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x17a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17a1b0: 0x242b021  addu        $s6, $s2, $v0
    ctx->pc = 0x17a1b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a1b4: 0x26510018  addiu       $s1, $s2, 0x18
    ctx->pc = 0x17a1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x17a1b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a1bc: 0x2f07c  dsll32      $fp, $v0, 1
    ctx->pc = 0x17a1bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 1));
    // 0x17a1c0: 0x1ef07e  dsrl32      $fp, $fp, 1
    ctx->pc = 0x17a1c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 1));
    // 0x17a1c4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x17a1c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a1c8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x17A1C8u;
    {
        const bool branch_taken_0x17a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a1c8) {
            ctx->pc = 0x17A468u;
            goto label_17a468;
        }
    }
    ctx->pc = 0x17A1D0u;
label_17a1d0:
    // 0x17a1d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x17a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17a1d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x17a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17a1d8: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x17A1D8u;
    {
        const bool branch_taken_0x17a1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a1d8) {
            ctx->pc = 0x17A460u;
            goto label_17a460;
        }
    }
    ctx->pc = 0x17A1E0u;
    // 0x17a1e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x17a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17a1e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17a1e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a1ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17a1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a1f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17a1f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17a1fc: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x17a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x17a200: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x17a200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a208: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x17a208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a210: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x17a210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a214: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x17a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17a218: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a21c: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17a220: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17a220u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17a224: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a228: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A228u;
    {
        const bool branch_taken_0x17a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a228) {
            ctx->pc = 0x17A288u;
            goto label_17a288;
        }
    }
    ctx->pc = 0x17A230u;
    // 0x17a230: 0x97a200aa  lhu         $v0, 0xAA($sp)
    ctx->pc = 0x17a230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x17a234: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x17a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x17a238: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x17a238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x17a23c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17a240: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17A240u;
    {
        const bool branch_taken_0x17a240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a240) {
            ctx->pc = 0x17A270u;
            goto label_17a270;
        }
    }
    ctx->pc = 0x17A248u;
    // 0x17a248: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x17a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x17a24c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A24Cu;
    {
        const bool branch_taken_0x17a24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a24c) {
            ctx->pc = 0x17A25Cu;
            goto label_17a25c;
        }
    }
    ctx->pc = 0x17A254u;
    // 0x17a254: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17A254u;
    {
        const bool branch_taken_0x17a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a254) {
            ctx->pc = 0x17A284u;
            goto label_17a284;
        }
    }
    ctx->pc = 0x17A25Cu;
label_17a25c:
    // 0x17a25c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a264: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x17a264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a268: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17A268u;
    {
        const bool branch_taken_0x17a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a268) {
            ctx->pc = 0x17A288u;
            goto label_17a288;
        }
    }
    ctx->pc = 0x17A270u;
label_17a270:
    // 0x17a270: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a278: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x17a278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A27Cu;
    {
        const bool branch_taken_0x17a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a27c) {
            ctx->pc = 0x17A288u;
            goto label_17a288;
        }
    }
    ctx->pc = 0x17A284u;
label_17a284:
    // 0x17a284: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17a284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_17a288:
    // 0x17a288: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x17a288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17a28c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17a28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a290: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x17a290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x17a294: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a298: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x17a298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17a29c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17a2a0: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x17a2a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x17a2a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2a8: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x17a2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2ac: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x17a2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x17a2b0: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x17a2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2b4: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x17a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x17a2b8: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x17a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x17a2bc: 0x93a200ab  lbu         $v0, 0xAB($sp)
    ctx->pc = 0x17a2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 171)));
    // 0x17a2c0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x17a2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x17a2c4: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x17a2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x17a2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a2cc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x17a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x17a2d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2d4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x17a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a2dc: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x17a2dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a2e0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x17a2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x17a2e4: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x17a2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x17a2e8: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x17a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x17a2ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2f0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x17a2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a2f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x17a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x17a2f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17a2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a2fc: 0x97a200a8  lhu         $v0, 0xA8($sp)
    ctx->pc = 0x17a2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a300: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x17a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x17a304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a308: 0x97a400a8  lhu         $a0, 0xA8($sp)
    ctx->pc = 0x17a308u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a30c: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x17a30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x17a310: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x17a310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x17a314: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a318: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a31c: 0xa7a200a8  sh          $v0, 0xA8($sp)
    ctx->pc = 0x17a31cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a320: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17a324: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17a324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a328: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17a328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17a32c: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x17a32cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a330: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x17a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x17a334: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x17a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x17a338: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x17a338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x17a33c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a340: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x17a340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a344: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17a348: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a34c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17a34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17a350: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x17a350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a354: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x17a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x17a358: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x17a358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x17a35c: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x17a35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x17a360: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17a360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a364: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x17a364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x17a368: 0xc05e990  jal         func_17A640
    ctx->pc = 0x17A368u;
    SET_GPR_U32(ctx, 31, 0x17A370u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x17A368u, 0x17A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A370u;
label_17a370:
    // 0x17a370: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a374: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a378: 0xdfa300a8  ld          $v1, 0xA8($sp)
    ctx->pc = 0x17a378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17a37c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x17a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x17a380: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x17a380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x17a384: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x17a384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x17a388: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x17a388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x17a38c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x17a38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17a390: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x17a390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17a394: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x17a394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x17a398: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x17a398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x17a39c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17a39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17a3a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17a3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17a3a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a3a8: 0xffa200a8  sd          $v0, 0xA8($sp)
    ctx->pc = 0x17a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
    // 0x17a3ac: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17a3b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17a3b4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x17a3b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17a3b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a3bc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17A3BCu;
    {
        const bool branch_taken_0x17a3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a3bc) {
            ctx->pc = 0x17A400u;
            goto label_17a400;
        }
    }
    ctx->pc = 0x17A3C4u;
    // 0x17a3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a3c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A3C8u;
    {
        const bool branch_taken_0x17a3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a3c8) {
            ctx->pc = 0x17A3D8u;
            goto label_17a3d8;
        }
    }
    ctx->pc = 0x17A3D0u;
    // 0x17a3d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17A3D0u;
    {
        const bool branch_taken_0x17a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a3d0) {
            ctx->pc = 0x17A420u;
            goto label_17a420;
        }
    }
    ctx->pc = 0x17A3D8u;
label_17a3d8:
    // 0x17a3d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a3dc: 0x93a400af  lbu         $a0, 0xAF($sp)
    ctx->pc = 0x17a3dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x17a3e0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17a3e4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17a3e8: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x17a3ec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a3f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a3f4: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x17a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a3f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17A3F8u;
    {
        const bool branch_taken_0x17a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a3f8) {
            ctx->pc = 0x17A420u;
            goto label_17a420;
        }
    }
    ctx->pc = 0x17A400u;
label_17a400:
    // 0x17a400: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17a404: 0x93a400af  lbu         $a0, 0xAF($sp)
    ctx->pc = 0x17a404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x17a408: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17a40c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17a410: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x17a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x17a414: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a418: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a41c: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x17a41cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
label_17a420:
    // 0x17a420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a424: 0x93a400ac  lbu         $a0, 0xAC($sp)
    ctx->pc = 0x17a424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x17a428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17a42c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a430: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x17a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17a434: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a438: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a43c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x17a43cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a440: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17a444: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x17a444u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a448: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x17a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17a44c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17a450: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x17a450u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17a454: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x17a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17a458: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17a458u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17a45c: 0x0  nop
    ctx->pc = 0x17a45cu;
    // NOP
label_17a460:
    // 0x17a460: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x17a460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x17a464: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17a464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17a468:
    // 0x17a468: 0x27e102b  sltu        $v0, $s3, $fp
    ctx->pc = 0x17a468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x17a46c: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x17A46Cu;
    {
        const bool branch_taken_0x17a46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a46c) {
            ctx->pc = 0x17A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a1d0;
        }
    }
    ctx->pc = 0x17A474u;
    // 0x17a474: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a478: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17a47c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17a480: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x17A480u;
    {
        const bool branch_taken_0x17a480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a480) {
            ctx->pc = 0x17A54Cu;
            goto label_17a54c;
        }
    }
    ctx->pc = 0x17A488u;
    // 0x17a488: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x17a488u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x17a48c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x17a48cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a490: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17A490u;
    {
        const bool branch_taken_0x17a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a490) {
            ctx->pc = 0x17A4C8u;
            goto label_17a4c8;
        }
    }
    ctx->pc = 0x17A498u;
label_17a498:
    // 0x17a498: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x17a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17a49c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x17a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17a4a0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x17a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x17a4a4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x17a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17a4a8: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17a4ac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x17a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17a4b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x17a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x17a4b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a4b8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x17a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x17a4bc: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x17a4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17a4c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17a4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17a4c4: 0x0  nop
    ctx->pc = 0x17a4c4u;
    // NOP
label_17a4c8:
    // 0x17a4c8: 0x96420010  lhu         $v0, 0x10($s2)
    ctx->pc = 0x17a4c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a4cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a4d0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x17a4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a4d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17A4D4u;
    {
        const bool branch_taken_0x17a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a4d4) {
            ctx->pc = 0x17A498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a498;
        }
    }
    ctx->pc = 0x17A4DCu;
    // 0x17a4dc: 0x72c0be28  paddub      $s7, $s6, $zero
    ctx->pc = 0x17a4dcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x17a4e0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x17a4e0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a4e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17A4E4u;
    {
        const bool branch_taken_0x17a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4e4) {
            ctx->pc = 0x17A528u;
            goto label_17a528;
        }
    }
    ctx->pc = 0x17A4ECu;
label_17a4ec:
    // 0x17a4ec: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17a4f0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x17a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17a4f4: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x17a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x17a4f8: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17a4fc: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x17a4fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17a500: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x17a500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17a504: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17a504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a508: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17a50c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a510: 0xc05e990  jal         func_17A640
    ctx->pc = 0x17A510u;
    SET_GPR_U32(ctx, 31, 0x17A518u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x17A510u, 0x17A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A518u;
label_17a518:
    // 0x17a518: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a51c: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x17a51cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a520: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x17a520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x17a524: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17a524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17a528:
    // 0x17a528: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x17a528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x17a52c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a530: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x17a530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a534: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17A534u;
    {
        const bool branch_taken_0x17a534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a534) {
            ctx->pc = 0x17A4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a4ec;
        }
    }
    ctx->pc = 0x17A53Cu;
    // 0x17a53c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a540: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17a544: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a548: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17a548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17a54c:
    // 0x17a54c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17a54cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a550: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17A550u;
    SET_GPR_U32(ctx, 31, 0x17A558u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17A558u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A558u) { return; }
    ctx->pc = 0x17A558u;
label_17a558:
    // 0x17a558: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x17a558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a55c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17a55cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17a560: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17a560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a564: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17a564u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17a568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a56c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a56cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a580: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x17a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17a584: 0x3e00008  jr          $ra
    ctx->pc = 0x17A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A58Cu;
}
