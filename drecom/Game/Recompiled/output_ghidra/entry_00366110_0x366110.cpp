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

// Function: entry_00366110
// Address: 0x366110 - 0x36618c
void entry_00366110_0x366110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366110_0x366110");
#endif

    switch (ctx->pc) {
        case 0x366130u: goto label_366130;
        case 0x366140u: goto label_366140;
        case 0x366158u: goto label_366158;
        default: break;
    }

    ctx->pc = 0x366110u;

    // 0x366110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366114: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366118: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x366118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x36611c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366120: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366124: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366128: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366128u;
    SET_GPR_U32(ctx, 31, 0x366130u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x366130u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x366130u) { return; }
    ctx->pc = 0x366130u;
label_366130:
    // 0x366130: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366138: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366138u;
    SET_GPR_U32(ctx, 31, 0x366140u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366138u, 0x366140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366140u;
label_366140:
    // 0x366140: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366144: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366148: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36614c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36614cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366150: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x366150u;
    SET_GPR_U32(ctx, 31, 0x366158u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x366150u, 0x366158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366158u;
label_366158:
    // 0x366158: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36615c: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x36615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366160: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x366160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366168: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x36616c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366170: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x366170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366174: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x366174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36617c: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x36617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x366180: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366184: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366184u;
    SET_GPR_U32(ctx, 31, 0x36618Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366184u, 0x36618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36618Cu;
}
