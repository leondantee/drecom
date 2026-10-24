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

// Function: entry_0024ede0
// Address: 0x24ede0 - 0x24f0bc
void entry_0024ede0_0x24ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024ede0_0x24ede0");
#endif

    switch (ctx->pc) {
        case 0x24ef00u: goto label_24ef00;
        case 0x24ef0cu: goto label_24ef0c;
        case 0x24ef74u: goto label_24ef74;
        case 0x24ef80u: goto label_24ef80;
        case 0x24efd4u: goto label_24efd4;
        case 0x24efe0u: goto label_24efe0;
        case 0x24f02cu: goto label_24f02c;
        case 0x24f038u: goto label_24f038;
        case 0x24f088u: goto label_24f088;
        case 0x24f094u: goto label_24f094;
        default: break;
    }

    ctx->pc = 0x24ede0u;

    // 0x24ede0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x24ede0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24ede4: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x24EDE4u;
    {
        const bool branch_taken_0x24ede4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ede4) {
            ctx->pc = 0x24EC20u;
            return;
        }
    }
    ctx->pc = 0x24EDECu;
    // 0x24edec: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24edf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24edf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24edf4: 0x0  nop
    ctx->pc = 0x24edf4u;
    // NOP
    // 0x24edf8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24edf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24edfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24edfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ee00: 0x0  nop
    ctx->pc = 0x24ee00u;
    // NOP
    // 0x24ee04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24ee04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24ee08: 0x3c04430c  lui         $a0, 0x430C
    ctx->pc = 0x24ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17164 << 16));
    // 0x24ee0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24ee0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ee10: 0x0  nop
    ctx->pc = 0x24ee10u;
    // NOP
    // 0x24ee14: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24ee18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ee1c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ee20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee2c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x24ee2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x24ee30: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x24ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24ee34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ee34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ee38: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x24ee38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee3c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24ee40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ee50: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x24ee50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ee54: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x24ee54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x24ee58: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x24ee58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x24ee5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ee60: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ee64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ee74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ee78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ee7c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24ee7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ee84: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ee88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ee88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ee8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ee90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ee94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ee98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ee9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eea0: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x24eea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24eea4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eea8: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24eeac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24eeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24eeb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24eeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24eeb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24eeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eeb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24eebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eec0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x24eec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eec4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x24eec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x24eec8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24eecc: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24eed0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24eed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24eed4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24eed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24eed8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24eed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24eedc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24eee0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eee4: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x24eee4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eee8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x24eee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x24eeec: 0x24040601  addiu       $a0, $zero, 0x601
    ctx->pc = 0x24eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
    // 0x24eef0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24eef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24eef4: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x24eef4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24eef8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24EEF8u;
    SET_GPR_U32(ctx, 31, 0x24EF00u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24EEF8u, 0x24EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF00u;
label_24ef00:
    // 0x24ef00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ef00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef04: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24EF04u;
    SET_GPR_U32(ctx, 31, 0x24EF0Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24EF04u, 0x24EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF0Cu;
label_24ef0c:
    // 0x24ef0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24ef0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ef14: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24ef18: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24ef18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ef1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24ef1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ef20: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x24ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24ef24: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef28: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24ef2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef30: 0x0  nop
    ctx->pc = 0x24ef30u;
    // NOP
    // 0x24ef34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ef34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ef38: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24ef38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24ef3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ef40: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ef44: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24ef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24ef48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ef4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ef50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ef54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ef58: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ef58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ef5c: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x24ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x24ef60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24ef60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ef64: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ef68: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24ef68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef6c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EF6Cu;
    SET_GPR_U32(ctx, 31, 0x24EF74u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EF6Cu, 0x24EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF74u;
label_24ef74:
    // 0x24ef74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ef74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef78: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EF78u;
    SET_GPR_U32(ctx, 31, 0x24EF80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EF78u, 0x24EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF80u;
label_24ef80:
    // 0x24ef80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24ef80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ef84: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef88: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x24ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x24ef8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24ef8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef90: 0x0  nop
    ctx->pc = 0x24ef90u;
    // NOP
    // 0x24ef94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ef94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ef98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24ef98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24ef9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24efa0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x24efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24efa4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24efa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24efa8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24efa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24efac: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24efacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24efb0: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x24efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x24efb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24efb8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x24efb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24efbc: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24efc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24efc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24efc4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x24efc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24efc8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24efc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24efcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24EFCCu;
    SET_GPR_U32(ctx, 31, 0x24EFD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24EFCCu, 0x24EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFD4u;
label_24efd4:
    // 0x24efd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24efd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24efd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24EFD8u;
    SET_GPR_U32(ctx, 31, 0x24EFE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24EFD8u, 0x24EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFE0u;
label_24efe0:
    // 0x24efe0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24efe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24efe4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24efe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24efe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24efec: 0x0  nop
    ctx->pc = 0x24efecu;
    // NOP
    // 0x24eff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24eff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24eff4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24eff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24eff8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24effc: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x24effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x24f000: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f004: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f008: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f00c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f014: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f018: 0x24040413  addiu       $a0, $zero, 0x413
    ctx->pc = 0x24f018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x24f01c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24f01cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24f020: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24f020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f024: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F024u;
    SET_GPR_U32(ctx, 31, 0x24F02Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F024u, 0x24F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F02Cu;
label_24f02c:
    // 0x24f02c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f02cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f030: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F030u;
    SET_GPR_U32(ctx, 31, 0x24F038u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F030u, 0x24F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F038u;
label_24f038:
    // 0x24f038: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f03c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x24f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x24f040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f044: 0x0  nop
    ctx->pc = 0x24f044u;
    // NOP
    // 0x24f048: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24f048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24f04c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24f050: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24f050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24f054: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x24f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x24f058: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f05c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f060: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f064: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f068: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f06c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f070: 0x24050411  addiu       $a1, $zero, 0x411
    ctx->pc = 0x24f070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x24f074: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24f074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24f078: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24f078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24f07c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f080: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F080u;
    SET_GPR_U32(ctx, 31, 0x24F088u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F080u, 0x24F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F088u;
label_24f088:
    // 0x24f088: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f08c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F08Cu;
    SET_GPR_U32(ctx, 31, 0x24F094u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F08Cu, 0x24F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F094u;
label_24f094:
    // 0x24f094: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24f098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f09c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x24f09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24f0a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24f0a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24f0a8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24f0a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f0ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f0b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24f0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24F0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F0BCu;
}
