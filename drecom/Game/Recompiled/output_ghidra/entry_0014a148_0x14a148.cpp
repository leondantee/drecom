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

// Function: entry_0014a148
// Address: 0x14a148 - 0x14a1e8
void entry_0014a148_0x14a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a148_0x14a148");
#endif

    switch (ctx->pc) {
        case 0x14a1b0u: goto label_14a1b0;
        default: break;
    }

    ctx->pc = 0x14a148u;

    // 0x14a148: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a14c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a150: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a154: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a15c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14a160: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a164: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a168: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a16c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a174: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14a178: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a17c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a184: 0x0  nop
    ctx->pc = 0x14a184u;
    // NOP
    // 0x14a188: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14a188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a18c: 0x0  nop
    ctx->pc = 0x14a18cu;
    // NOP
    // 0x14a190: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x14A190u;
    {
        const bool branch_taken_0x14a190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a190) {
            ctx->pc = 0x14A1E8u;
            return;
        }
    }
    ctx->pc = 0x14A198u;
    // 0x14a198: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a19c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a1a0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14a1a4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14a1a8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14A1A8u;
    SET_GPR_U32(ctx, 31, 0x14A1B0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14A1A8u, 0x14A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1B0u;
label_14a1b0:
    // 0x14a1b0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14a1b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a1b8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a1bc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a1c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14a1c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a1c4: 0x0  nop
    ctx->pc = 0x14a1c4u;
    // NOP
    // 0x14a1c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x14A1C8u;
    {
        const bool branch_taken_0x14a1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a1c8) {
            ctx->pc = 0x14A1E8u;
            return;
        }
    }
    ctx->pc = 0x14A1D0u;
    // 0x14a1d0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a1d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a1d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14a1dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a1e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a1e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x14a1e8u;
}
