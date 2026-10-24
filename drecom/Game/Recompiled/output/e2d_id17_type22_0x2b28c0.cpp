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

// Function: e2d_id17_type22
// Address: 0x2b28c0 - 0x2b2a1c
void e2d_id17_type22_0x2b28c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type22_0x2b28c0");
#endif

    switch (ctx->pc) {
        case 0x2b2964u: goto label_2b2964;
        default: break;
    }

    ctx->pc = 0x2b28c0u;

    // 0x2b28c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b28c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b28c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b28c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b28c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b28cc: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2b28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2b28d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b28d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b28d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b28d8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b28d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b28dc: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2b28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2b28e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b28e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b28e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b28e8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b28e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b28ec: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2b28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2b28f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b28f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b28f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b28f8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b28f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b28fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b2900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2908: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b2908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b290c: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2b290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2b2910: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2b2910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2b2914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2918: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b291c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b2920: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2b2920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2b2924: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2b2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2b2928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b292c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2930: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2b2930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2b2934: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2b2934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2b2938: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2b2938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2b293c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b293cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2940: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2944: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b2944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b2948: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2b2948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2b294c: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2b294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2b2950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2958: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b2958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b295c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B295Cu;
    SET_GPR_U32(ctx, 31, 0x2B2964u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B295Cu, 0x2B2964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2964u;
label_2b2964:
    // 0x2b2964: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b2964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b2968: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b2968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b296c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b296cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2970: 0x0  nop
    ctx->pc = 0x2b2970u;
    // NOP
    // 0x2b2974: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2978: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2b2978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x2b297c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2b297cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2b2980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2984: 0x0  nop
    ctx->pc = 0x2b2984u;
    // NOP
    // 0x2b2988: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b298c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2990: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b2990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b2994: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2b2994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2b2998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b299c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b29a0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b29a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b29a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b29a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b29a8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b29ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b29acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b29b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b29b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b29b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b29b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b29bc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b29c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b29c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b29c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b29c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b29c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b29c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b29cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b29d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b29d4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b29d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b29d8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b29dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b29e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b29e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b29e4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b29e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b29e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b29e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b29ec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b29f0: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x2b29f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2b29f4: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x2b29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2b29f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b29fc: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b2a00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b2a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2a04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2a08: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b2a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2a0c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2a0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2a14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A1Cu;
}
