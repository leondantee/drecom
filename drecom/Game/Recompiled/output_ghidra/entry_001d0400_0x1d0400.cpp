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

// Function: entry_001d0400
// Address: 0x1d0400 - 0x1d0480
void entry_001d0400_0x1d0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0400_0x1d0400");
#endif

    switch (ctx->pc) {
        case 0x1d0418u: goto label_1d0418;
        default: break;
    }

    ctx->pc = 0x1d0400u;

    // 0x1d0400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0404: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0408: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1d0408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1d040c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1d040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1d0410: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1D0410u;
    SET_GPR_U32(ctx, 31, 0x1D0418u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1D0410u, 0x1D0418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0418u;
label_1d0418:
    // 0x1d0418: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1d041c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0420: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0424: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0428: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d042c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d042cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d0430: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d0434: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0438: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d043c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0440: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0444: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d0444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d0448: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1d044c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0450: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d0450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0454: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0458: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d045c: 0x0  nop
    ctx->pc = 0x1d045cu;
    // NOP
    // 0x1d0460: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0460u;
    {
        const bool branch_taken_0x1d0460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0460) {
            ctx->pc = 0x1D0480u;
            return;
        }
    }
    ctx->pc = 0x1D0468u;
    // 0x1d0468: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d046c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0470: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d0474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d047c: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1d047cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1d0480u;
}
