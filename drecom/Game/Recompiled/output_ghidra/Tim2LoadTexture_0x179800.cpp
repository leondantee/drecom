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

// Function: Tim2LoadTexture
// Address: 0x179800 - 0x179b6c
void Tim2LoadTexture_0x179800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tim2LoadTexture_0x179800");
#endif

    switch (ctx->pc) {
        case 0x179968u: goto label_179968;
        case 0x179980u: goto label_179980;
        case 0x179b28u: goto label_179b28;
        default: break;
    }

    ctx->pc = 0x179800u;

    // 0x179800: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x179800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x179804: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x179804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x179808: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x179808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17980c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x179810: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x179810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x179814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x179818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17981c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179824: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x179824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x179828: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x179828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x17982c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x17982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x179830: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x179830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x179834: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x179834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    // 0x179838: 0xafa900a8  sw          $t1, 0xA8($sp)
    ctx->pc = 0x179838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
    // 0x17983c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17983cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179840: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x179840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x179844: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x179844u;
    {
        const bool branch_taken_0x179844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x179844) {
            ctx->pc = 0x17991Cu;
            goto label_17991c;
        }
    }
    ctx->pc = 0x17984Cu;
    // 0x17984c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x17984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x179850: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x179850u;
    {
        const bool branch_taken_0x179850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x179850) {
            ctx->pc = 0x17991Cu;
            goto label_17991c;
        }
    }
    ctx->pc = 0x179858u;
    // 0x179858: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x179858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17985c: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x17985Cu;
    {
        const bool branch_taken_0x17985c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17985c) {
            ctx->pc = 0x17991Cu;
            goto label_17991c;
        }
    }
    ctx->pc = 0x179864u;
    // 0x179864: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x179864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x179868: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x179868u;
    {
        const bool branch_taken_0x179868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x179868) {
            ctx->pc = 0x179910u;
            goto label_179910;
        }
    }
    ctx->pc = 0x179870u;
    // 0x179870: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x179870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x179874: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x179874u;
    {
        const bool branch_taken_0x179874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x179874) {
            ctx->pc = 0x179910u;
            goto label_179910;
        }
    }
    ctx->pc = 0x17987Cu;
    // 0x17987c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x17987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x179880: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x179880u;
    {
        const bool branch_taken_0x179880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x179880) {
            ctx->pc = 0x179900u;
            goto label_179900;
        }
    }
    ctx->pc = 0x179888u;
    // 0x179888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x179888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17988c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17988Cu;
    {
        const bool branch_taken_0x17988c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17988c) {
            ctx->pc = 0x179900u;
            goto label_179900;
        }
    }
    ctx->pc = 0x179894u;
    // 0x179894: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x179894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x179898: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x179898u;
    {
        const bool branch_taken_0x179898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x179898) {
            ctx->pc = 0x179900u;
            goto label_179900;
        }
    }
    ctx->pc = 0x1798A0u;
    // 0x1798a0: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1798a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1798a4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1798A4u;
    {
        const bool branch_taken_0x1798a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1798a4) {
            ctx->pc = 0x179900u;
            goto label_179900;
        }
    }
    ctx->pc = 0x1798ACu;
    // 0x1798ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1798acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1798b0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1798B0u;
    {
        const bool branch_taken_0x1798b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1798b0) {
            ctx->pc = 0x1798F0u;
            goto label_1798f0;
        }
    }
    ctx->pc = 0x1798B8u;
    // 0x1798b8: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x1798b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1798bc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1798BCu;
    {
        const bool branch_taken_0x1798bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1798bc) {
            ctx->pc = 0x1798F0u;
            goto label_1798f0;
        }
    }
    ctx->pc = 0x1798C4u;
    // 0x1798c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1798C4u;
    {
        const bool branch_taken_0x1798c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798c4) {
            ctx->pc = 0x1798E0u;
            goto label_1798e0;
        }
    }
    ctx->pc = 0x1798CCu;
    // 0x1798cc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1798ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1798d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1798D0u;
    {
        const bool branch_taken_0x1798d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1798d0) {
            ctx->pc = 0x1798E0u;
            goto label_1798e0;
        }
    }
    ctx->pc = 0x1798D8u;
    // 0x1798d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1798D8u;
    {
        const bool branch_taken_0x1798d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798d8) {
            ctx->pc = 0x179930u;
            goto label_179930;
        }
    }
    ctx->pc = 0x1798E0u;
label_1798e0:
    // 0x1798e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1798e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1798e4: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1798e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1798e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1798E8u;
    {
        const bool branch_taken_0x1798e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798e8) {
            ctx->pc = 0x179938u;
            goto label_179938;
        }
    }
    ctx->pc = 0x1798F0u;
label_1798f0:
    // 0x1798f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1798f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1798f4: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1798f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1798f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1798F8u;
    {
        const bool branch_taken_0x1798f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798f8) {
            ctx->pc = 0x179938u;
            goto label_179938;
        }
    }
    ctx->pc = 0x179900u;
label_179900:
    // 0x179900: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x179900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179904: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x179904u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x179908: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x179908u;
    {
        const bool branch_taken_0x179908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179908) {
            ctx->pc = 0x179938u;
            goto label_179938;
        }
    }
    ctx->pc = 0x179910u;
label_179910:
    // 0x179910: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179914u;
    {
        const bool branch_taken_0x179914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179914) {
            ctx->pc = 0x179938u;
            goto label_179938;
        }
    }
    ctx->pc = 0x17991Cu;
