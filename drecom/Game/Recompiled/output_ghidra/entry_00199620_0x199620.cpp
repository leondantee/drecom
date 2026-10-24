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

// Function: entry_00199620
// Address: 0x199620 - 0x1996a0
void entry_00199620_0x199620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199620_0x199620");
#endif

    switch (ctx->pc) {
        case 0x19962cu: goto label_19962c;
        default: break;
    }

    ctx->pc = 0x199620u;

    // 0x199620: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199624: 0xc05cd10  jal         func_173440
    ctx->pc = 0x199624u;
    SET_GPR_U32(ctx, 31, 0x19962Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199624u, 0x19962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19962Cu;
label_19962c:
    // 0x19962c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199630: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199634: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199638: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19963c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19963cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199640: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x199644: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199648: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19964c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199650: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199654: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199658: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19965c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199660: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199664: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x199668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19966c: 0x0  nop
    ctx->pc = 0x19966cu;
    // NOP
    // 0x199670: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199674: 0x0  nop
    ctx->pc = 0x199674u;
    // NOP
    // 0x199678: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x199678u;
    {
        const bool branch_taken_0x199678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199678) {
            ctx->pc = 0x1996A0u;
            return;
        }
    }
    ctx->pc = 0x199680u;
    // 0x199680: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199684: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x199684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199688: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x199688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x19968c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x199690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199694: 0x0  nop
    ctx->pc = 0x199694u;
    // NOP
    // 0x199698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19969c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x19969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x1996a0u;
}
