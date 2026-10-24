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

// Function: e2d_id25_type03
// Address: 0x2b3920 - 0x2b3a70
void e2d_id25_type03_0x2b3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id25_type03_0x2b3920");
#endif

    switch (ctx->pc) {
        case 0x2b39c8u: goto label_2b39c8;
        default: break;
    }

    ctx->pc = 0x2b3920u;

    // 0x2b3920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3924: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3928: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b392c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2b392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2b3930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3938: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b3938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b393c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3948: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b3948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b394c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2b394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2b3950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3958: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b3958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b395c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3964: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3968: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b3968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b396c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b396cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2b3970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3974: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3978: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b3978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b397c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b3980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3984: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3988: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b3988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b398c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2b398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2b3990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3994: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3998: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b3998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b399c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b39a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b39a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b39a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b39a8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b39a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b39ac: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b39acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b39b0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b39b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b39b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b39b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b39b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b39bc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b39bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b39c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B39C0u;
    SET_GPR_U32(ctx, 31, 0x2B39C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B39C0u, 0x2B39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39C8u;
label_2b39c8:
    // 0x2b39c8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b39cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b39ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b39d0: 0x0  nop
    ctx->pc = 0x2b39d0u;
    // NOP
    // 0x2b39d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b39d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b39d8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b39dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b39dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b39e0: 0x0  nop
    ctx->pc = 0x2b39e0u;
    // NOP
    // 0x2b39e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b39e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b39e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b39ec: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b39ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b39f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b39f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b39f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b39f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b39f8: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b39f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b39fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b39fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3a00: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3a04: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3a08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3a0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3a10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3a14: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b3a14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b3a18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3a1c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b3a20: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b3a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b3a24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b3a28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b3a2c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b3a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b3a30: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b3a34: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b3a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3a38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b3a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b3a3c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b3a3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b3a40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3a44: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b3a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b3a48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3a4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3a50: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b3a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3a54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b3a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3a58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3a5c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b3a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3a60: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3a60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3a64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3a68: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3A70u;
}
