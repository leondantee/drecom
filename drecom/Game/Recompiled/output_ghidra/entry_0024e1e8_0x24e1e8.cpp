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

// Function: entry_0024e1e8
// Address: 0x24e1e8 - 0x24e4b8
void entry_0024e1e8_0x24e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024e1e8_0x24e1e8");
#endif

    switch (ctx->pc) {
        case 0x24e308u: goto label_24e308;
        case 0x24e314u: goto label_24e314;
        case 0x24e37cu: goto label_24e37c;
        case 0x24e388u: goto label_24e388;
        case 0x24e3d4u: goto label_24e3d4;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e438u: goto label_24e438;
        case 0x24e484u: goto label_24e484;
        case 0x24e490u: goto label_24e490;
        default: break;
    }

    ctx->pc = 0x24e1e8u;

    // 0x24e1e8: 0x2e060002  sltiu       $a2, $s0, 0x2
    ctx->pc = 0x24e1e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24e1ec: 0x14c0ff91  bnez        $a2, . + 4 + (-0x6F << 2)
    ctx->pc = 0x24E1ECu;
    {
        const bool branch_taken_0x24e1ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e1ec) {
            ctx->pc = 0x24E034u;
            return;
        }
    }
    ctx->pc = 0x24E1F4u;
    // 0x24e1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e1f8: 0x0  nop
    ctx->pc = 0x24e1f8u;
    // NOP
    // 0x24e1fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24e1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e200: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x24e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x24e204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e208: 0x0  nop
    ctx->pc = 0x24e208u;
    // NOP
    // 0x24e20c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e210: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x24e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x24e214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e218: 0x0  nop
    ctx->pc = 0x24e218u;
    // NOP
    // 0x24e21c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e220: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24e220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e224: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x24e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24e228: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e22c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e230: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e234: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x24e234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x24e238: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x24e238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x24e23c: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x24e23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24e240: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x24e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24e244: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24e244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e248: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24e248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e24c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e250: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e254: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e258: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e25c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24e264: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e268: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x24e268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24e26c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24e26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e270: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e274: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e278: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e27c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e280: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24e280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e284: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24e284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24e288: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e28c: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x24e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x24e290: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x24e290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24e294: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e298: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e29c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e2a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e2a4: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x24e2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e2a8: 0xc54825  or          $t1, $a2, $a1
    ctx->pc = 0x24e2a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x24e2ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e2b0: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24e2b4: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24e2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24e2b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e2bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e2c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e2c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e2c8: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x24e2c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e2cc: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x24e2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x24e2d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e2d4: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x24e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24e2d8: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x24e2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x24e2dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e2e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24e2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e2e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24e2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24e2e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24e2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e2ec: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x24e2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24e2f0: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x24e2f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x24e2f4: 0x24040601  addiu       $a0, $zero, 0x601
    ctx->pc = 0x24e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
    // 0x24e2f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24e2f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e2fc: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x24e2fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24e300: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24E300u;
    SET_GPR_U32(ctx, 31, 0x24E308u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24E300u, 0x24E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E308u;
label_24e308:
    // 0x24e308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e30c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24E30Cu;
    SET_GPR_U32(ctx, 31, 0x24E314u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24E30Cu, 0x24E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E314u;
label_24e314:
    // 0x24e314: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24e314u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e318: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e31c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24e320: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24e320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e324: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x24e324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e328: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x24e328u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x24e32c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e330: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24e330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24e334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e338: 0x0  nop
    ctx->pc = 0x24e338u;
    // NOP
    // 0x24e33c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e340: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24e340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24e344: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e348: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24e348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e34c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24e34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24e350: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e354: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e358: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e35c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e360: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24e360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e364: 0x24040416  addiu       $a0, $zero, 0x416
    ctx->pc = 0x24e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x24e368: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e368u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e36c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e370: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24e370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e374: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E374u;
    SET_GPR_U32(ctx, 31, 0x24E37Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E374u, 0x24E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E37Cu;
label_24e37c:
    // 0x24e37c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e37cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e380: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E380u;
    SET_GPR_U32(ctx, 31, 0x24E388u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E380u, 0x24E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E388u;
label_24e388:
    // 0x24e388: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e38c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24e390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e394: 0x0  nop
    ctx->pc = 0x24e394u;
    // NOP
    // 0x24e398: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e39c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24e39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24e3a0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x24e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e3a4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x24e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x24e3a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e3ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e3b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e3b4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24e3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24e3b8: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24e3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e3bc: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24e3bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e3c0: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x24e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x24e3c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e3c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e3c8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e3cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E3CCu;
    SET_GPR_U32(ctx, 31, 0x24E3D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E3CCu, 0x24E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3D4u;
label_24e3d4:
    // 0x24e3d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e3d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e3d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E3D8u;
    SET_GPR_U32(ctx, 31, 0x24E3E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E3D8u, 0x24E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3E0u;
label_24e3e0:
    // 0x24e3e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e3e4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24e3e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24e3e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e3ec: 0x0  nop
    ctx->pc = 0x24e3ecu;
    // NOP
    // 0x24e3f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e3f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e3f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24e3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24e3f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e3fc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e400: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e404: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24e404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24e408: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e40c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x24e40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x24e410: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x24e410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24e414: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x24e414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24e418: 0x24040417  addiu       $a0, $zero, 0x417
    ctx->pc = 0x24e418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x24e41c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e41cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e420: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e424: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E424u;
    SET_GPR_U32(ctx, 31, 0x24E42Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E424u, 0x24E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E42Cu;
label_24e42c:
    // 0x24e42c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e42cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e430: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E430u;
    SET_GPR_U32(ctx, 31, 0x24E438u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E430u, 0x24E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E438u;
label_24e438:
    // 0x24e438: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e43c: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x24e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
    // 0x24e440: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24e440u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e444: 0x0  nop
    ctx->pc = 0x24e444u;
    // NOP
    // 0x24e448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24e448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24e44c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24e450: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e454: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e458: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e45c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e460: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e464: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e468: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e46c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24e46cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e470: 0x24040415  addiu       $a0, $zero, 0x415
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    // 0x24e474: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24e474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24e478: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24e478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e47c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24E47Cu;
    SET_GPR_U32(ctx, 31, 0x24E484u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24E47Cu, 0x24E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E484u;
label_24e484:
    // 0x24e484: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e488: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24E488u;
    SET_GPR_U32(ctx, 31, 0x24E490u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24E488u, 0x24E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E490u;
label_24e490:
    // 0x24e490: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e498: 0x38660010  xori        $a2, $v1, 0x10
    ctx->pc = 0x24e498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24e49c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e4a0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x24e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x24e4a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24e4a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24e4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e4ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24e4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24e4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24E4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E4B8u;
}
