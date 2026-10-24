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

// Function: Ck_scr_near_clip
// Address: 0x13e260 - 0x13e558
void Ck_scr_near_clip_0x13e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ck_scr_near_clip_0x13e260");
#endif

    switch (ctx->pc) {
        case 0x13e314u: goto label_13e314;
        case 0x13e328u: goto label_13e328;
        case 0x13e34cu: goto label_13e34c;
        case 0x13e388u: goto label_13e388;
        case 0x13e508u: goto label_13e508;
        default: break;
    }

    ctx->pc = 0x13e260u;

    // 0x13e260: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13e264: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x13e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x13e268: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13e26c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13e270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13e274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13e278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e280: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x13e280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x13e284: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x13e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13e288: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x13e288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13e28c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13e290: 0x24740080  addiu       $s4, $v1, 0x80
    ctx->pc = 0x13e290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x13e294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e298: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x13e298u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFD60u));
    // 0x13e29c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13e2a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13e2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13e2a4: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x13E2A4u;
    {
        const bool branch_taken_0x13e2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2a4) {
            ctx->pc = 0x13E530u;
            goto label_13e530;
        }
    }
    ctx->pc = 0x13E2ACu;
    // 0x13e2ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13e2b0: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x13e2b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13e2b4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x13e2b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e2b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e2bc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13e2c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e2c4: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x13e2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13e2c8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x13e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13e2cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e2d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e2d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e2d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e2dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e2e0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x13e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x13e2e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x13e2e8: 0x244278b0  addiu       $v0, $v0, 0x78B0
    ctx->pc = 0x13e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30896));
    // 0x13e2ec: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x13e2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e2f0: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x13e2f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13e2f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13E2F4u;
    {
        const bool branch_taken_0x13e2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2f4) {
            ctx->pc = 0x13E328u;
            goto label_13e328;
        }
    }
    ctx->pc = 0x13E2FCu;
    // 0x13e2fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13e300: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x13e300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x13e304: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13e304u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13e308: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13e308u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13e30c: 0xc0409c6  jal         func_102718
    ctx->pc = 0x13E30Cu;
    SET_GPR_U32(ctx, 31, 0x13E314u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x13E314u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13E314u) { return; }
    ctx->pc = 0x13E314u;
label_13e314:
    // 0x13e314: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13e314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13e318: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x13e318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x13e31c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13e31cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13e320: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x13E320u;
    SET_GPR_U32(ctx, 31, 0x13E328u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x13E328u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13E328u) { return; }
    ctx->pc = 0x13E328u;
label_13e328:
    // 0x13e328: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13e32c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x13e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13e330: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13e334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e338: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13e338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13e33c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13e340: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x13e344: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x13E344u;
    SET_GPR_U32(ctx, 31, 0x13E34Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x13E34Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13E34Cu) { return; }
    ctx->pc = 0x13E34Cu;
label_13e34c:
    // 0x13e34c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e350: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x13e350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13e354: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x13e354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13e358: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x13e358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13e35c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13e360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e364: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e368: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e36c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e370: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x13e370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x13e374: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x13e374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x13e378: 0x246378b0  addiu       $v1, $v1, 0x78B0
    ctx->pc = 0x13e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30896));
    // 0x13e37c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x13e37cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e380: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x13e380u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x13e384: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x13e384u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13e388:
    // 0x13e388: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x13e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x13e38c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e390: 0x9423fd66  lhu         $v1, -0x29A($at)
    ctx->pc = 0x13e390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5CFD66u));
    // 0x13e394: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13e394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13e398: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x13e398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e39c: 0x1420005c  bnez        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x13E39Cu;
    {
        const bool branch_taken_0x13e39c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e39c) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E3A4u;
    // 0x13e3a4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x13e3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13e3a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13e3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13e3ac: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x13e3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
    // 0x13e3b0: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x13E3B0u;
    {
        const bool branch_taken_0x13e3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e3b0) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E3B8u;
    // 0x13e3b8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x13e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13e3bc: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x13e3bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x13e3c0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e3c4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e3c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e3c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e3cc: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e3d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e3d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e3d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e3d8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e3dc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13e3e0: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x13E3E0u;
    {
        const bool branch_taken_0x13e3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3e0) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E3E8u;
    // 0x13e3e8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13e3ec: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x13e3ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e3f0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e3f4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e3f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e3f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e3fc: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e400: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e404: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e408: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e40c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x13e40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e410: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x13E410u;
    {
        const bool branch_taken_0x13e410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e410) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E418u;
    // 0x13e418: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x13e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13e41c: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x13e41cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13e420: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e424: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e424u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e428: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e42c: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e42cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e430: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e434: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e434u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e438: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e438u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e43c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e440: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x13e440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13e444: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x13E444u;
    {
        const bool branch_taken_0x13e444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e444) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E44Cu;
    // 0x13e44c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x13e44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13e450: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x13e450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e454: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e458: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e458u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e45c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e460: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e464: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e468: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e46c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e46cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e470: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e474: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x13e474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e478: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x13E478u;
    {
        const bool branch_taken_0x13e478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e478) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E480u;
    // 0x13e480: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13e484: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x13e484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x13e488: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e48c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e48cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e494: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e494u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e498: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e49c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e49cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e4a0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e4a4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e4a8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x13e4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13e4ac: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13E4ACu;
    {
        const bool branch_taken_0x13e4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4ac) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E4B4u;
    // 0x13e4b4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13e4b8: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x13e4b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13e4bc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e4c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e4c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e4c8: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e4cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e4d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e4d4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e4d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e4d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e4dc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x13e4dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e4e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x13E4E0u;
    {
        const bool branch_taken_0x13e4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4e0) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E4E8u;
    // 0x13e4e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e4ec: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13e4f0: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x13e4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e4f4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13e4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13e4f8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13e4f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13e4fc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x13e4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13e500: 0xc04f9e4  jal         func_13E790
    ctx->pc = 0x13E500u;
    SET_GPR_U32(ctx, 31, 0x13E508u);
    ctx->pc = 0x13E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E790u, 0x13E500u, 0x13E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E508u;
label_13e508:
    // 0x13e508: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x13e508u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13e50c: 0x0  nop
    ctx->pc = 0x13e50cu;
    // NOP
label_13e510:
    // 0x13e510: 0x26310120  addiu       $s1, $s1, 0x120
    ctx->pc = 0x13e510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x13e514: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x13e514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13e518: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13e518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13e51c: 0x1660ff9a  bnez        $s3, . + 4 + (-0x66 << 2)
    ctx->pc = 0x13E51Cu;
    {
        const bool branch_taken_0x13e51c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e51c) {
            ctx->pc = 0x13E388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e388;
        }
    }
    ctx->pc = 0x13E524u;
    // 0x13e524: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13e524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13e528: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x13e528u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x13e52c: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x13e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
label_13e530:
    // 0x13e530: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x13e530u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13e534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13e538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e53c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13e53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13e540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e54c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x13e54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13e550: 0x3e00008  jr          $ra
    ctx->pc = 0x13E550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E558u;
}
