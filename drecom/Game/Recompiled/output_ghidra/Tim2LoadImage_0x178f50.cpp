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

// Function: Tim2LoadImage
// Address: 0x178f50 - 0x1792a8
void Tim2LoadImage_0x178f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tim2LoadImage_0x178f50");
#endif

    switch (ctx->pc) {
        case 0x179018u: goto label_179018;
        case 0x1790bcu: goto label_1790bc;
        case 0x1790d0u: goto label_1790d0;
        case 0x17911cu: goto label_17911c;
        case 0x179150u: goto label_179150;
        case 0x179238u: goto label_179238;
        case 0x17924cu: goto label_17924c;
        default: break;
    }

    ctx->pc = 0x178f50u;

    // 0x178f50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x178f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x178f54: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x178f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x178f58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x178f5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x178f60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x178f64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178f74: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x178f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x178f78: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x178f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x178f7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x178f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178f80: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x178f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x178f84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x178f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178f88: 0x184000bb  blez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x178F88u;
    {
        const bool branch_taken_0x178f88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x178f88) {
            ctx->pc = 0x179278u;
            goto label_179278;
        }
    }
    ctx->pc = 0x178F90u;
    // 0x178f90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x178f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178f94: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x178f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x178f98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x178f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178f9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178fa0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x178fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x178fa4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x178fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x178fa8: 0x2442ec20  addiu       $v0, $v0, -0x13E0
    ctx->pc = 0x178fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962208));
    // 0x178fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178fb0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x178fb0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178fb4: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x178fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x178fb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x178fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178fbc: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x178fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x178fc0: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x178fc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x178fc4: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x178fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x178fc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x178fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178fcc: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x178fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x178fd0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x178fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x178fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178fd8: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x178fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x178fdc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x178fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178fe0: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x178fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x178fe4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x178fe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x178fe8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x178fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178fec: 0x94420016  lhu         $v0, 0x16($v0)
    ctx->pc = 0x178fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x178ff0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x178ff0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x178ff4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x178ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178ff8: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x178ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x178ffc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x178ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x179000: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179004: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x179004u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179008: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x179008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x17900c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x17900cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x179010: 0xc05e6dc  jal         func_179B70
    ctx->pc = 0x179010u;
    SET_GPR_U32(ctx, 31, 0x179018u);
    ctx->pc = 0x179B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B70u, 0x179010u, 0x179018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179018u;
label_179018:
    // 0x179018: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x179018u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17901c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x17901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179020: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x179020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x179024: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179028: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x179028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x17902c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x17902cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179030: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x179030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x179034: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x179034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x179038: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x179038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17903c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179040: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x179040u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x179044: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x179044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x179048: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x179048u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x17904c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179050: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x179050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x179054: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x179054u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179058: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x179058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x17905c: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x17905cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x179060: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x179060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x179064: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x179064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x179068: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x179068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17906c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179070: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x179070u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x179074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179078: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17907c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x17907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x179080: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x179080u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x179084: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x179084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x179088: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x179088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17908c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x17908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x179090: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x179090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x179094: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179098: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x179098u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x17909c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x17909cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1790a0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1790a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1790a4: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1790a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1790a8: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1790a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1790ac: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1790acu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1790b0: 0x72c04e28  paddub      $t1, $s6, $zero
    ctx->pc = 0x1790b0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1790b4: 0xc05e600  jal         func_179800
    ctx->pc = 0x1790B4u;
    SET_GPR_U32(ctx, 31, 0x1790BCu);
    ctx->pc = 0x179800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179800u, 0x1790B4u, 0x1790BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790BCu;
label_1790bc:
    // 0x1790bc: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1790bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1790c0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1790c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1790c4: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x1790c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1790c8: 0xc05e724  jal         func_179C90
    ctx->pc = 0x1790C8u;
    SET_GPR_U32(ctx, 31, 0x1790D0u);
    ctx->pc = 0x179C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C90u, 0x1790C8u, 0x1790D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790D0u;
