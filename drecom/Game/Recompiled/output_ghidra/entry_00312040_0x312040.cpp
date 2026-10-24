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

// Function: entry_00312040
// Address: 0x312040 - 0x312188
void entry_00312040_0x312040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312040_0x312040");
#endif

    switch (ctx->pc) {
        case 0x312148u: goto label_312148;
        case 0x312168u: goto label_312168;
        default: break;
    }

    ctx->pc = 0x312040u;

    // 0x312040: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312044: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312048: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31204c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31204cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312058: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x312058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31205c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312060: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312060u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312064: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312068: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31206c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312070: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x312070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x312074: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x312074u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x312078: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31207c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31207cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312080: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x312080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x312084: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x312084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312088: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x312088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31208c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x31208cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x312090: 0x0  nop
    ctx->pc = 0x312090u;
    // NOP
    // 0x312094: 0x0  nop
    ctx->pc = 0x312094u;
    // NOP
    // 0x312098: 0x1010  mfhi        $v0
    ctx->pc = 0x312098u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31209c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3120a0: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x3120a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x3120a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3120a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3120a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3120a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3120ac: 0x0  nop
    ctx->pc = 0x3120acu;
    // NOP
    // 0x3120b0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3120b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3120b4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3120b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3120b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3120b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3120bc: 0x0  nop
    ctx->pc = 0x3120bcu;
    // NOP
    // 0x3120c0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3120c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3120c4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3120c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3120c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3120c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3120cc: 0x0  nop
    ctx->pc = 0x3120ccu;
    // NOP
    // 0x3120d0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3120d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3120d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3120d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3120d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3120d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3120dc: 0x0  nop
    ctx->pc = 0x3120dcu;
    // NOP
    // 0x3120e0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x3120e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3120e4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3120e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3120e8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3120e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x3120ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3120f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3120f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3120f4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x3120f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x3120f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3120f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3120fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3120fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312100: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x312100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x312104: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x312104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x312108: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x312108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31210c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x31210cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x312110: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x312110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312114: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x312114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x312118: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x312118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31211c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x31211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x312120: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x312120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312124: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x312124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x312128: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x312128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x31212c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312130: 0x0  nop
    ctx->pc = 0x312130u;
    // NOP
    // 0x312134: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x312134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x312138: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x312138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31213c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x31213cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x312140: 0xc067648  jal         func_19D920
    ctx->pc = 0x312140u;
    SET_GPR_U32(ctx, 31, 0x312148u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312140u, 0x312148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312148u;
label_312148:
    // 0x312148: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x312148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31214c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312150: 0x0  nop
    ctx->pc = 0x312150u;
    // NOP
    // 0x312154: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312158: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x312158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x31215c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x31215cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x312160: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x312160u;
    SET_GPR_U32(ctx, 31, 0x312168u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x312160u, 0x312168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312168u;
label_312168:
    // 0x312168: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x312168u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31216c: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x31216cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x312170: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x312170u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31217c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31217cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x312180: 0x3e00008  jr          $ra
    ctx->pc = 0x312180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312188u;
}
