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

// Function: srp_id33_type02
// Address: 0x2c3900 - 0x2c3aac
void srp_id33_type02_0x2c3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id33_type02_0x2c3900");
#endif

    switch (ctx->pc) {
        case 0x2c394cu: goto label_2c394c;
        case 0x2c3a68u: goto label_2c3a68;
        default: break;
    }

    ctx->pc = 0x2c3900u;

    // 0x2c3900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3904: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c3904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c3908: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c3908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c390c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3910: 0xa040036a  sb          $zero, 0x36A($v0)
    ctx->pc = 0x2c3910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3914: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c391c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3920: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c3920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c3924: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c392c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3930: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c3930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c3934: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c393c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3940: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c3940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c3944: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C3944u;
    SET_GPR_U32(ctx, 31, 0x2C394Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C3944u, 0x2C394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C394Cu;
label_2c394c:
    // 0x2c394c: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2c394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2c3950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c3950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3954: 0x0  nop
    ctx->pc = 0x2c3954u;
    // NOP
    // 0x2c3958: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c395c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3964: 0x0  nop
    ctx->pc = 0x2c3964u;
    // NOP
    // 0x2c3968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c3968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c396c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3970: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c3970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c3974: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c3974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3978: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c397c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c397cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3980: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c3980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c3984: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3988: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c3988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c398c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c3990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3994: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3998: 0xe44002a4  swc1        $f0, 0x2A4($v0)
    ctx->pc = 0x2c3998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 676), bits); }
    // 0x2c399c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c39a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c39a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c39a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c39a8: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x2c39a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x2c39ac: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c39acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c39b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c39b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c39b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c39b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c39b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c39bc: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c39bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c39c0: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c39c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c39c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c39c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c39c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c39cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c39d0: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x2c39d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x2c39d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c39d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c39d8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c39dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c39dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c39e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c39e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c39e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c39e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c39ec: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c39f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c39f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c39f4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c39f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c39f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c39fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3a04: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c3a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c3a08: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c3a0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3a10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3a14: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c3a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c3a18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3a1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3a20: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c3a20u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c3a24: 0x0  nop
    ctx->pc = 0x2c3a24u;
    // NOP
    // 0x2c3a28: 0x0  nop
    ctx->pc = 0x2c3a28u;
    // NOP
    // 0x2c3a2c: 0x1010  mfhi        $v0
    ctx->pc = 0x2c3a2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c3a30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3a34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3a38: 0xa04302aa  sb          $v1, 0x2AA($v0)
    ctx->pc = 0x2c3a38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3a3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c3a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3a40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3a44: 0xa04302a8  sb          $v1, 0x2A8($v0)
    ctx->pc = 0x2c3a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3a48: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2c3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c3a4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3a50: 0xa043034f  sb          $v1, 0x34F($v0)
    ctx->pc = 0x2c3a50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3a54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3a58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3a5c: 0xac430364  sw          $v1, 0x364($v0)
    ctx->pc = 0x2c3a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 3));
    // 0x2c3a60: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C3A60u;
    SET_GPR_U32(ctx, 31, 0x2C3A68u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C3A60u, 0x2C3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A68u;
label_2c3a68:
    // 0x2c3a68: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2c3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2c3a6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c3a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3a70: 0x0  nop
    ctx->pc = 0x2c3a70u;
    // NOP
    // 0x2c3a74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3a78: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c3a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3a80: 0x0  nop
    ctx->pc = 0x2c3a80u;
    // NOP
    // 0x2c3a84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c3a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3a88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3a8c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c3a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c3a90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3a94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3a98: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c3a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3a9c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c3a9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3aa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c3aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3AACu;
}
