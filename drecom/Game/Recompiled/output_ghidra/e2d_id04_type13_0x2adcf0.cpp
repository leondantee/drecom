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

// Function: e2d_id04_type13
// Address: 0x2adcf0 - 0x2ade08
void e2d_id04_type13_0x2adcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type13_0x2adcf0");
#endif

    switch (ctx->pc) {
        case 0x2add64u: goto label_2add64;
        default: break;
    }

    ctx->pc = 0x2adcf0u;

    // 0x2adcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2adcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2adcf4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2adcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2adcf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2adcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2adcfc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2adcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2add00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2add00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2add04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add08: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2add08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2add0c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2add0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2add10: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2add10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2add14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2add14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2add18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add1c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2add1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2add20: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2add20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2add24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2add24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2add28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add2c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2add2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2add30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2add30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2add34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2add34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2add38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add3c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2add3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2add40: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2add40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2add44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2add44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2add48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add4c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2add4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2add50: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2add50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2add54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2add54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add58: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2add58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2add5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ADD5Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ADD5Cu, 0x2ADD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD64u;
label_2add64:
    // 0x2add64: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2add64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2add68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2add68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2add6c: 0x0  nop
    ctx->pc = 0x2add6cu;
    // NOP
    // 0x2add70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2add70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2add74: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2add74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2add78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2add78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add7c: 0x0  nop
    ctx->pc = 0x2add7cu;
    // NOP
    // 0x2add80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2add80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2add84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2add84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add88: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2add88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2add8c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2add8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2add90: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2add90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2add94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2add94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2add98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2add9c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2add9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2adda0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adda4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adda4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adda8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2addac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2addacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2addb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2addb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2addb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2addb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2addb8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2addb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2addbc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2addbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2addc0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2addc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2addc4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2addc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2addc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2addc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2addcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2addccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2addd0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2addd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2addd4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2addd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2addd8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2addd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2adddc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adde0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2adde0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2adde4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2adde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adde8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2adde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2addec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2addecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2addf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2addf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2addf4: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2addf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2addf8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2addf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2addfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2addfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ade00: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADE08u;
}
