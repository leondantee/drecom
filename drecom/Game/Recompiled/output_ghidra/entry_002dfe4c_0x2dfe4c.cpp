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

// Function: entry_002dfe4c
// Address: 0x2dfe4c - 0x2dfeac
void entry_002dfe4c_0x2dfe4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfe4c_0x2dfe4c");
#endif

    switch (ctx->pc) {
        case 0x2dfe5cu: goto label_2dfe5c;
        default: break;
    }

    ctx->pc = 0x2dfe4cu;

    // 0x2dfe4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfe50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dfe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dfe54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DFE54u;
    SET_GPR_U32(ctx, 31, 0x2DFE5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFE54u, 0x2DFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE5Cu;
label_2dfe5c:
    // 0x2dfe5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfe60: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfe64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dfe64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfe68: 0x0  nop
    ctx->pc = 0x2dfe68u;
    // NOP
    // 0x2dfe6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfe6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfe70: 0x0  nop
    ctx->pc = 0x2dfe70u;
    // NOP
    // 0x2dfe74: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2DFE74u;
    {
        const bool branch_taken_0x2dfe74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfe74) {
            ctx->pc = 0x2DFEACu;
            return;
        }
    }
    ctx->pc = 0x2DFE7Cu;
    // 0x2dfe7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfe80: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfe84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfe88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfe8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfe8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dfe90: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2dfe94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfe98: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dfe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfe9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfea0: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfea4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dfea8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x2dfeacu;
}
