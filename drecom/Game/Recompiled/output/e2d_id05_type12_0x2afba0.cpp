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

// Function: e2d_id05_type12
// Address: 0x2afba0 - 0x2afca4
void e2d_id05_type12_0x2afba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type12_0x2afba0");
#endif

    switch (ctx->pc) {
        case 0x2afbe4u: goto label_2afbe4;
        default: break;
    }

    ctx->pc = 0x2afba0u;

    // 0x2afba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2afba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2afba4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2afba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2afba8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2afba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2afbac: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2afbb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2afbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afbb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2afbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afbb8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2afbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2afbbc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2afbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2afbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2afbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afbc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2afbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afbc8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2afbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2afbcc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2afbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2afbd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2afbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afbd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afbd8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2afbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2afbdc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AFBDCu;
    SET_GPR_U32(ctx, 31, 0x2AFBE4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AFBDCu, 0x2AFBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBE4u;
label_2afbe4:
    // 0x2afbe4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2afbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2afbe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2afbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afbec: 0x0  nop
    ctx->pc = 0x2afbecu;
    // NOP
    // 0x2afbf0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2afbf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2afbf4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2afbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2afbf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afbf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afbfc: 0x0  nop
    ctx->pc = 0x2afbfcu;
    // NOP
    // 0x2afc00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2afc00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2afc04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afc08: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2afc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2afc0c: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2afc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2afc10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afc14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afc18: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2afc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2afc1c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2afc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2afc20: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2afc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2afc24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afc28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afc2c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2afc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2afc30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2afc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2afc34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afc38: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2afc38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afc3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2afc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2afc40: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2afc40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2afc44: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2afc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2afc48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2afc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2afc4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2afc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afc50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2afc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2afc54: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2afc54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2afc58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2afc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2afc5c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2afc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2afc60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2afc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2afc64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2afc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2afc68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2afc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afc6c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2afc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2afc70: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2afc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2afc74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2afc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2afc78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2afc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2afc7c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2afc7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2afc80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2afc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2afc84: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2afc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2afc88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2afc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2afc8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afc90: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2afc90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afc94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2afc94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afc98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2afc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2afc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFCA4u;
}
