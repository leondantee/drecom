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

// Function: Md_set_parts_vutype_db
// Address: 0x2591b0 - 0x259554
void Md_set_parts_vutype_db_0x2591b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_parts_vutype_db_0x2591b0");
#endif

    switch (ctx->pc) {
        case 0x259374u: goto label_259374;
        case 0x2593d0u: goto label_2593d0;
        case 0x2594f0u: goto label_2594f0;
        default: break;
    }

    ctx->pc = 0x2591b0u;

    // 0x2591b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2591b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2591b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2591b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2591b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2591b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2591bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2591bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2591c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2591c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2591c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2591c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2591c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2591c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2591cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2591ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2591d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2591d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2591d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2591d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2591d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2591d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2591dc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2591dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2591e0: 0xa3a500b8  sb          $a1, 0xB8($sp)
    ctx->pc = 0x2591e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 5));
    // 0x2591e4: 0xa3a600c0  sb          $a2, 0xC0($sp)
    ctx->pc = 0x2591e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 6));
    // 0x2591e8: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x2591e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x2591ec: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2591ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2591f0: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2591f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2591f4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2591f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2591f8: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2591f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x2591fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2591fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259200: 0x8c750058  lw          $s5, 0x58($v1)
    ctx->pc = 0x259200u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x259204: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x259204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x259208: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x259208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x25920c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x259210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x259214: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x259214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259218: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x259218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25921c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25921cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x259220: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x259220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x259224: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259228: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x259228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x25922c: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x25922cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259230: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259238: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x259238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x25923c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x259240: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x259240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x259244: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x259244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x259248: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25924c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x25924cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x259250: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x259250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x259254: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x259254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x259258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25925c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x25925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x259260: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259264: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x259264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x259268: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x259268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x25926c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x25926cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x259270: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x259270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x259274: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259278: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x259278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25927c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x25927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x259280: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x259280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x259284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259288: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x259288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25928c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x25928cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x259290: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x259290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x259294: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x259294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259298: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x259298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25929c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25929cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2592a0: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x2592a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2592a4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2592a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2592a8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2592a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2592ac: 0x8eb10034  lw          $s1, 0x34($s5)
    ctx->pc = 0x2592acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2592b0: 0x8eb60030  lw          $s6, 0x30($s5)
    ctx->pc = 0x2592b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2592b4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2592b4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2592b8: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x2592b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2592bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2592bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2592c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2592c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2592c4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2592c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2592c8: 0x8c7e0010  lw          $fp, 0x10($v1)
    ctx->pc = 0x2592c8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2592cc: 0x26a30060  addiu       $v1, $s5, 0x60
    ctx->pc = 0x2592ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x2592d0: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2592d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2592d4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2592d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2592d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2592d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2592dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2592dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2592e0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2592e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2592e4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2592e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2592e8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2592e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2592ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2592ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2592f0: 0xffc30010  sd          $v1, 0x10($fp)
    ctx->pc = 0x2592f0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 3));
    // 0x2592f4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x2592f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x2592f8: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x2592f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x2592fc: 0x346303fe  ori         $v1, $v1, 0x3FE
    ctx->pc = 0x2592fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1022);
    // 0x259300: 0xafc3001c  sw          $v1, 0x1C($fp)
    ctx->pc = 0x259300u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 3));
    // 0x259304: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x259304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259308: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x259308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25930c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25930cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259310: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x259310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x259314: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x259314u;
    {
        const bool branch_taken_0x259314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259314) {
            ctx->pc = 0x25933Cu;
            goto label_25933c;
        }
    }
    ctx->pc = 0x25931Cu;
    // 0x25931c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259320: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x259320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x259324: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259328: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x259328u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x25932c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259330: 0xaea30068  sw          $v1, 0x68($s5)
    ctx->pc = 0x259330u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 3));
    // 0x259334: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x259334u;
    {
        const bool branch_taken_0x259334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259334) {
            ctx->pc = 0x259354u;
            goto label_259354;
        }
    }
    ctx->pc = 0x25933Cu;
label_25933c:
    // 0x25933c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x259340: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x259340u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x259344: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x259344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x259348: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x259348u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x25934c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x259350: 0xaea30068  sw          $v1, 0x68($s5)
    ctx->pc = 0x259350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 3));
label_259354:
    // 0x259354: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x259354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259358: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25935c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259360: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x259360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259364: 0x8c730024  lw          $s3, 0x24($v1)
    ctx->pc = 0x259364u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x259368: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x259368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x25936c: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x25936cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x259370: 0x0  nop
    ctx->pc = 0x259370u;
    // NOP
label_259374:
    // 0x259374: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x259374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259378: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x259378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25937c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259380: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x259380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x259384: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x259384u;
    {
        const bool branch_taken_0x259384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259384) {
            ctx->pc = 0x2593ACu;
            goto label_2593ac;
        }
    }
    ctx->pc = 0x25938Cu;
    // 0x25938c: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x25938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x259390: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259394: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x259394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x259398: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x259398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x25939c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2593a0: 0xfec30010  sd          $v1, 0x10($s6)
    ctx->pc = 0x2593a0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 3));
    // 0x2593a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2593A4u;
    {
        const bool branch_taken_0x2593a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593a4) {
            ctx->pc = 0x2593B0u;
            goto label_2593b0;
        }
    }
    ctx->pc = 0x2593ACu;
