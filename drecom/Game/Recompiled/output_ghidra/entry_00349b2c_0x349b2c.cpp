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

// Function: entry_00349b2c
// Address: 0x349b2c - 0x349b7c
void entry_00349b2c_0x349b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349b2c_0x349b2c");
#endif

    ctx->pc = 0x349b2cu;

    // 0x349b2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349b34: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x349b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b3c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349b44: 0x0  nop
    ctx->pc = 0x349b44u;
    // NOP
    // 0x349b48: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x349B48u;
    {
        const bool branch_taken_0x349b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349b48) {
            ctx->pc = 0x349B7Cu;
            return;
        }
    }
    ctx->pc = 0x349B50u;
    // 0x349b50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x349b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x349b54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b58: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349b58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x349b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b64: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x349b68: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x349b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x349b6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349b70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349b74: 0xc0965d0  jal         func_259740
    ctx->pc = 0x349B74u;
    SET_GPR_U32(ctx, 31, 0x349B7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349B74u, 0x349B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B7Cu;
}
