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

// Function: e2d_id05_type0d
// Address: 0x2af910 - 0x2afa1c
void e2d_id05_type0d_0x2af910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type0d_0x2af910");
#endif

    switch (ctx->pc) {
        case 0x2af964u: goto label_2af964;
        default: break;
    }

    ctx->pc = 0x2af910u;

    // 0x2af910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af914: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2af914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2af918: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2af918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2af91c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af924: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af928: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2af928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2af92c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af938: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2af938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2af93c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af948: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2af948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2af94c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2af94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2af950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af958: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2af958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2af95c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF95Cu;
    SET_GPR_U32(ctx, 31, 0x2AF964u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF95Cu, 0x2AF964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF964u;
label_2af964:
    // 0x2af964: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2af964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2af968: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af96c: 0x0  nop
    ctx->pc = 0x2af96cu;
    // NOP
    // 0x2af970: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af974: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2af974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2af978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af97c: 0x0  nop
    ctx->pc = 0x2af97cu;
    // NOP
    // 0x2af980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af988: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af98c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af990: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2af990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2af994: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2af994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2af998: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2af998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af99c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af9a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2af9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af9a4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2af9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2af9a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af9ac: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2af9acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2af9b0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2af9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2af9b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2af9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af9b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af9bc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2af9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2af9c0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2af9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2af9c4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2af9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2af9c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af9cc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2af9ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2af9d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2af9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af9d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2af9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2af9d8: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2af9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2af9dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2af9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af9e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af9e4: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af9e8: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2af9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2af9ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af9f4: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2af9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2af9f8: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2af9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2af9fc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2af9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2afa00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afa00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afa04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afa08: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2afa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2afa0c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2afa0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afa10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2afa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2afa14: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFA1Cu;
}
