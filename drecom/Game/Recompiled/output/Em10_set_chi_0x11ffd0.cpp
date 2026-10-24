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

// Function: Em10_set_chi
// Address: 0x11ffd0 - 0x120110
void Em10_set_chi_0x11ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_set_chi_0x11ffd0");
#endif

    switch (ctx->pc) {
        case 0x11fffcu: goto label_11fffc;
        case 0x120008u: goto label_120008;
        case 0x12002cu: goto label_12002c;
        case 0x120040u: goto label_120040;
        case 0x120064u: goto label_120064;
        case 0x1200b4u: goto label_1200b4;
        case 0x1200c4u: goto label_1200c4;
        case 0x1200dcu: goto label_1200dc;
        case 0x120100u: goto label_120100;
        default: break;
    }

    ctx->pc = 0x11ffd0u;

    // 0x11ffd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11ffd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x11ffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x11ffd8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x11ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x11ffdc: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x11ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x11ffe0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x11ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11ffe4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x11ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ffe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11ffec: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x11ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x11fff0: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x11fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x11fff4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x11FFF4u;
    SET_GPR_U32(ctx, 31, 0x11FFFCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x11FFF4u, 0x11FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFFCu;
label_11fffc:
    // 0x11fffc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120000: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x120000u;
    SET_GPR_U32(ctx, 31, 0x120008u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x120000u, 0x120008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120008u;
label_120008:
    // 0x120008: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x120008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12000c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x12000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120010: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x120010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x120014: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x120014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120018: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x120018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12001c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12001cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x120020: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x120020u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x120024: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x120024u;
    SET_GPR_U32(ctx, 31, 0x12002Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x120024u, 0x12002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12002Cu;
label_12002c:
    // 0x12002c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x12002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x120030: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x120030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x120034: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x120034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x120038: 0xc0455e6  jal         func_115798
    ctx->pc = 0x120038u;
    SET_GPR_U32(ctx, 31, 0x120040u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x120038u, 0x120040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120040u;
label_120040:
    // 0x120040: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x120040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x120044: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x120044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120048: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x120048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12004c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x120050: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x120050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x120054: 0x24651200  addiu       $a1, $v1, 0x1200
    ctx->pc = 0x120054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x120058: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x120058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12005c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12005Cu;
    SET_GPR_U32(ctx, 31, 0x120064u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12005Cu, 0x120064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120064u;
label_120064:
    // 0x120064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x120068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12006c: 0x0  nop
    ctx->pc = 0x12006cu;
    // NOP
    // 0x120070: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x120070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x120074: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120078: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x120078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12007c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12007cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x120080: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x120080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x120084: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x120084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x120088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12008c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x120090: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120094: 0x34440506  ori         $a0, $v0, 0x506
    ctx->pc = 0x120094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1286);
    // 0x120098: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x120098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12009c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12009cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1200a0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1200a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1200a4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x1200a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1200a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1200a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1200ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1200ACu;
    SET_GPR_U32(ctx, 31, 0x1200B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1200ACu, 0x1200B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200B4u;
label_1200b4:
    // 0x1200b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1200b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1200b8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1200b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1200bc: 0xc040c24  jal         func_103090
    ctx->pc = 0x1200BCu;
    SET_GPR_U32(ctx, 31, 0x1200C4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1200C4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1200C4u) { return; }
    ctx->pc = 0x1200C4u;
label_1200c4:
    // 0x1200c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1200c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1200c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1200cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1200ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1200d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1200d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1200d4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1200D4u;
    SET_GPR_U32(ctx, 31, 0x1200DCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1200DCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1200DCu) { return; }
    ctx->pc = 0x1200DCu;
label_1200dc:
    // 0x1200dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1200dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1200e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1200e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1200e4: 0x0  nop
    ctx->pc = 0x1200e4u;
    // NOP
    // 0x1200e8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1200e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1200ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1200ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1200f0: 0x24441200  addiu       $a0, $v0, 0x1200
    ctx->pc = 0x1200f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x1200f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1200f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1200f8: 0xc085f58  jal         func_217D60
    ctx->pc = 0x1200F8u;
    SET_GPR_U32(ctx, 31, 0x120100u);
    ctx->pc = 0x217D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D60u, 0x1200F8u, 0x120100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120100u;
label_120100:
    // 0x120100: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x120100u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120104: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x120104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x120108: 0x3e00008  jr          $ra
    ctx->pc = 0x120108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120110u;
}
