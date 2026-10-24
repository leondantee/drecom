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

// Function: ectrl1d_init00
// Address: 0x253cb0 - 0x253e50
void ectrl1d_init00_0x253cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1d_init00_0x253cb0");
#endif

    switch (ctx->pc) {
        case 0x253cf8u: goto label_253cf8;
        case 0x253d1cu: goto label_253d1c;
        case 0x253d40u: goto label_253d40;
        case 0x253dc4u: goto label_253dc4;
        case 0x253dd0u: goto label_253dd0;
        case 0x253e2cu: goto label_253e2c;
        case 0x253e38u: goto label_253e38;
        default: break;
    }

    ctx->pc = 0x253cb0u;

    // 0x253cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253cb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x253cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x253cb8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x253cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x253cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253cc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253cc4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x253cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x253cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253ccc: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x253cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x253cd0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x253cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x253cd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253cd8: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x253cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x253cdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253ce0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253ce4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253ce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253ce8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253cec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253cecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253cf0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253CF0u;
    SET_GPR_U32(ctx, 31, 0x253CF8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253CF0u, 0x253CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CF8u;
label_253cf8:
    // 0x253cf8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253d00: 0x0  nop
    ctx->pc = 0x253d00u;
    // NOP
    // 0x253d04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253d08: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253d10: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253d14: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253D14u;
    SET_GPR_U32(ctx, 31, 0x253D1Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253D14u, 0x253D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D1Cu;
label_253d1c:
    // 0x253d1c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253d24: 0x0  nop
    ctx->pc = 0x253d24u;
    // NOP
    // 0x253d28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253d2c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x253d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253d34: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253d38: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253D38u;
    SET_GPR_U32(ctx, 31, 0x253D40u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253D38u, 0x253D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D40u;
label_253d40:
    // 0x253d40: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253d44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253d48: 0x0  nop
    ctx->pc = 0x253d48u;
    // NOP
    // 0x253d4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253d50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x253d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253d58: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x253d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x253d5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253d60: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x253d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d64: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253d68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253d6c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x253d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x253d70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x253d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x253d74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x253d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x253d78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x253d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x253d7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x253d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x253d80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x253d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x253d84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253d88: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x253d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x253d8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253d90: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x253d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x253d94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x253d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x253d98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x253d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x253d9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x253d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x253da0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x253da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x253da4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x253da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x253da8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253dac: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x253dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x253db0: 0x24042f03  addiu       $a0, $zero, 0x2F03
    ctx->pc = 0x253db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12035));
    // 0x253db4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253db4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253db8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253dbc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253DBCu;
    SET_GPR_U32(ctx, 31, 0x253DC4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253DBCu, 0x253DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DC4u;
label_253dc4:
    // 0x253dc4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253dc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253dc8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253DC8u;
    SET_GPR_U32(ctx, 31, 0x253DD0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253DC8u, 0x253DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DD0u;
label_253dd0:
    // 0x253dd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253dd4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x253dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x253dd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x253dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x253ddc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x253ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x253de0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x253de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x253de4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x253de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x253de8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x253de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x253dec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253df0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x253df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x253df4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253df8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x253df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x253dfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x253dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x253e00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x253e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x253e04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x253e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x253e08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x253e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x253e0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x253e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x253e10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253e14: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x253e14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x253e18: 0x24046109  addiu       $a0, $zero, 0x6109
    ctx->pc = 0x253e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24841));
    // 0x253e1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253e1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253e20: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253e24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253E24u;
    SET_GPR_U32(ctx, 31, 0x253E2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253E24u, 0x253E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E2Cu;
label_253e2c:
    // 0x253e2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253e2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253e30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253E30u;
    SET_GPR_U32(ctx, 31, 0x253E38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253E30u, 0x253E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E38u;
label_253e38:
    // 0x253e38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x253e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253e3c: 0xac620108  sw          $v0, 0x108($v1)
    ctx->pc = 0x253e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 2));
    // 0x253e40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x253e40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253e44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x253e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x253e48: 0x3e00008  jr          $ra
    ctx->pc = 0x253E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253E50u;
}
