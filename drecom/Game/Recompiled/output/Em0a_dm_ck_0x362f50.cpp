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

// Function: Em0a_dm_ck
// Address: 0x362f50 - 0x363540
void Em0a_dm_ck_0x362f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_dm_ck_0x362f50");
#endif

    switch (ctx->pc) {
        case 0x36313cu: goto label_36313c;
        case 0x363204u: goto label_363204;
        case 0x36321cu: goto label_36321c;
        case 0x3632e0u: goto label_3632e0;
        case 0x363464u: goto label_363464;
        case 0x363474u: goto label_363474;
        case 0x36348cu: goto label_36348c;
        default: break;
    }

    ctx->pc = 0x362f50u;

    // 0x362f50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x362f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x362f54: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x362f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x362f58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x362f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x362f5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x362f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x362f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x362f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x362f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x362f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x362f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362f70: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x362f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x362f74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x362f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x362f78: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x362f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x362f7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x362f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x362f80: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x362f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x362f84: 0x10600164  beqz        $v1, . + 4 + (0x164 << 2)
    ctx->pc = 0x362F84u;
    {
        const bool branch_taken_0x362f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x362f84) {
            ctx->pc = 0x363518u;
            goto label_363518;
        }
    }
    ctx->pc = 0x362F8Cu;
    // 0x362f8c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x362f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x362f90: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x362f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x362f94: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x362f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x362f98: 0x8c721210  lw          $s2, 0x1210($v1)
    ctx->pc = 0x362f98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x362f9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x362f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x362fa0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x362fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x362fa4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x362fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x362fa8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x362FA8u;
    {
        const bool branch_taken_0x362fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x362fa8) {
            ctx->pc = 0x363000u;
            goto label_363000;
        }
    }
    ctx->pc = 0x362FB0u;
    // 0x362fb0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x362fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x362fb4: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x362fb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x362fb8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x362fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x362fbc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x362fbcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x362fc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x362fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362fc4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x362fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x362fc8: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x362fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x362fcc: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x362fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x362fd0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x362fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x362fd4: 0x0  nop
    ctx->pc = 0x362fd4u;
    // NOP
    // 0x362fd8: 0x1810  mfhi        $v1
    ctx->pc = 0x362fd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x362fdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x362fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x362fe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362fe4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x362fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x362fe8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x362fe8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x362fec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x362fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x362ff0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x362ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x362ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x362ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x362ff8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x362ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x362ffc: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x362ffcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_363000:
    // 0x363000: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363004: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x363004u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x363008: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x363008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x36300c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x36300cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x363010: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363014: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x363014u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x363018: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x363018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x36301c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36301cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363020: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x363020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x363024: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x363024u;
    {
        const bool branch_taken_0x363024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x363024) {
            ctx->pc = 0x36303Cu;
            goto label_36303c;
        }
    }
    ctx->pc = 0x36302Cu;
    // 0x36302c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363030: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x363030u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x363034: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363038: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x363038u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_36303c:
    // 0x36303c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x36303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363040: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x363040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x363044: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x363044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x363048: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x363048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36304c: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x36304Cu;
    {
        const bool branch_taken_0x36304c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36304c) {
            ctx->pc = 0x363144u;
            goto label_363144;
        }
    }
    ctx->pc = 0x363054u;
    // 0x363054: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363058: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x363058u;
    {
        const bool branch_taken_0x363058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363058) {
            ctx->pc = 0x363088u;
            goto label_363088;
        }
    }
    ctx->pc = 0x363060u;
    // 0x363060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x363060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363064: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x363064u;
    {
        const bool branch_taken_0x363064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363064) {
            ctx->pc = 0x363088u;
            goto label_363088;
        }
    }
    ctx->pc = 0x36306Cu;
    // 0x36306c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363070: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x363070u;
    {
        const bool branch_taken_0x363070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363070) {
            ctx->pc = 0x363088u;
            goto label_363088;
        }
    }
    ctx->pc = 0x363078u;
    // 0x363078: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363078u;
    {
        const bool branch_taken_0x363078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x363078) {
            ctx->pc = 0x363088u;
            goto label_363088;
        }
    }
    ctx->pc = 0x363080u;
    // 0x363080: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x363080u;
    {
        const bool branch_taken_0x363080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363080) {
            ctx->pc = 0x3631DCu;
            goto label_3631dc;
        }
    }
    ctx->pc = 0x363088u;
