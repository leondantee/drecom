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

// Function: entry_00232b28
// Address: 0x232b28 - 0x232b88
void entry_00232b28_0x232b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232b28_0x232b28");
#endif

    switch (ctx->pc) {
        case 0x232b50u: goto label_232b50;
        default: break;
    }

    ctx->pc = 0x232b28u;

    // 0x232b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b2c: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x232b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232b30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b34: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x232b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x232b38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b40: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x232b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x232b44: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x232b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x232b48: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x232B48u;
    SET_GPR_U32(ctx, 31, 0x232B50u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x232B48u, 0x232B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B50u;
label_232b50:
    // 0x232b50: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x232b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x232b54: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x232b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x232b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232b5c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232b60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x232b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232b64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b68: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x232b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232b70: 0x0  nop
    ctx->pc = 0x232b70u;
    // NOP
    // 0x232b74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x232B74u;
    {
        const bool branch_taken_0x232b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232b74) {
            ctx->pc = 0x232B88u;
            return;
        }
    }
    ctx->pc = 0x232B7Cu;
    // 0x232b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232b80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b84: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x232b88u;
}
