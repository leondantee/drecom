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

// Function: entry_0015ec48
// Address: 0x15ec48 - 0x15ecac
void entry_0015ec48_0x15ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec48_0x15ec48");
#endif

    switch (ctx->pc) {
        case 0x15ec64u: goto label_15ec64;
        case 0x15ec78u: goto label_15ec78;
        default: break;
    }

    ctx->pc = 0x15ec48u;

    // 0x15ec48: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x15ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x15ec4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ec50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ec54: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x15ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ec58: 0xc44d0018  lwc1        $f13, 0x18($v0)
    ctx->pc = 0x15ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ec5c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15EC5Cu;
    SET_GPR_U32(ctx, 31, 0x15EC64u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15EC5Cu, 0x15EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC64u;
label_15ec64:
    // 0x15ec64: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x15ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15ec68: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ec6c: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x15ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ec70: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15EC70u;
    SET_GPR_U32(ctx, 31, 0x15EC78u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15EC70u, 0x15EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC78u;
label_15ec78:
    // 0x15ec78: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15ec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15ec7c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ec80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ec80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ec84: 0x0  nop
    ctx->pc = 0x15ec84u;
    // NOP
    // 0x15ec88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15ec88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ec8c: 0x0  nop
    ctx->pc = 0x15ec8cu;
    // NOP
    // 0x15ec90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15EC90u;
    {
        const bool branch_taken_0x15ec90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ec90) {
            ctx->pc = 0x15ECACu;
            return;
        }
    }
    ctx->pc = 0x15EC98u;
    // 0x15ec98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15ec9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ec9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eca0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15eca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15eca8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15eca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x15ecacu;
}
