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

// Function: Screen_capture3
// Address: 0x165270 - 0x1654a4
void Screen_capture3_0x165270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Screen_capture3_0x165270");
#endif

    switch (ctx->pc) {
        case 0x1652d8u: goto label_1652d8;
        case 0x1652f8u: goto label_1652f8;
        case 0x16530cu: goto label_16530c;
        case 0x165388u: goto label_165388;
        case 0x16539cu: goto label_16539c;
        case 0x1653b0u: goto label_1653b0;
        case 0x16545cu: goto label_16545c;
        case 0x16547cu: goto label_16547c;
        default: break;
    }

    ctx->pc = 0x165270u;

    // 0x165270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x165270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x165274: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x165274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x165278: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x165278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16527c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x165280: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x165284: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16528c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165290: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x165290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x165294: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x165294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x165298: 0x3c110400  lui         $s1, 0x400
    ctx->pc = 0x165298u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1024 << 16));
    // 0x16529c: 0x8ea20a54  lw          $v0, 0xA54($s5)
    ctx->pc = 0x16529cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AD4u));
    // 0x1652a0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1652a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1652a4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1652a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1652a8: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x1652a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1652ac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1652acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1652b0: 0x32983  sra         $a1, $v1, 6
    ctx->pc = 0x1652b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1652b4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1652b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1652b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1652b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1652bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1652bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1652c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1652c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1652c4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1652c4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1652c8: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x1652c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1652cc: 0x240b00e0  addiu       $t3, $zero, 0xE0
    ctx->pc = 0x1652ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1652d0: 0xc05e790  jal         func_179E40
    ctx->pc = 0x1652D0u;
    SET_GPR_U32(ctx, 31, 0x1652D8u);
    ctx->pc = 0x179E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179E40u, 0x1652D0u, 0x1652D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652D8u;
label_1652d8:
    // 0x1652d8: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x1652d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x1652dc: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1652DCu;
    {
        const bool branch_taken_0x1652dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1652dc) {
            ctx->pc = 0x16536Cu;
            goto label_16536c;
        }
    }
    ctx->pc = 0x1652E4u;
    // 0x1652e4: 0x3c03030a  lui         $v1, 0x30A
    ctx->pc = 0x1652e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)778 << 16));
    // 0x1652e8: 0x34738036  ori         $s3, $v1, 0x8036
    ctx->pc = 0x1652e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32822);
    // 0x1652ec: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1652ecu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1652f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1652F0u;
    {
        const bool branch_taken_0x1652f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1652f0) {
            ctx->pc = 0x165358u;
            goto label_165358;
        }
    }
    ctx->pc = 0x1652F8u;
label_1652f8:
    // 0x1652f8: 0x2673fa00  addiu       $s3, $s3, -0x600
    ctx->pc = 0x1652f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965760));
    // 0x1652fc: 0x72608628  paddub      $s0, $s3, $zero
    ctx->pc = 0x1652fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x165300: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x165300u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165304: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x165304u;
    {
        const bool branch_taken_0x165304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165304) {
            ctx->pc = 0x165348u;
            goto label_165348;
        }
    }
    ctx->pc = 0x16530Cu;
label_16530c:
    // 0x16530c: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x16530cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x165310: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x165310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165314: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x165314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165318: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x165318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x16531c: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x16531cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x165320: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x165320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165324: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x165324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165328: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x165328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x16532c: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x16532cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x165330: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x165330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165334: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x165334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165338: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x165338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16533c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165340: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x165340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x165344: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_165348:
    // 0x165348: 0x2e430200  sltiu       $v1, $s2, 0x200
    ctx->pc = 0x165348u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x16534c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x16534Cu;
    {
        const bool branch_taken_0x16534c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16534c) {
            ctx->pc = 0x16530Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16530c;
        }
    }
    ctx->pc = 0x165354u;
    // 0x165354: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x165354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_165358:
    // 0x165358: 0x2e8300e0  sltiu       $v1, $s4, 0xE0
    ctx->pc = 0x165358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x16535c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16535Cu;
    {
        const bool branch_taken_0x16535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16535c) {
            ctx->pc = 0x1652F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1652f8;
        }
    }
    ctx->pc = 0x165364u;
    // 0x165364: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x165364u;
    {
        const bool branch_taken_0x165364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165364) {
            ctx->pc = 0x16547Cu;
            goto label_16547c;
        }
    }
    ctx->pc = 0x16536Cu;