label_363088:
    // 0x363088: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36308c: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x36308cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x363090: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x363090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x363094: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363098: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x363098u;
    {
        const bool branch_taken_0x363098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363098) {
            ctx->pc = 0x3630ECu;
            goto label_3630ec;
        }
    }
    ctx->pc = 0x3630A0u;
    // 0x3630a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3630a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3630a4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3630A4u;
    {
        const bool branch_taken_0x3630a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3630a4) {
            ctx->pc = 0x3630E0u;
            goto label_3630e0;
        }
    }
    ctx->pc = 0x3630ACu;
    // 0x3630ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3630acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3630b0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3630B0u;
    {
        const bool branch_taken_0x3630b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3630b0) {
            ctx->pc = 0x3630D4u;
            goto label_3630d4;
        }
    }
    ctx->pc = 0x3630B8u;
    // 0x3630b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3630B8u;
    {
        const bool branch_taken_0x3630b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630b8) {
            ctx->pc = 0x3630C8u;
            goto label_3630c8;
        }
    }
    ctx->pc = 0x3630C0u;
    // 0x3630c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3630C0u;
    {
        const bool branch_taken_0x3630c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630c0) {
            ctx->pc = 0x3630F0u;
            goto label_3630f0;
        }
    }
    ctx->pc = 0x3630C8u;
label_3630c8:
    // 0x3630c8: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x3630c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3630cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3630CCu;
    {
        const bool branch_taken_0x3630cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630cc) {
            ctx->pc = 0x3630F0u;
            goto label_3630f0;
        }
    }
    ctx->pc = 0x3630D4u;
label_3630d4:
    // 0x3630d4: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x3630d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3630d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3630D8u;
    {
        const bool branch_taken_0x3630d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630d8) {
            ctx->pc = 0x3630F0u;
            goto label_3630f0;
        }
    }
    ctx->pc = 0x3630E0u;
label_3630e0:
    // 0x3630e0: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x3630e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3630e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3630E4u;
    {
        const bool branch_taken_0x3630e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630e4) {
            ctx->pc = 0x3630F0u;
            goto label_3630f0;
        }
    }
    ctx->pc = 0x3630ECu;
label_3630ec:
    // 0x3630ec: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3630ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3630f0:
    // 0x3630f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3630f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3630f4: 0x846411f2  lh          $a0, 0x11F2($v1)
    ctx->pc = 0x3630f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x3630f8: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x3630f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x3630fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3630fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x363100: 0xa6230016  sh          $v1, 0x16($s1)
    ctx->pc = 0x363100u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x363104: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x363104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x363108: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x363108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x36310c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36310cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363110: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x363110u;
    {
        const bool branch_taken_0x363110 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x363110) {
            ctx->pc = 0x36312Cu;
            goto label_36312c;
        }
    }
    ctx->pc = 0x363118u;
    // 0x363118: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x363118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36311c: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x36311cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x363120: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x363120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x363124: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x363124u;
    {
        const bool branch_taken_0x363124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363124) {
            ctx->pc = 0x363518u;
            goto label_363518;
        }
    }
    ctx->pc = 0x36312Cu;
label_36312c:
    // 0x36312c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x36312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363130: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x363134: 0xc0da134  jal         func_3684D0
    ctx->pc = 0x363134u;
    SET_GPR_U32(ctx, 31, 0x36313Cu);
    ctx->pc = 0x3684D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3684D0u, 0x363134u, 0x36313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36313Cu;
