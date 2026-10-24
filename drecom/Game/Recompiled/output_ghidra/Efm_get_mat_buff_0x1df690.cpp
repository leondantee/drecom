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

// Function: Efm_get_mat_buff
// Address: 0x1df690 - 0x1df870
void Efm_get_mat_buff_0x1df690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_get_mat_buff_0x1df690");
#endif

    switch (ctx->pc) {
        case 0x1df700u: goto label_1df700;
        case 0x1df70cu: goto label_1df70c;
        case 0x1df720u: goto label_1df720;
        case 0x1df790u: goto label_1df790;
        default: break;
    }

    ctx->pc = 0x1df690u;

    // 0x1df690: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1df690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1df694: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1df694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1df698: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1df698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1df69c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1df69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1df6a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1df6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1df6a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1df6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1df6a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1df6ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df6b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df6b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df6b8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1df6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1df6bc: 0xa3a500a8  sb          $a1, 0xA8($sp)
    ctx->pc = 0x1df6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df6c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1df6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1df6c4: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1df6c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1df6c8: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1df6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1df6cc: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df6d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df6d4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df6d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df6d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1df6dc: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df6e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df6e4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df6e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df6ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df6f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1df6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df6f4: 0x8c7e0058  lw          $fp, 0x58($v1)
    ctx->pc = 0x1df6f4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1df6f8: 0x8fd50034  lw          $s5, 0x34($fp)
    ctx->pc = 0x1df6f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1df6fc: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1df6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1df700:
    // 0x1df700: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1df700u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df704: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DF704u;
    {
        const bool branch_taken_0x1df704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df704) {
            ctx->pc = 0x1DF7E8u;
            goto label_1df7e8;
        }
    }
    ctx->pc = 0x1DF70Cu;
label_1df70c:
    // 0x1df70c: 0x8eb300b8  lw          $s3, 0xB8($s5)
    ctx->pc = 0x1df70cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x1df710: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1df714: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1df714u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1df718: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1df718u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df71c: 0x0  nop
    ctx->pc = 0x1df71cu;
    // NOP
label_1df720:
    // 0x1df720: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x1df720u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1df724: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x1df724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1df728: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x1df728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1df72c: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x1df72cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1df730: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x1df730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1df734: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x1df734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df738: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1df738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1df73c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x1df73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df740: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x1df740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df744: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df748: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1df748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1df74c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF74Cu;
    {
        const bool branch_taken_0x1df74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df74c) {
            ctx->pc = 0x1DF760u;
            goto label_1df760;
        }
    }
    ctx->pc = 0x1DF754u;
    // 0x1df754: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1df754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df758: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1df758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1df75c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1df75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1df760:
    // 0x1df760: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1df764: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1df764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1df768: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df76c: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DF76Cu;
    {
        const bool branch_taken_0x1df76c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df76c) {
            ctx->pc = 0x1DF720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df720;
        }
    }
    ctx->pc = 0x1DF774u;
    // 0x1df774: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df778: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df77c: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df77cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df780: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df784: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df788: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df78c: 0xac720040  sw          $s2, 0x40($v1)
    ctx->pc = 0x1df78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 18));
label_1df790:
    // 0x1df790: 0xae920074  sw          $s2, 0x74($s4)
    ctx->pc = 0x1df790u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 18));
    // 0x1df794: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x1df794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1df798: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df79c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df7a0: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF7A0u;
    {
        const bool branch_taken_0x1df7a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7a0) {
            ctx->pc = 0x1DF790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df790;
        }
    }
    ctx->pc = 0x1DF7A8u;
    // 0x1df7a8: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x1df7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df7ac: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df7acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df7b0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df7b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df7b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df7bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df7c0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df7c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df7c8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df7cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df7d0: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df7d4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df7d8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df7dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df7e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df7e4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df7e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1df7e8:
    // 0x1df7e8: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df7e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df7ec: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1DF7ECu;
    {
        const bool branch_taken_0x1df7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7ec) {
            ctx->pc = 0x1DF70Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df70c;
        }
    }
    ctx->pc = 0x1DF7F4u;
    // 0x1df7f4: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df7f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df7f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df7fc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df800: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df804: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df808: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df80c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df80cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df810: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1DF810u;
    {
        const bool branch_taken_0x1df810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df810) {
            ctx->pc = 0x1DF700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df700;
        }
    }
    ctx->pc = 0x1DF818u;
    // 0x1df818: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df818u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df81c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df820: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df824: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df828: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1df828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df82c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df82cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df830: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df834: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df838: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1DF838u;
    {
        const bool branch_taken_0x1df838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df838) {
            ctx->pc = 0x1DF700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df700;
        }
    }
    ctx->pc = 0x1DF840u;
    // 0x1df840: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df840u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df844: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df848: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df84c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df84cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df864: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df868: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF870u;
}