label_16536c:
    // 0x16536c: 0x3c100300  lui         $s0, 0x300
    ctx->pc = 0x16536cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)768 << 16));
    // 0x165370: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x165370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165374: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x165374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x165378: 0x244556d0  addiu       $a1, $v0, 0x56D0
    ctx->pc = 0x165378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22224));
    // 0x16537c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x165380: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x165380u;
    SET_GPR_U32(ctx, 31, 0x165388u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x165388u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165388u) { return; }
    ctx->pc = 0x165388u;
label_165388:
    // 0x165388: 0x3c020305  lui         $v0, 0x305
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)773 << 16));
    // 0x16538c: 0x34534036  ori         $s3, $v0, 0x4036
    ctx->pc = 0x16538cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16438);
    // 0x165390: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x165390u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165394: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x165394u;
    {
        const bool branch_taken_0x165394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165394) {
            ctx->pc = 0x165400u;
            goto label_165400;
        }
    }
    ctx->pc = 0x16539Cu;
label_16539c:
    // 0x16539c: 0x2673fa00  addiu       $s3, $s3, -0x600
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965760));
    // 0x1653a0: 0x72608628  paddub      $s0, $s3, $zero
    ctx->pc = 0x1653a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1653a4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1653a4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1653a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1653A8u;
    {
        const bool branch_taken_0x1653a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653a8) {
            ctx->pc = 0x1653F0u;
            goto label_1653f0;
        }
    }
    ctx->pc = 0x1653B0u;
label_1653b0:
    // 0x1653b0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1653b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1653b4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1653b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1653b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1653b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1653bc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1653bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1653c0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1653c0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1653c4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1653c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1653c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1653c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1653cc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1653ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1653d0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1653d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1653d4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1653d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1653d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1653d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1653dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1653dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1653e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1653e4: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1653e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1653e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1653ec: 0x0  nop
    ctx->pc = 0x1653ecu;
    // NOP
label_1653f0:
    // 0x1653f0: 0x2e420200  sltiu       $v0, $s2, 0x200
    ctx->pc = 0x1653f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1653f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1653F4u;
    {
        const bool branch_taken_0x1653f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1653f4) {
            ctx->pc = 0x1653B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1653b0;
        }
    }
    ctx->pc = 0x1653FCu;
    // 0x1653fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1653fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_165400:
    // 0x165400: 0x2e8200e0  sltiu       $v0, $s4, 0xE0
    ctx->pc = 0x165400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x165404: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x165404u;
    {
        const bool branch_taken_0x165404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165404) {
            ctx->pc = 0x16539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16539c;
        }
    }
    ctx->pc = 0x16540Cu;
    // 0x16540c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x165410: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x165410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
    // 0x165414: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x165414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x165418: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x165418u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x385710u));
    // 0x16541c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x16541cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x385720u));
    // 0x165420: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x165420u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x385730u));
    // 0x165424: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x165424u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x385740u));
    // 0x165428: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x165428u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x16542c: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x16542cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x165430: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x165430u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x165434: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x165434u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x165438: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x165438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x16543c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165440: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x165444: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165448: 0x27a40081  addiu       $a0, $sp, 0x81
    ctx->pc = 0x165448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x16544c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165450: 0x2445eae8  addiu       $a1, $v0, -0x1518
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
    // 0x165454: 0xc046a48  jal         func_11A920
    ctx->pc = 0x165454u;
    SET_GPR_U32(ctx, 31, 0x16545Cu);
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x16545Cu;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16545Cu) { return; }
    ctx->pc = 0x16545Cu;
label_16545c:
    // 0x16545c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x165460: 0xa3a20089  sb          $v0, 0x89($sp)
    ctx->pc = 0x165460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 137), (uint8_t)GPR_U32(ctx, 2));
    // 0x165464: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x165464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    // 0x165468: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x165468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16546c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x16546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x165470: 0x34468036  ori         $a2, $v0, 0x8036
    ctx->pc = 0x165470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32822);
    // 0x165474: 0xc05ea14  jal         func_17A850
    ctx->pc = 0x165474u;
    SET_GPR_U32(ctx, 31, 0x16547Cu);
    ctx->pc = 0x17A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A850u, 0x165474u, 0x16547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16547Cu;
label_16547c:
    // 0x16547c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x16547cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165480: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x165480u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165484: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x165484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165488: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16548c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16548cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165498: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x165498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16549c: 0x3e00008  jr          $ra
    ctx->pc = 0x16549Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16549Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1654A4u;
}