label_36313c:
    // 0x36313c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x36313Cu;
    {
        const bool branch_taken_0x36313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36313c) {
            ctx->pc = 0x363518u;
            goto label_363518;
        }
    }
    ctx->pc = 0x363144u;
label_363144:
    // 0x363144: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363148: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x363148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x36314c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x363150: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x363150u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x363154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x363154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x363158: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x363158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36315c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36315cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363160: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x363160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x363164: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x363164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363168: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x363168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x36316c: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x36316cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x363170: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x363170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x363174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x363174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x363178: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x363178u;
    {
        const bool branch_taken_0x363178 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x363178) {
            ctx->pc = 0x3631DCu;
            goto label_3631dc;
        }
    }
    ctx->pc = 0x363180u;
    // 0x363180: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363184: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x363184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x363188: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x363188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x36318c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x363190: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x363190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x363194: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x363194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x363198: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36319c: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x36319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x3631a0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x3631a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x3631a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3631a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3631a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3631a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3631ac: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x3631acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x3631b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3631b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631b4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3631b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3631b8: 0x245303f0  addiu       $s3, $v0, 0x3F0
    ctx->pc = 0x3631b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3631bc: 0x8e740034  lw          $s4, 0x34($s3)
    ctx->pc = 0x3631bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3631c0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3631c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x3631c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3631c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3631c8: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3631c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x3631cc: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x3631ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3631d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3631d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3631d4: 0xa202006e  sb          $v0, 0x6E($s0)
    ctx->pc = 0x3631d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x3631d8: 0xa200006f  sb          $zero, 0x6F($s0)
    ctx->pc = 0x3631d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 0));
label_3631dc:
    // 0x3631dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3631dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631e0: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x3631e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x3631e4: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x3631e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3631e8: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x3631e8u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x3631ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3631ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3631f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631f4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3631f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3631f8: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x3631f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x3631fc: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x3631FCu;
    SET_GPR_U32(ctx, 31, 0x363204u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x3631FCu, 0x363204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363204u;
label_363204:
    // 0x363204: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363208: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36320c: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x36320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363210: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x363210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363214: 0xc058f20  jal         func_163C80
    ctx->pc = 0x363214u;
    SET_GPR_U32(ctx, 31, 0x36321Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x363214u, 0x36321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36321Cu;
label_36321c:
    // 0x36321c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x36321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x363220: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x363220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x363224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363228: 0x0  nop
    ctx->pc = 0x363228u;
    // NOP
    // 0x36322c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36322cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363230: 0x0  nop
    ctx->pc = 0x363230u;
    // NOP
    // 0x363234: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x363234u;
    {
        const bool branch_taken_0x363234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363234) {
            ctx->pc = 0x363250u;
            goto label_363250;
        }
    }
    ctx->pc = 0x36323Cu;
    // 0x36323c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x36323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x363240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x363240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363244: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x363244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363248: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x363248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36324c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x36324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_363250:
    // 0x363250: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363254: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x363254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x363258: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x363258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36325c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36325cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x363260: 0x4410043  bgez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x363260u;
    {
        const bool branch_taken_0x363260 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x363260) {
            ctx->pc = 0x363370u;
            goto label_363370;
        }
    }
    ctx->pc = 0x363268u;
    // 0x363268: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36326c: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x36326cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x363270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x363270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x363274: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x363274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x363278: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x363278u;
    {
        const bool branch_taken_0x363278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363278) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x363280u;
    // 0x363280: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x363280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x363284: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x363284u;
    {
        const bool branch_taken_0x363284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363284) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x36328Cu;
    // 0x36328c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x36328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x363290: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x363290u;
    {
        const bool branch_taken_0x363290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363290) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x363298u;
    // 0x363298: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x363298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36329c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36329Cu;
    {
        const bool branch_taken_0x36329c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36329c) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x3632A4u;
    // 0x3632a4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3632a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3632a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3632A8u;
    {
        const bool branch_taken_0x3632a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3632a8) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x3632B0u;
    // 0x3632b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3632b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3632b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3632B4u;
    {
        const bool branch_taken_0x3632b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3632b4) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x3632BCu;
    // 0x3632bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3632bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3632c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3632C0u;
    {
        const bool branch_taken_0x3632c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3632c0) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x3632C8u;
    // 0x3632c8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3632C8u;
    {
        const bool branch_taken_0x3632c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3632c8) {
            ctx->pc = 0x3632D0u;
            goto label_3632d0;
        }
    }
    ctx->pc = 0x3632D0u;