label_1790d0:
    // 0x1790d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1790d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1790d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1790d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1790d8: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1790d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1790dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1790dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1790e0: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x1790e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1790e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1790e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1790e8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1790e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1790ec: 0x14200062  bnez        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x1790ECu;
    {
        const bool branch_taken_0x1790ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790ec) {
            ctx->pc = 0x179278u;
            goto label_179278;
        }
    }
    ctx->pc = 0x1790F4u;
    // 0x1790f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1790f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1790f8: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x1790f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1790fc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1790fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179100: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x179100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x179104: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x179104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x179108: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17910c: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x17910cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179110: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x179110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179114: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x179114u;
    {
        const bool branch_taken_0x179114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179114) {
            ctx->pc = 0x179260u;
            goto label_179260;
        }
    }
    ctx->pc = 0x17911Cu;
label_17911c:
    // 0x17911c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179120: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x179120u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x179124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179128: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x179128u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x17912c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x17912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179130: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179134: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179138: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x179138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17913c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x17913cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x179140: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x179140u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x179144: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x179144u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x179148: 0xc05e6dc  jal         func_179B70
    ctx->pc = 0x179148u;
    SET_GPR_U32(ctx, 31, 0x179150u);
    ctx->pc = 0x179B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B70u, 0x179148u, 0x179150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179150u;
label_179150:
    // 0x179150: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x179150u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x179154: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x179154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x179158: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x179158u;
    {
        const bool branch_taken_0x179158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179158) {
            ctx->pc = 0x1791C0u;
            goto label_1791c0;
        }
    }
    ctx->pc = 0x179160u;
    // 0x179160: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x179160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179164: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x179168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17916c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17916cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179170: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x179170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179178: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17917c: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x17917cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x179180: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x179180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x179184: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179188: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x179188u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x17918c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x17918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179190: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x179190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x179194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17919c: 0x2443000e  addiu       $v1, $v0, 0xE
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x1791a0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1791a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1791a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1791a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1791a8: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x1791a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1791ac: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1791acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1791b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1791b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1791b4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1791b4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x1791b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1791B8u;
    {
        const bool branch_taken_0x1791b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1791b8) {
            ctx->pc = 0x179218u;
            goto label_179218;
        }
    }
    ctx->pc = 0x1791C0u;
label_1791c0:
    // 0x1791c0: 0x2603fffc  addiu       $v1, $s0, -0x4
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1791c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1791c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1791c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1791cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1791ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1791d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1791d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1791d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1791d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1791d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1791dc: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x1791dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1791e0: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1791e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1791e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1791e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1791e8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x1791e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x1791ec: 0x2603fffc  addiu       $v1, $s0, -0x4
    ctx->pc = 0x1791ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1791f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1791f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1791f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1791f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1791f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1791f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1791fc: 0x2443000e  addiu       $v1, $v0, 0xE
    ctx->pc = 0x1791fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x179200: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x179200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x179204: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x179204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x179208: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x179208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x17920c: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x17920cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x179210: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179214: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x179214u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
label_179218:
    // 0x179218: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x179218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x17921c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x17921cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179220: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x179220u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x179224: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x179224u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x179228: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x179228u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x17922c: 0x72c04e28  paddub      $t1, $s6, $zero
    ctx->pc = 0x17922cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x179230: 0xc05e600  jal         func_179800
    ctx->pc = 0x179230u;
    SET_GPR_U32(ctx, 31, 0x179238u);
    ctx->pc = 0x179800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179800u, 0x179230u, 0x179238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179238u;
label_179238:
    // 0x179238: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x179238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x17923c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x17923cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x179240: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x179240u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x179244: 0xc05e724  jal         func_179C90
    ctx->pc = 0x179244u;
    SET_GPR_U32(ctx, 31, 0x17924Cu);
    ctx->pc = 0x179C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C90u, 0x179244u, 0x17924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17924Cu;
label_17924c:
    // 0x17924c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179250: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179254: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x179254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x179258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17925c: 0x0  nop
    ctx->pc = 0x17925cu;
    // NOP
label_179260:
    // 0x179260: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179264: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x179264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x179268: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17926c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x17926cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179270: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x179270u;
    {
        const bool branch_taken_0x179270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179270) {
            ctx->pc = 0x17911Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17911c;
        }
    }
    ctx->pc = 0x179278u;
label_179278:
    // 0x179278: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x179278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17927c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x17927cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179280: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x179280u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179284: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x179284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179288: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17928c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17928cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17929c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17929cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1792a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1792A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1792A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1792A8u;
}