label_17991c:
    // 0x17991c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x17991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x179920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179924: 0x49043  sra         $s2, $a0, 1
    ctx->pc = 0x179924u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 1));
    // 0x179928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x179928u;
    {
        const bool branch_taken_0x179928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179928) {
            ctx->pc = 0x179938u;
            goto label_179938;
        }
    }
    ctx->pc = 0x179930u;
label_179930:
    // 0x179930: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x179930u;
    {
        const bool branch_taken_0x179930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179930) {
            ctx->pc = 0x179B40u;
            goto label_179b40;
        }
    }
    ctx->pc = 0x179938u;
label_179938:
    // 0x179938: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x179938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x17993c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x17993cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x179940: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x179940u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x179944: 0x0  nop
    ctx->pc = 0x179944u;
    // NOP
    // 0x179948: 0x0  nop
    ctx->pc = 0x179948u;
    // NOP
    // 0x17994c: 0x1812  mflo        $v1
    ctx->pc = 0x17994cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x179950: 0x243a018  mult        $s4, $s2, $v1
    ctx->pc = 0x179950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x179954: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x179954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x179958: 0x2438818  mult        $s1, $s2, $v1
    ctx->pc = 0x179958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x17995c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x17995cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179960: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x179960u;
    {
        const bool branch_taken_0x179960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179960) {
            ctx->pc = 0x179B38u;
            goto label_179b38;
        }
    }
    ctx->pc = 0x179968u;
label_179968:
    // 0x179968: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x179968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17996c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17996cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x179970: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179974: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x179974u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179978: 0xc0409c6  jal         func_102718
    ctx->pc = 0x179978u;
    SET_GPR_U32(ctx, 31, 0x179980u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x179980u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179980u) { return; }
    ctx->pc = 0x179980u;
label_179980:
    // 0x179980: 0x234082b  sltu        $at, $s1, $s4
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x179984: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x179984u;
    {
        const bool branch_taken_0x179984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179984) {
            ctx->pc = 0x1799B4u;
            goto label_1799b4;
        }
    }
    ctx->pc = 0x17998Cu;
    // 0x17998c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x17998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x179990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x179990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x179994: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x179994u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x179998: 0x0  nop
    ctx->pc = 0x179998u;
    // NOP
    // 0x17999c: 0x0  nop
    ctx->pc = 0x17999cu;
    // NOP
    // 0x1799a0: 0xa812  mflo        $s5
    ctx->pc = 0x1799a0u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1799a4: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1799a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1799a8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1799a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1799ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1799ACu;
    {
        const bool branch_taken_0x1799ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1799ac) {
            ctx->pc = 0x1799D8u;
            goto label_1799d8;
        }
    }
    ctx->pc = 0x1799B4u;
label_1799b4:
    // 0x1799b4: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1799b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1799b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1799b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1799bc: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x1799bcu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1799c0: 0x0  nop
    ctx->pc = 0x1799c0u;
    // NOP
    // 0x1799c4: 0x0  nop
    ctx->pc = 0x1799c4u;
    // NOP
    // 0x1799c8: 0xa812  mflo        $s5
    ctx->pc = 0x1799c8u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1799cc: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1799ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1799d0: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x1799d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1799d4: 0x0  nop
    ctx->pc = 0x1799d4u;
    // NOP
label_1799d8:
    // 0x1799d8: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x1799d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x1799dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1799dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1799e0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1799e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1799e4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1799e4u;
    runtime->Store64(rdram, ctx, 0x70000000u, GPR_U64(ctx, 2));
    // 0x1799e8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1799e8u;
    runtime->Store64(rdram, ctx, 0x70000008u, GPR_U64(ctx, 0));
    // 0x1799ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1799ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1799f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1799f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1799f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1799f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1799f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1799f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1799fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1799fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179a00: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x179a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179a08: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a0c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179a10: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x179a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179a14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179a1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a20: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x179a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x179a24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x179a28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x179a2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x179a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179a30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x179a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179a34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179a38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x179a3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x179a40: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x179a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x179a44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179a48: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a4c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x179a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x179a50: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a54: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179a58: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x179a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x179a5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179a60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x179a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179a64: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a68: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x179a6c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a70: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179a74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x179a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179a78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x179a7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x179a80: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x179a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x179a84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179a88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x179a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179a90: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a94: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x179a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x179a98: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a9c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179aa0: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x179aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x179aa4: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x179aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x179aa8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179aac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179ab0: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x179ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x179ab4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179ab8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x179ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x179abc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179ac0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179ac4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x179ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x179ac8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x179ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x179acc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179ad0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x179ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179ad4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179ad8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x179ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x179adc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179ae0: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x179ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x179ae4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179ae8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x179ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x179aec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179af0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x179af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x179af4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x179af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x179af8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179afc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179b00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179b04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179b08: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179b08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179b0c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x179b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x179b10: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179b14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x179b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x179b18: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x179b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x179b1c: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x179b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x179b20: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x179B20u;
    SET_GPR_U32(ctx, 31, 0x179B28u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x179B28u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179B28u) { return; }
    ctx->pc = 0x179B28u;
label_179b28:
    // 0x179b28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x179b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x179b2c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x179b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x179b30: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x179b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x179b34: 0x2d5b021  addu        $s6, $s6, $s5
    ctx->pc = 0x179b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_179b38:
    // 0x179b38: 0x1620ff8b  bnez        $s1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x179B38u;
    {
        const bool branch_taken_0x179b38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x179b38) {
            ctx->pc = 0x179968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179968;
        }
    }
    ctx->pc = 0x179B40u;
label_179b40:
    // 0x179b40: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x179b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179b44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x179b44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179b48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x179b48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179b4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179b50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179b58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179b60: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x179b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x179b64: 0x3e00008  jr          $ra
    ctx->pc = 0x179B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179B6Cu;
}