label_3632d0:
    // 0x3632d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3632d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3632d4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3632d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3632d8: 0xc0da030  jal         func_3680C0
    ctx->pc = 0x3632D8u;
    SET_GPR_U32(ctx, 31, 0x3632E0u);
    ctx->pc = 0x3680C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3680C0u, 0x3632D8u, 0x3632E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632E0u;
label_3632e0:
    // 0x3632e0: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x3632e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3632e4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3632e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x3632e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3632e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3632ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3632ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3632f0: 0x0  nop
    ctx->pc = 0x3632f0u;
    // NOP
    // 0x3632f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3632f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3632f8: 0x0  nop
    ctx->pc = 0x3632f8u;
    // NOP
    // 0x3632fc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3632FCu;
    {
        const bool branch_taken_0x3632fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3632fc) {
            ctx->pc = 0x363338u;
            goto label_363338;
        }
    }
    ctx->pc = 0x363304u;
    // 0x363304: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x363304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36330c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36330cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363310: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363314: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x363314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x363318: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36331c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36331cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363320: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363324: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363328: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36332c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36332cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363330: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x363330u;
    {
        const bool branch_taken_0x363330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363330) {
            ctx->pc = 0x363518u;
            goto label_363518;
        }
    }
    ctx->pc = 0x363338u;
label_363338:
    // 0x363338: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x363338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36333c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x36333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363340: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363348: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36334c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36334cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363350: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363354: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363358: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36335c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36335cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363360: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363364: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363368: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x363368u;
    {
        const bool branch_taken_0x363368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363368) {
            ctx->pc = 0x363518u;
            goto label_363518;
        }
    }
    ctx->pc = 0x363370u;
label_363370:
    // 0x363370: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363374: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x363374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x363378: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36337c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x36337cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x363380: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363384: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x363384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x363388: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x363388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36338c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x36338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x363390: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x363390u;
    {
        const bool branch_taken_0x363390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363390) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x363398u;
    // 0x363398: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x363398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36339c: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x36339Cu;
    {
        const bool branch_taken_0x36339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36339c) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633A4u;
    // 0x3633a4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3633a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3633a8: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3633A8u;
    {
        const bool branch_taken_0x3633a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633a8) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633B0u;
    // 0x3633b0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3633b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3633b4: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3633B4u;
    {
        const bool branch_taken_0x3633b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633b4) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633BCu;
    // 0x3633bc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3633c0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3633C0u;
    {
        const bool branch_taken_0x3633c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633c0) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633C8u;
    // 0x3633c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3633c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3633cc: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3633CCu;
    {
        const bool branch_taken_0x3633cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633cc) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633D4u;
    // 0x3633d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3633d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3633d8: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3633D8u;
    {
        const bool branch_taken_0x3633d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633d8) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633E0u;
    // 0x3633e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3633e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3633e4: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3633E4u;
    {
        const bool branch_taken_0x3633e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633e4) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633ECu;
    // 0x3633ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3633f0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3633F0u;
    {
        const bool branch_taken_0x3633f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633f0) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x3633F8u;
    // 0x3633f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3633fc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3633FCu;
    {
        const bool branch_taken_0x3633fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3633fc) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x363404u;
    // 0x363404: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x363404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x363408: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x363408u;
    {
        const bool branch_taken_0x363408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363408) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x363410u;
    // 0x363410: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x363410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x363414: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x363414u;
    {
        const bool branch_taken_0x363414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363414) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x36341Cu;
    // 0x36341c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x36341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x363420: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x363420u;
    {
        const bool branch_taken_0x363420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363420) {
            ctx->pc = 0x36347Cu;
            goto label_36347c;
        }
    }
    ctx->pc = 0x363428u;
    // 0x363428: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x363428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36342c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36342Cu;
    {
        const bool branch_taken_0x36342c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36342c) {
            ctx->pc = 0x363464u;
            goto label_363464;
        }
    }
    ctx->pc = 0x363434u;
    // 0x363434: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x363434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x363438: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x363438u;
    {
        const bool branch_taken_0x363438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363438) {
            ctx->pc = 0x363464u;
            goto label_363464;
        }
    }
    ctx->pc = 0x363440u;
    // 0x363440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363444: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363444u;
    {
        const bool branch_taken_0x363444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363444) {
            ctx->pc = 0x363454u;
            goto label_363454;
        }
    }
    ctx->pc = 0x36344Cu;
    // 0x36344c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36344Cu;
    {
        const bool branch_taken_0x36344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36344c) {
            ctx->pc = 0x363464u;
            goto label_363464;
        }
    }
    ctx->pc = 0x363454u;
