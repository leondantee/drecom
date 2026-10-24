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

// Function: entry_001d05fc
// Address: 0x1d05fc - 0x1d067c
void entry_001d05fc_0x1d05fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d05fc_0x1d05fc");
#endif

    switch (ctx->pc) {
        case 0x1d0614u: goto label_1d0614;
        default: break;
    }

    ctx->pc = 0x1d05fcu;

    // 0x1d05fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0600: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0604: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1d0604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1d0608: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1d0608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1d060c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1D060Cu;
    SET_GPR_U32(ctx, 31, 0x1D0614u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1D060Cu, 0x1D0614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0614u;
label_1d0614:
    // 0x1d0614: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1d0618: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d061c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0624: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d062c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d062cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d0630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0634: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0638: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d063c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0640: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d0640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d0644: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1d0648: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d064c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0650: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0658: 0x0  nop
    ctx->pc = 0x1d0658u;
    // NOP
    // 0x1d065c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D065Cu;
    {
        const bool branch_taken_0x1d065c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d065c) {
            ctx->pc = 0x1D067Cu;
            return;
        }
    }
    ctx->pc = 0x1D0664u;
    // 0x1d0664: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d066c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d066cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d0670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0678: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1d0678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1d067cu;
}
