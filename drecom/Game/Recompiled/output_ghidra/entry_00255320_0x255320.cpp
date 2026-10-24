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

// Function: entry_00255320
// Address: 0x255320 - 0x255468
void entry_00255320_0x255320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255320_0x255320");
#endif

    ctx->pc = 0x255320u;

    // 0x255320: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x255320u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255324: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x255324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x255328: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x255328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x25532c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x25532cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x255330: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x255330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x255334: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x255334u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x255338: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x25533c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x25533cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x255340: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255344: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x255344u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x255348: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x255348u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x25534c: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x25534cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x255350: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x255350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x255354: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255358: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x255358u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x25535c: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x25535cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x255360: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x255360u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x255364: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x255364u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x255368: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x255368u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x25536c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x25536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x255370: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255374: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255378: 0x262b021  addu        $s6, $s3, $v0
    ctx->pc = 0x255378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25537c: 0xaec30058  sw          $v1, 0x58($s6)
    ctx->pc = 0x25537cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 3));
    // 0x255380: 0x8fb700bc  lw          $s7, 0xBC($sp)
    ctx->pc = 0x255380u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255384: 0x17f13c  dsll32      $fp, $s7, 4
    ctx->pc = 0x255384u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 23) << (32 + 4));
    // 0x255388: 0x1ef13e  dsrl32      $fp, $fp, 4
    ctx->pc = 0x255388u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 4));
    // 0x25538c: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x25538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x255390: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255394: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255398: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x255398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x25539c: 0x36120004  ori         $s2, $s0, 0x4
    ctx->pc = 0x25539cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x2553a0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2553a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2553a4: 0xfea20030  sd          $v0, 0x30($s5)
    ctx->pc = 0x2553a4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 2));
    // 0x2553a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2553a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2553ac: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2553acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x2553b0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2553b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2553b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2553b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2553b8: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x2553b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x2553bc: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2553bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2553c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2553c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2553c8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2553c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2553cc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2553ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2553d0: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2553d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2553d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2553d8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2553d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2553dc: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x2553dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2553e0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2553e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2553e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2553e8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2553ec: 0x8c570038  lw          $s7, 0x38($v0)
    ctx->pc = 0x2553ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2553f0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2553f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2553f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2553f8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2553f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2553fc: 0x8c5e0040  lw          $fp, 0x40($v0)
    ctx->pc = 0x2553fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x255400: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255404: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255408: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x255408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25540c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x25540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x255410: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255414: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x255414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255418: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x25541c: 0x94550000  lhu         $s5, 0x0($v0)
    ctx->pc = 0x25541cu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255420: 0x32b2ffff  andi        $s2, $s5, 0xFFFF
    ctx->pc = 0x255420u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x255424: 0x2643002f  addiu       $v1, $s2, 0x2F
    ctx->pc = 0x255424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 47));
    // 0x255428: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25542c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x25542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x255430: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x255430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x255434: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x255434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x255438: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x255438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x25543c: 0x0  nop
    ctx->pc = 0x25543cu;
    // NOP
    // 0x255440: 0x1010  mfhi        $v0
    ctx->pc = 0x255440u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x255444: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x255444u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x255448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25544c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x25544cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x255450: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255458: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25545c: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x25545cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x255460: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x255460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x255464: 0x0  nop
    ctx->pc = 0x255464u;
    // NOP
    ctx->pc = 0x255468u;
}
