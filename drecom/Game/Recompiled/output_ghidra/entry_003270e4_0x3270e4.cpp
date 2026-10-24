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

// Function: entry_003270e4
// Address: 0x3270e4 - 0x3271b0
void entry_003270e4_0x3270e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003270e4_0x3270e4");
#endif

    switch (ctx->pc) {
        case 0x32713cu: goto label_32713c;
        case 0x32715cu: goto label_32715c;
        default: break;
    }

    ctx->pc = 0x3270e4u;

    // 0x3270e4: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x3270e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3270e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3270e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3270ec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3270ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3270f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3270f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3270f4: 0x0  nop
    ctx->pc = 0x3270f4u;
    // NOP
    // 0x3270f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3270f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3270fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3270fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327100: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327108: 0xe4400284  swc1        $f0, 0x284($v0)
    ctx->pc = 0x327108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 644), bits); }
    // 0x32710c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x32710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327110: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327118: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x327118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32711c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32711cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327120: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327128: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x327128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32712c: 0x24a501c0  addiu       $a1, $a1, 0x1C0
    ctx->pc = 0x32712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x327130: 0x244601c0  addiu       $a2, $v0, 0x1C0
    ctx->pc = 0x327130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x327134: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x327134u;
    SET_GPR_U32(ctx, 31, 0x32713Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x327134u, 0x32713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32713Cu;
label_32713c:
    // 0x32713c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x32713cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327140: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327148: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x327148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32714c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327150: 0xc44c0284  lwc1        $f12, 0x284($v0)
    ctx->pc = 0x327150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327154: 0xc040c60  jal         func_103180
    ctx->pc = 0x327154u;
    SET_GPR_U32(ctx, 31, 0x32715Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x32715Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32715Cu) { return; }
    ctx->pc = 0x32715Cu;
label_32715c:
    // 0x32715c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x32715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327160: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x327160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327164: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32716c: 0xe4600244  swc1        $f0, 0x244($v1)
    ctx->pc = 0x32716cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 580), bits); }
    // 0x327170: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x327170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327174: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x327174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32717c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327180: 0xe4600254  swc1        $f0, 0x254($v1)
    ctx->pc = 0x327180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 596), bits); }
    // 0x327184: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x327184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327188: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x327188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x32718c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327194: 0xe4600264  swc1        $f0, 0x264($v1)
    ctx->pc = 0x327194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 612), bits); }
    // 0x327198: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x327198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32719c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x32719cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3271a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3271a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3271a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3271a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3271a8: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x3271a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x3271ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3271acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x3271b0u;
}
