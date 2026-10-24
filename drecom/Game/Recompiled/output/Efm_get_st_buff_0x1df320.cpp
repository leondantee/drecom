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

// Function: Efm_get_st_buff
// Address: 0x1df320 - 0x1df4d0
void Efm_get_st_buff_0x1df320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_get_st_buff_0x1df320");
#endif

    switch (ctx->pc) {
        case 0x1df38cu: goto label_1df38c;
        case 0x1df398u: goto label_1df398;
        case 0x1df3b0u: goto label_1df3b0;
        case 0x1df3f0u: goto label_1df3f0;
        default: break;
    }

    ctx->pc = 0x1df320u;

    // 0x1df320: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1df320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1df324: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1df324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1df328: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1df328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1df32c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1df32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1df330: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1df330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1df334: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1df334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1df338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1df33c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df348: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1df348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1df34c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1df34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1df350: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1df350u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1df354: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1df354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1df358: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df35c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df35cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df360: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df364: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1df368: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df36c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df36cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df370: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df374: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df378: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df37c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df380: 0x8c7e0058  lw          $fp, 0x58($v1)
    ctx->pc = 0x1df380u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1df384: 0x8fd50034  lw          $s5, 0x34($fp)
    ctx->pc = 0x1df384u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1df388: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1df388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1df38c:
    // 0x1df38c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1df38cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df390: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1DF390u;
    {
        const bool branch_taken_0x1df390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df390) {
            ctx->pc = 0x1DF448u;
            goto label_1df448;
        }
    }
    ctx->pc = 0x1DF398u;
label_1df398:
    // 0x1df398: 0x8eb300b0  lw          $s3, 0xB0($s5)
    ctx->pc = 0x1df398u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x1df39c: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1df39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1df3a0: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1df3a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1df3a4: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1df3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df3a8: 0x0  nop
    ctx->pc = 0x1df3a8u;
    // NOP
    // 0x1df3ac: 0x0  nop
    ctx->pc = 0x1df3acu;
    // NOP
label_1df3b0:
    // 0x1df3b0: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x1df3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1df3b4: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x1df3b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1df3b8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1df3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1df3bc: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1df3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1df3c0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1df3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1df3c4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1df3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1df3c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df3cc: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DF3CCu;
    {
        const bool branch_taken_0x1df3cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df3cc) {
            ctx->pc = 0x1DF3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df3b0;
        }
    }
    ctx->pc = 0x1DF3D4u;
    // 0x1df3d4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df3d8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df3dc: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df3dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df3e0: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df3e4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df3e8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df3ec: 0xac720038  sw          $s2, 0x38($v1)
    ctx->pc = 0x1df3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 18));
label_1df3f0:
    // 0x1df3f0: 0xae920064  sw          $s2, 0x64($s4)
    ctx->pc = 0x1df3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 18));
    // 0x1df3f4: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x1df3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1df3f8: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df3fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df3fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df400: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF400u;
    {
        const bool branch_taken_0x1df400 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df400) {
            ctx->pc = 0x1DF3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df3f0;
        }
    }
    ctx->pc = 0x1DF408u;
    // 0x1df408: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x1df408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df40c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df40cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df410: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df414: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df41c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df420: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df428: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df42c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df430: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df434: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df438: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df43c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df440: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df444: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df444u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1df448:
    // 0x1df448: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df448u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df44c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1DF44Cu;
    {
        const bool branch_taken_0x1df44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df44c) {
            ctx->pc = 0x1DF398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df398;
        }
    }
    ctx->pc = 0x1DF454u;
    // 0x1df454: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df458: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df45c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df460: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df464: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df468: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df46c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df46cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df470: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1DF470u;
    {
        const bool branch_taken_0x1df470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df470) {
            ctx->pc = 0x1DF38Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df38c;
        }
    }
    ctx->pc = 0x1DF478u;
    // 0x1df478: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df478u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df47c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df480: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df484: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df488: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df48c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df48cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df490: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df494: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df498: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1DF498u;
    {
        const bool branch_taken_0x1df498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df498) {
            ctx->pc = 0x1DF38Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df38c;
        }
    }
    ctx->pc = 0x1DF4A0u;
    // 0x1df4a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df4a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df4a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df4a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df4a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df4a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df4ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df4acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df4b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df4b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df4b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df4c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df4c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF4D0u;
}