label_363454:
    // 0x363454: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363458: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36345c: 0xc0d9fc8  jal         func_367F20
    ctx->pc = 0x36345Cu;
    SET_GPR_U32(ctx, 31, 0x363464u);
    ctx->pc = 0x367F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367F20u, 0x36345Cu, 0x363464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363464u;
label_363464:
    // 0x363464: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363468: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363468u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36346c: 0xc0da08c  jal         func_368230
    ctx->pc = 0x36346Cu;
    SET_GPR_U32(ctx, 31, 0x363474u);
    ctx->pc = 0x368230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368230u, 0x36346Cu, 0x363474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363474u;
label_363474:
    // 0x363474: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x363474u;
    {
        const bool branch_taken_0x363474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363474) {
            ctx->pc = 0x363518u;
            goto label_363518;
        }
    }
    ctx->pc = 0x36347Cu;
label_36347c:
    // 0x36347c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x36347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363480: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x363484: 0xc0da030  jal         func_3680C0
    ctx->pc = 0x363484u;
    SET_GPR_U32(ctx, 31, 0x36348Cu);
    ctx->pc = 0x3680C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3680C0u, 0x363484u, 0x36348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36348Cu;
label_36348c:
    // 0x36348c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x36348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363490: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x363490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x363494: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x363494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x363498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36349c: 0x0  nop
    ctx->pc = 0x36349cu;
    // NOP
    // 0x3634a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3634a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3634a4: 0x0  nop
    ctx->pc = 0x3634a4u;
    // NOP
    // 0x3634a8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3634A8u;
    {
        const bool branch_taken_0x3634a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3634a8) {
            ctx->pc = 0x3634E8u;
            goto label_3634e8;
        }
    }
    ctx->pc = 0x3634B0u;
    // 0x3634b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3634b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3634b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3634b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3634bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3634bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3634c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3634c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3634c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3634ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3634d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3634d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3634d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3634dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3634e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3634E0u;
    {
        const bool branch_taken_0x3634e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3634e0) {
            ctx->pc = 0x363518u;
            goto label_363518;
        }
    }
    ctx->pc = 0x3634E8u;
label_3634e8:
    // 0x3634e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3634e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3634ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3634f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3634f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3634f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3634f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3634fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363500: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363504: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363508: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36350c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36350cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363510: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363514: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_363518:
    // 0x363518: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x363518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36351c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36351cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363520: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36352c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36352cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363534: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x363534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x363538: 0x3e00008  jr          $ra
    ctx->pc = 0x363538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363540u;
}
