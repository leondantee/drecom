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

// Function: entry_0030cb20
// Address: 0x30cb20 - 0x30cb78
void entry_0030cb20_0x30cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030cb20_0x30cb20");
#endif

    switch (ctx->pc) {
        case 0x30cb70u: goto label_30cb70;
        default: break;
    }

    ctx->pc = 0x30cb20u;

    // 0x30cb20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb24: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x30cb24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x30cb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30cb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cb2c: 0x0  nop
    ctx->pc = 0x30cb2cu;
    // NOP
    // 0x30cb30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30cb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30cb34: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x30cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x30cb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30cb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cb3c: 0x0  nop
    ctx->pc = 0x30cb3cu;
    // NOP
    // 0x30cb40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30cb40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cb44: 0x0  nop
    ctx->pc = 0x30cb44u;
    // NOP
    // 0x30cb48: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x30CB48u;
    {
        const bool branch_taken_0x30cb48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cb48) {
            ctx->pc = 0x30CB78u;
            return;
        }
    }
    ctx->pc = 0x30CB50u;
    // 0x30cb50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cb58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30cb5c: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x30cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x30cb60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30cb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cb64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30cb68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30CB68u;
    SET_GPR_U32(ctx, 31, 0x30CB70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30CB68u, 0x30CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB70u;
label_30cb70:
    // 0x30cb70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30CB70u;
    {
        const bool branch_taken_0x30cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cb70) {
            ctx->pc = 0x30CB98u;
            return;
        }
    }
    ctx->pc = 0x30CB78u;
}
