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

// Function: e2d_id04_type15
// Address: 0x2ade10 - 0x2adf28
void e2d_id04_type15_0x2ade10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type15_0x2ade10");
#endif

    switch (ctx->pc) {
        case 0x2ade84u: goto label_2ade84;
        default: break;
    }

    ctx->pc = 0x2ade10u;

    // 0x2ade10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ade10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ade14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ade14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ade18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ade18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ade1c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ade1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ade20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ade20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ade24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ade24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ade28: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ade28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ade2c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ade2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ade30: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ade30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ade34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ade34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ade38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ade38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ade3c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ade3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ade40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ade40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ade44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ade44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ade48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ade48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ade4c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ade4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ade50: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2ade50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2ade54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ade54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ade58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ade58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ade5c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ade5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ade60: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ade60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ade64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ade64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ade68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ade68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ade6c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ade6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ade70: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ade70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ade74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ade78: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2ade78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ade7c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ADE7Cu;
    SET_GPR_U32(ctx, 31, 0x2ADE84u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ADE7Cu, 0x2ADE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE84u;
label_2ade84:
    // 0x2ade84: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ade84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ade88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ade88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ade8c: 0x0  nop
    ctx->pc = 0x2ade8cu;
    // NOP
    // 0x2ade90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ade90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ade94: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ade94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ade98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ade98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ade9c: 0x0  nop
    ctx->pc = 0x2ade9cu;
    // NOP
    // 0x2adea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2adea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2adea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adea8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2adea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2adeac: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2adeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2adeb0: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2adeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2adeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adeb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adebc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2adebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2adec0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adec4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adec4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adec8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2adecc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2adeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aded0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aded4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aded4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aded8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aded8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2adedc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adee0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adee4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2adee8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2adee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2adeec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adef0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2adef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2adef4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2adef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2adef8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2adef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2adefc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adf00: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2adf00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2adf04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2adf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adf08: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2adf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2adf0c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2adf0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adf10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adf14: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2adf14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2adf18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2adf18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adf1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2adf20: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADF28u;
}
