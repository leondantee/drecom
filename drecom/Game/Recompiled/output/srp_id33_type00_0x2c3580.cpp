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

// Function: srp_id33_type00
// Address: 0x2c3580 - 0x2c3744
void srp_id33_type00_0x2c3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id33_type00_0x2c3580");
#endif

    switch (ctx->pc) {
        case 0x2c35ccu: goto label_2c35cc;
        case 0x2c36e8u: goto label_2c36e8;
        default: break;
    }

    ctx->pc = 0x2c3580u;

    // 0x2c3580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3584: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c3584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c3588: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c3588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c358c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3590: 0xa040036a  sb          $zero, 0x36A($v0)
    ctx->pc = 0x2c3590u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3594: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c359c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c35a0: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c35a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c35a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c35a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c35a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c35ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c35acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c35b0: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c35b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c35b4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c35b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c35b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c35bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c35c0: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c35c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c35c4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C35C4u;
    SET_GPR_U32(ctx, 31, 0x2C35CCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C35C4u, 0x2C35CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35CCu;
label_2c35cc:
    // 0x2c35cc: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2c35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2c35d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c35d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c35d4: 0x0  nop
    ctx->pc = 0x2c35d4u;
    // NOP
    // 0x2c35d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c35d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c35dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c35e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c35e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c35e4: 0x0  nop
    ctx->pc = 0x2c35e4u;
    // NOP
    // 0x2c35e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c35e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c35ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c35f0: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c35f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c35f4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c35f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c35fc: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c35fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3600: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c3600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c3604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3608: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c3608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c360c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c3610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3618: 0xe44002a4  swc1        $f0, 0x2A4($v0)
    ctx->pc = 0x2c3618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 676), bits); }
    // 0x2c361c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c3620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3624: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3628: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x2c3628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x2c362c: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c3630: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c3630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c3634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3638: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c363c: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c363cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c3640: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c3640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c3644: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c3644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c3648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c364c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3650: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x2c3650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x2c3654: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3658: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c3658u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c365c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c365cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3660: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c3660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c366c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c366cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c3670: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3674: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c3674u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c3678: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c3678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c367c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c367cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3684: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c3684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c3688: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c3688u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c368c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3690: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3694: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c3694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c3698: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c369c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c36a0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c36a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c36a4: 0x0  nop
    ctx->pc = 0x2c36a4u;
    // NOP
    // 0x2c36a8: 0x0  nop
    ctx->pc = 0x2c36a8u;
    // NOP
    // 0x2c36ac: 0x1010  mfhi        $v0
    ctx->pc = 0x2c36acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c36b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c36b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c36b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c36b8: 0xa04302aa  sb          $v1, 0x2AA($v0)
    ctx->pc = 0x2c36b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c36bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c36c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c36c4: 0xa04302a8  sb          $v1, 0x2A8($v0)
    ctx->pc = 0x2c36c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c36c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2c36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c36cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c36d0: 0xa043034f  sb          $v1, 0x34F($v0)
    ctx->pc = 0x2c36d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c36d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c36d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c36dc: 0xac430364  sw          $v1, 0x364($v0)
    ctx->pc = 0x2c36dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 3));
    // 0x2c36e0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C36E0u;
    SET_GPR_U32(ctx, 31, 0x2C36E8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C36E0u, 0x2C36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36E8u;
label_2c36e8:
    // 0x2c36e8: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2c36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2c36ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c36ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c36f0: 0x0  nop
    ctx->pc = 0x2c36f0u;
    // NOP
    // 0x2c36f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c36f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c36f8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c36fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c36fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3700: 0x0  nop
    ctx->pc = 0x2c3700u;
    // NOP
    // 0x2c3704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c3704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3708: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c370c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c3710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3718: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c3718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c371c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3720: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3724: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c3724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c372c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3730: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c3730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3734: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c3734u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3738: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c3738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c373c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3744u;
}
