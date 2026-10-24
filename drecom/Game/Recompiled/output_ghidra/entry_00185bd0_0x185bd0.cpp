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

// Function: entry_00185bd0
// Address: 0x185bd0 - 0x185d08
void entry_00185bd0_0x185bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185bd0_0x185bd0");
#endif

    switch (ctx->pc) {
        case 0x185c24u: goto label_185c24;
        case 0x185c38u: goto label_185c38;
        case 0x185c54u: goto label_185c54;
        default: break;
    }

    ctx->pc = 0x185bd0u;

    // 0x185bd0: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x185bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x185bd4: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x185bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x185bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x185bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185bdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x185bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185be0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x185be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x185be4: 0x24426bd0  addiu       $v0, $v0, 0x6BD0
    ctx->pc = 0x185be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
    // 0x185be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185bec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185bf0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185bf4: 0x8c22033c  lw          $v0, 0x33C($at)
    ctx->pc = 0x185bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48033Cu));
    // 0x185bf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x185bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x185bfc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x185bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x185c00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x185c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185c08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x185c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185c0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x185c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x185c10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c14: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185c18: 0x244502f0  addiu       $a1, $v0, 0x2F0
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x185c1c: 0xc0675b8  jal         func_19D6E0
    ctx->pc = 0x185C1Cu;
    SET_GPR_U32(ctx, 31, 0x185C24u);
    ctx->pc = 0x19D6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6E0u, 0x185C1Cu, 0x185C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C24u;
label_185c24:
    // 0x185c24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c28: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x185c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c2c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x185c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185c30: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x185C30u;
    SET_GPR_U32(ctx, 31, 0x185C38u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x185C38u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185C38u) { return; }
    ctx->pc = 0x185C38u;
label_185c38:
    // 0x185c38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185c3c: 0x244402c0  addiu       $a0, $v0, 0x2C0
    ctx->pc = 0x185c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x185c40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185c44: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x185c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x185c48: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x185c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185c4c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x185C4Cu;
    SET_GPR_U32(ctx, 31, 0x185C54u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x185C4Cu, 0x185C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C54u;
label_185c54:
    // 0x185c54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c58: 0xc42102d4  lwc1        $f1, 0x2D4($at)
    ctx->pc = 0x185c58u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185c5c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c60: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185c60u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185c68: 0x0  nop
    ctx->pc = 0x185c68u;
    // NOP
    // 0x185c6c: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x185C6Cu;
    {
        const bool branch_taken_0x185c6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185c6c) {
            ctx->pc = 0x185D08u;
            return;
        }
    }
    ctx->pc = 0x185C74u;
    // 0x185c74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c78: 0xc42102d4  lwc1        $f1, 0x2D4($at)
    ctx->pc = 0x185c78u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185c7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185c80: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185c80u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185c84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185c88: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x185c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x185c8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x185c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x185c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185c94: 0x0  nop
    ctx->pc = 0x185c94u;
    // NOP
    // 0x185c98: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185c9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ca0: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x185ca0u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185ca4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x185ca8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cac: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x185cb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cb4: 0xc42202c4  lwc1        $f2, 0x2C4($at)
    ctx->pc = 0x185cb4u;
    { uint32_t bits = FAST_READ32(0x4802C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185cb8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cbc: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185cbcu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185cc0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cc8: 0x0  nop
    ctx->pc = 0x185cc8u;
    // NOP
    // 0x185ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185cd0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x185cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185cd4: 0x0  nop
    ctx->pc = 0x185cd4u;
    // NOP
    // 0x185cd8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x185CD8u;
    {
        const bool branch_taken_0x185cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185cd8) {
            ctx->pc = 0x185D8Cu;
            return;
        }
    }
    ctx->pc = 0x185CE0u;
    // 0x185ce0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ce4: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185ce4u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ce8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cf0: 0x0  nop
    ctx->pc = 0x185cf0u;
    // NOP
    // 0x185cf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185cf8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185cfc: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x185cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x185d00: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185D00u;
    {
        const bool branch_taken_0x185d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d00) {
            ctx->pc = 0x185D8Cu;
            return;
        }
    }
    ctx->pc = 0x185D08u;
}
