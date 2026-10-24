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

// Function: entry_0025ad98
// Address: 0x25ad98 - 0x25ae94
void entry_0025ad98_0x25ad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ad98_0x25ad98");
#endif

    switch (ctx->pc) {
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae5cu: goto label_25ae5c;
        default: break;
    }

    ctx->pc = 0x25ad98u;

    // 0x25ad98: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x25ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x25ad9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ad9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ada0: 0x0  nop
    ctx->pc = 0x25ada0u;
    // NOP
    // 0x25ada4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25ada4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25ada8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25ada8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25adac: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adb0: 0xe46009d0  swc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25adb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2512), bits); }
    // 0x25adb4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adb8: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x25adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x25adbc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25adbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25adc0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adc4: 0x24630190  addiu       $v1, $v1, 0x190
    ctx->pc = 0x25adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x25adc8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25adcc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25add0: 0x8c6305f0  lw          $v1, 0x5F0($v1)
    ctx->pc = 0x25add0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1520)));
    // 0x25add4: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x25ADD4u;
    {
        const bool branch_taken_0x25add4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25add4) {
            ctx->pc = 0x25B100u;
            return;
        }
    }
    ctx->pc = 0x25ADDCu;
    // 0x25addc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ade0: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x25ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25ade4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25ade4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ade8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x25ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25adec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25adecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25adf0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adf4: 0xc44009d0  lwc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25adf8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25adf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25adfc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae00: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x25ae04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25ae08: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae0c: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25ae0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25ae10: 0xa7a20038  sh          $v0, 0x38($sp)
    ctx->pc = 0x25ae10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ae14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ae18: 0xa7a2003a  sh          $v0, 0x3A($sp)
    ctx->pc = 0x25ae18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ae1c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae20: 0x8c4205f0  lw          $v0, 0x5F0($v0)
    ctx->pc = 0x25ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
    // 0x25ae24: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x25ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x25ae28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae2c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x25ae2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x25ae30: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x25ae30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x25ae34: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ae3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ae40: 0x244605fc  addiu       $a2, $v0, 0x5FC
    ctx->pc = 0x25ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1532));
    // 0x25ae44: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25AE44u;
    SET_GPR_U32(ctx, 31, 0x25AE4Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25AE44u, 0x25AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE4Cu;
label_25ae4c:
    // 0x25ae4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25ae50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ae54: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25AE54u;
    SET_GPR_U32(ctx, 31, 0x25AE5Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25AE5Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AE5Cu) { return; }
    ctx->pc = 0x25AE5Cu;
label_25ae5c:
    // 0x25ae5c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae60: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25ae60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25ae64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ae68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ae6c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25AE6Cu;
    {
        const bool branch_taken_0x25ae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ae6c) {
            ctx->pc = 0x25AE94u;
            return;
        }
    }
    ctx->pc = 0x25AE74u;
    // 0x25ae74: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae78: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae80: 0x248402e0  addiu       $a0, $a0, 0x2E0
    ctx->pc = 0x25ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x25ae84: 0x246502e0  addiu       $a1, $v1, 0x2E0
    ctx->pc = 0x25ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x25ae88: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x25ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25ae8c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x25AE8Cu;
    SET_GPR_U32(ctx, 31, 0x25AE94u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x25AE8Cu, 0x25AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE94u;
}