label_2593ac:
    // 0x2593ac: 0xfec00010  sd          $zero, 0x10($s6)
    ctx->pc = 0x2593acu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 0));
label_2593b0:
    // 0x2593b0: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x2593b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2593b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2593b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2593b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2593b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2593bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2593bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2593c0: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x2593c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2593c4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2593c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2593c8: 0x0  nop
    ctx->pc = 0x2593c8u;
    // NOP
    // 0x2593cc: 0x0  nop
    ctx->pc = 0x2593ccu;
    // NOP
label_2593d0:
    // 0x2593d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2593d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2593d4: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x2593d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2593d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2593d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2593dc: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x2593dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x2593e0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2593E0u;
    {
        const bool branch_taken_0x2593e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593e0) {
            ctx->pc = 0x25949Cu;
            goto label_25949c;
        }
    }
    ctx->pc = 0x2593E8u;
    // 0x2593e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2593e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2593ec: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x2593ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2593f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2593f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2593f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2593f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2593f8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2593F8u;
    {
        const bool branch_taken_0x2593f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593f8) {
            ctx->pc = 0x25944Cu;
            goto label_25944c;
        }
    }
    ctx->pc = 0x259400u;
    // 0x259400: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x259400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259404: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259408: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x259408u;
    {
        const bool branch_taken_0x259408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259408) {
            ctx->pc = 0x25942Cu;
            goto label_25942c;
        }
    }
    ctx->pc = 0x259410u;
    // 0x259410: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x259410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259414: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259418: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x259418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x25941c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x259420: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x259420u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x259424: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x259424u;
    {
        const bool branch_taken_0x259424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259424) {
            ctx->pc = 0x2594F0u;
            goto label_2594f0;
        }
    }
    ctx->pc = 0x25942Cu;
label_25942c:
    // 0x25942c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259430: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259434: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x259434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x259438: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x259438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x25943c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25943cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x259440: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x259440u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x259444: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x259444u;
    {
        const bool branch_taken_0x259444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259444) {
            ctx->pc = 0x2594F0u;
            goto label_2594f0;
        }
    }
    ctx->pc = 0x25944Cu;
label_25944c:
    // 0x25944c: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x25944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259450: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x259450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x259454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259458: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x259458u;
    {
        const bool branch_taken_0x259458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x259458) {
            ctx->pc = 0x25947Cu;
            goto label_25947c;
        }
    }
    ctx->pc = 0x259460u;
    // 0x259460: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x259460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259464: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259468: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x259468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x25946c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25946cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x259470: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x259470u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x259474: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x259474u;
    {
        const bool branch_taken_0x259474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259474) {
            ctx->pc = 0x2594F0u;
            goto label_2594f0;
        }
    }
    ctx->pc = 0x25947Cu;
label_25947c:
    // 0x25947c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259480: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259484: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x259484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x259488: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x259488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x25948c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x259490: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x259490u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x259494: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x259494u;
    {
        const bool branch_taken_0x259494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259494) {
            ctx->pc = 0x2594F0u;
            goto label_2594f0;
        }
    }
    ctx->pc = 0x25949Cu;
label_25949c:
    // 0x25949c: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x25949cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2594a0: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2594a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x2594a4: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2594a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2594a8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2594a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2594ac: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2594acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2594b0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2594b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2594b4: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x2594b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x2594b8: 0x3c05fc00  lui         $a1, 0xFC00
    ctx->pc = 0x2594b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64512 << 16));
    // 0x2594bc: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x2594bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x2594c0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2594c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2594c4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2594c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2594c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2594c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2594cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2594ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2594d0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2594d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2594d4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2594d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2594d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2594d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2594dc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2594dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2594e0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2594e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2594e4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2594e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2594e8: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x2594E8u;
    SET_GPR_U32(ctx, 31, 0x2594F0u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x2594E8u, 0x2594F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594F0u;
label_2594f0:
    // 0x2594f0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2594f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2594f4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2594f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2594f8: 0x1640ffb5  bnez        $s2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2594F8u;
    {
        const bool branch_taken_0x2594f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2594f8) {
            ctx->pc = 0x2593D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2593d0;
        }
    }
    ctx->pc = 0x259500u;
    // 0x259500: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x259500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x259504: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x259504u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x259508: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x259508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x25950c: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x25950cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x259510: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259514: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x259514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259518: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x259518u;
    {
        const bool branch_taken_0x259518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259518) {
            ctx->pc = 0x259374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259374;
        }
    }
    ctx->pc = 0x259520u;
    // 0x259520: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x259520u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259524: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x259524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259528: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x259528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25952c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25952cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x259530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25953c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25953cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259548: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x259548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25954c: 0x3e00008  jr          $ra
    ctx->pc = 0x25954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259554u;
}
