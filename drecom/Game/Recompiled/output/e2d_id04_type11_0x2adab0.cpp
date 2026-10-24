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

// Function: e2d_id04_type11
// Address: 0x2adab0 - 0x2adbc8
void e2d_id04_type11_0x2adab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type11_0x2adab0");
#endif

    switch (ctx->pc) {
        case 0x2adb24u: goto label_2adb24;
        default: break;
    }

    ctx->pc = 0x2adab0u;

    // 0x2adab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2adab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2adab4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2adab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2adab8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2adab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2adabc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2adabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2adac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adac4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adac8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2adac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2adacc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2adaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2adad0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2adad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2adad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adad8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adadc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2adadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2adae0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2adae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2adae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adae8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adaec: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2adaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2adaf0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2adaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2adaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adaf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adafc: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2adafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2adb00: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2adb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2adb04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adb08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adb0c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2adb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2adb10: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2adb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2adb14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adb18: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2adb18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2adb1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ADB1Cu;
    SET_GPR_U32(ctx, 31, 0x2ADB24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ADB1Cu, 0x2ADB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB24u;
label_2adb24:
    // 0x2adb24: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2adb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2adb28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2adb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adb2c: 0x0  nop
    ctx->pc = 0x2adb2cu;
    // NOP
    // 0x2adb30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2adb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2adb34: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2adb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2adb38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adb3c: 0x0  nop
    ctx->pc = 0x2adb3cu;
    // NOP
    // 0x2adb40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2adb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2adb44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adb48: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2adb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2adb4c: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2adb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2adb50: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2adb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2adb54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adb54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adb58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adb5c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2adb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2adb60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adb64: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adb64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adb68: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adb68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2adb6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2adb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2adb70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adb74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2adb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adb78: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2adb78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2adb7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adb80: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adb80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adb84: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adb84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2adb88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2adb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2adb8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adb90: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2adb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2adb94: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2adb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2adb98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2adb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2adb9c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adba0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2adba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2adba4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2adba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adba8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2adba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2adbac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2adbacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adbb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adbb4: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2adbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2adbb8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2adbb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adbbc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2adbbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2adbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADBC8u;
}
