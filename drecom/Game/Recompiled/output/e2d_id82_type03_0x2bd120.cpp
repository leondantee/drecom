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

// Function: e2d_id82_type03
// Address: 0x2bd120 - 0x2bd24c
void e2d_id82_type03_0x2bd120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id82_type03_0x2bd120");
#endif

    switch (ctx->pc) {
        case 0x2bd140u: goto label_2bd140;
        default: break;
    }

    ctx->pc = 0x2bd120u;

    // 0x2bd120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd124: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bd124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bd128: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bd12c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2bd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bd130: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd134: 0xa043011c  sb          $v1, 0x11C($v0)
    ctx->pc = 0x2bd134u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd138: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BD138u;
    SET_GPR_U32(ctx, 31, 0x2BD140u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BD138u, 0x2BD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD140u;
label_2bd140:
    // 0x2bd140: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2bd140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2bd144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd148: 0x0  nop
    ctx->pc = 0x2bd148u;
    // NOP
    // 0x2bd14c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd14cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd150: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2bd150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2bd154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd158: 0x0  nop
    ctx->pc = 0x2bd158u;
    // NOP
    // 0x2bd15c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd160: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd164: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bd164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bd168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd16c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd170: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2bd170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2bd174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd178: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd17c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bd17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bd180: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2bd180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2bd184: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd188: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd18c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2bd18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2bd190: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x2bd190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x2bd194: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bd194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bd198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd19c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd1a0: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bd1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bd1a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd1a8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd1ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd1b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd1b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd1b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd1bc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bd1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd1c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd1c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd1c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd1cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd1d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd1d4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bd1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bd1d8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bd1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bd1dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bd1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd1e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd1e4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bd1e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bd1e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd1ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2bd1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2bd1f0: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2bd1f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd1f8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bd1fc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bd1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bd200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd208: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2bd208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2bd20c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bd210: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd214: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd218: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2bd218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2bd21c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bd220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd224: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd228: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2bd228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2bd22c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x2bd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
    // 0x2bd230: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd234: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd238: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2bd238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2bd23c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bd23cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd240: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bd240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd244: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD24Cu;
}
