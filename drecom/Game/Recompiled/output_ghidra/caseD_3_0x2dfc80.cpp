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

// Function: caseD_3
// Address: 0x2dfc80 - 0x2dfd08
void caseD_3_0x2dfc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2dfc80");
#endif

    switch (ctx->pc) {
        case 0x2dfcb8u: goto label_2dfcb8;
        default: break;
    }

    ctx->pc = 0x2dfc80u;

    // 0x2dfc80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfc84: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dfc88: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2dfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2dfc8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dfc90: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dfc94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfc98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dfc9c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2dfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2dfca0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dfca4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dfca8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfcac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dfcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dfcb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DFCB0u;
    SET_GPR_U32(ctx, 31, 0x2DFCB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFCB0u, 0x2DFCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCB8u;
label_2dfcb8:
    // 0x2dfcb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfcbc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfcc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dfcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfcc4: 0x0  nop
    ctx->pc = 0x2dfcc4u;
    // NOP
    // 0x2dfcc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfcc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfccc: 0x0  nop
    ctx->pc = 0x2dfcccu;
    // NOP
    // 0x2dfcd0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2DFCD0u;
    {
        const bool branch_taken_0x2dfcd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfcd0) {
            ctx->pc = 0x2DFD08u;
            return;
        }
    }
    ctx->pc = 0x2DFCD8u;
    // 0x2dfcd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfcdc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfce0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfce4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dfcec: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2dfcf0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfcf4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dfcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfcf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfcfc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfd00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfd00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dfd04: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x2dfd08u;
}
