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

// Function: e2d_id82_type02
// Address: 0x2bcff0 - 0x2bd11c
void e2d_id82_type02_0x2bcff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id82_type02_0x2bcff0");
#endif

    switch (ctx->pc) {
        case 0x2bd010u: goto label_2bd010;
        default: break;
    }

    ctx->pc = 0x2bcff0u;

    // 0x2bcff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bcff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcff4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bcff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bcff8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bcffc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2bcffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bd000: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd004: 0xa043011c  sb          $v1, 0x11C($v0)
    ctx->pc = 0x2bd004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd008: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BD008u;
    SET_GPR_U32(ctx, 31, 0x2BD010u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BD008u, 0x2BD010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD010u;
label_2bd010:
    // 0x2bd010: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2bd010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2bd014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd018: 0x0  nop
    ctx->pc = 0x2bd018u;
    // NOP
    // 0x2bd01c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd020: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bd020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bd024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd028: 0x0  nop
    ctx->pc = 0x2bd028u;
    // NOP
    // 0x2bd02c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd034: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bd034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bd038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd03c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd040: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2bd040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2bd044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd04c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bd04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bd050: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bd050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bd054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd05c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2bd05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2bd060: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x2bd060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x2bd064: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bd064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bd068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd06c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd070: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bd070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bd074: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd078: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd078u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd07c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd080: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd084: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd088: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd08c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bd08cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd090: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd094: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd094u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd098: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd09c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd0a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd0a4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bd0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bd0a8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bd0ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd0b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd0b4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bd0b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bd0b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd0bc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2bd0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2bd0c0: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2bd0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2bd0c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd0c8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bd0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bd0cc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bd0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bd0d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd0d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd0d8: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2bd0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2bd0dc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bd0e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd0e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd0e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd0e8: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2bd0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2bd0ec: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bd0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd0f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd0f8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2bd0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2bd0fc: 0x3c0342e6  lui         $v1, 0x42E6
    ctx->pc = 0x2bd0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17126 << 16));
    // 0x2bd100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd108: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2bd108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2bd10c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bd10cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd110: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bd110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd114: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD11Cu;
}
