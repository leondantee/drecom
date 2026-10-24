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

// Function: srp_id32_type00
// Address: 0x2c31c0 - 0x2c33dc
void srp_id32_type00_0x2c31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id32_type00_0x2c31c0");
#endif

    switch (ctx->pc) {
        case 0x2c3264u: goto label_2c3264;
        case 0x2c3380u: goto label_2c3380;
        default: break;
    }

    ctx->pc = 0x2c31c0u;

    // 0x2c31c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c31c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c31c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c31c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c31cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c31ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c31d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c31d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c31d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c31d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c31dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c31e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c31e4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c31e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c31e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c31ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c31f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c31f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c31f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c31f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c31fc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c31fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c3200: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c3200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c3204: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3208: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c320c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c320cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c3210: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3214: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c3214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3218: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2c3218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c321c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c321cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c3220: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3224: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3228: 0xa043036a  sb          $v1, 0x36A($v0)
    ctx->pc = 0x2c3228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c322c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3234: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3238: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c3238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c323c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3248: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c3248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c324c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3258: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c3258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c325c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C325Cu;
    SET_GPR_U32(ctx, 31, 0x2C3264u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C325Cu, 0x2C3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3264u;
label_2c3264:
    // 0x2c3264: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2c3264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2c3268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c3268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c326c: 0x0  nop
    ctx->pc = 0x2c326cu;
    // NOP
    // 0x2c3270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3274: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c327c: 0x0  nop
    ctx->pc = 0x2c327cu;
    // NOP
    // 0x2c3280: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c3280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c3284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3288: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c3288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c328c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3290: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3294: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c3294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3298: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c3298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c329c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c32a0: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c32a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c32a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c32a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c32a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c32ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c32b0: 0xe44002a4  swc1        $f0, 0x2A4($v0)
    ctx->pc = 0x2c32b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 676), bits); }
    // 0x2c32b4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2c32b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c32b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c32bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c32c0: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x2c32c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x2c32c4: 0x3c02448f  lui         $v0, 0x448F
    ctx->pc = 0x2c32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17551 << 16));
    // 0x2c32c8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2c32c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2c32cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c32ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c32d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c32d4: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c32d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c32d8: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c32dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c32dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c32e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c32e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c32e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c32e8: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x2c32e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x2c32ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c32ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c32f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c32f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c32f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c32f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c32fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3304: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c3304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c3308: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c330c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c330cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c3310: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c3310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3314: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c3314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c331c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c331cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c3320: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c3320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c3324: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c332c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c332cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c3330: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3338: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c3338u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c333c: 0x0  nop
    ctx->pc = 0x2c333cu;
    // NOP
    // 0x2c3340: 0x0  nop
    ctx->pc = 0x2c3340u;
    // NOP
    // 0x2c3344: 0x1010  mfhi        $v0
    ctx->pc = 0x2c3344u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c3348: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c334c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3350: 0xa04302aa  sb          $v1, 0x2AA($v0)
    ctx->pc = 0x2c3350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3354: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c3354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3358: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c335c: 0xa04302a8  sb          $v1, 0x2A8($v0)
    ctx->pc = 0x2c335cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3360: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x2c3360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2c3364: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3368: 0xa043034f  sb          $v1, 0x34F($v0)
    ctx->pc = 0x2c3368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c336c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2c336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c3370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3374: 0xac430364  sw          $v1, 0x364($v0)
    ctx->pc = 0x2c3374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 3));
    // 0x2c3378: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C3378u;
    SET_GPR_U32(ctx, 31, 0x2C3380u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C3378u, 0x2C3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3380u;
label_2c3380:
    // 0x2c3380: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x2c3380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x2c3384: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c3384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3388: 0x0  nop
    ctx->pc = 0x2c3388u;
    // NOP
    // 0x2c338c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c338cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3390: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c3390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c3394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3398: 0x0  nop
    ctx->pc = 0x2c3398u;
    // NOP
    // 0x2c339c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c339cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c33a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c33a4: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c33a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c33a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c33ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c33acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c33b0: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c33b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c33b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c33b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c33bc: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c33bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c33c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c33c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c33c8: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c33c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c33cc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c33ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c33d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c33d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C33D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C33D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C33DCu;
}
