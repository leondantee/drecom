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

// Function: Efm_get_rgb_buff
// Address: 0x1df4d0 - 0x1df690
void Efm_get_rgb_buff_0x1df4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_get_rgb_buff_0x1df4d0");
#endif

    switch (ctx->pc) {
        case 0x1df53cu: goto label_1df53c;
        case 0x1df548u: goto label_1df548;
        case 0x1df560u: goto label_1df560;
        case 0x1df5b0u: goto label_1df5b0;
        default: break;
    }

    ctx->pc = 0x1df4d0u;

    // 0x1df4d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1df4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1df4d4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1df4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1df4d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1df4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1df4dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1df4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1df4e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1df4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1df4e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1df4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1df4e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1df4ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df4f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df4f8: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1df4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1df4fc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1df4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1df500: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1df500u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1df504: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1df504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1df508: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df50c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df50cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df510: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df514: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1df518: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df51c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df51cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df520: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df524: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df528: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df52c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df530: 0x8c7e0058  lw          $fp, 0x58($v1)
    ctx->pc = 0x1df530u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1df534: 0x8fd50034  lw          $s5, 0x34($fp)
    ctx->pc = 0x1df534u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1df538: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1df538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1df53c:
    // 0x1df53c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1df53cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df540: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1DF540u;
    {
        const bool branch_taken_0x1df540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df540) {
            ctx->pc = 0x1DF608u;
            goto label_1df608;
        }
    }
    ctx->pc = 0x1DF548u;
label_1df548:
    // 0x1df548: 0x8eb300b4  lw          $s3, 0xB4($s5)
    ctx->pc = 0x1df548u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x1df54c: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1df54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1df550: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1df550u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1df554: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1df554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df558: 0x0  nop
    ctx->pc = 0x1df558u;
    // NOP
    // 0x1df55c: 0x0  nop
    ctx->pc = 0x1df55cu;
    // NOP
label_1df560:
    // 0x1df560: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x1df560u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1df564: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x1df564u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1df568: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x1df568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1df56c: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x1df56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1df570: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x1df570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1df574: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x1df574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df578: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1df578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1df57c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x1df57cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df580: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1df584: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1df584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1df588: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df58c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DF58Cu;
    {
        const bool branch_taken_0x1df58c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df58c) {
            ctx->pc = 0x1DF560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df560;
        }
    }
    ctx->pc = 0x1DF594u;
    // 0x1df594: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df598: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df59c: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df59cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df5a0: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df5a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df5a4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df5a8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df5ac: 0xac720050  sw          $s2, 0x50($v1)
    ctx->pc = 0x1df5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 18));
label_1df5b0:
    // 0x1df5b0: 0xae920094  sw          $s2, 0x94($s4)
    ctx->pc = 0x1df5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 18));
    // 0x1df5b4: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x1df5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1df5b8: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df5b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df5bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df5c0: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF5C0u;
    {
        const bool branch_taken_0x1df5c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df5c0) {
            ctx->pc = 0x1DF5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df5b0;
        }
    }
    ctx->pc = 0x1DF5C8u;
    // 0x1df5c8: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x1df5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df5cc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df5d0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df5d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df5d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df5dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df5e0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df5e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df5e8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df5ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df5f0: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df5f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df5f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df5fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df600: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df604: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df604u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1df608:
    // 0x1df608: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df60c: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1DF60Cu;
    {
        const bool branch_taken_0x1df60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df60c) {
            ctx->pc = 0x1DF548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df548;
        }
    }
    ctx->pc = 0x1DF614u;
    // 0x1df614: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df618: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df61c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df620: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df624: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df628: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df62c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df62cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df630: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1DF630u;
    {
        const bool branch_taken_0x1df630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df630) {
            ctx->pc = 0x1DF53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df53c;
        }
    }
    ctx->pc = 0x1DF638u;
    // 0x1df638: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df638u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df63c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df640: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df644: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df648: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df64c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df64cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df650: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df654: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df658: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1DF658u;
    {
        const bool branch_taken_0x1df658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df658) {
            ctx->pc = 0x1DF53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df53c;
        }
    }
    ctx->pc = 0x1DF660u;
    // 0x1df660: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df660u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df664: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df668: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df668u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df66c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df66cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df670: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df67c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df684: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df688: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF690u;
}
