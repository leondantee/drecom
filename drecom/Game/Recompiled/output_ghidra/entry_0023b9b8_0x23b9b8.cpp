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

// Function: entry_0023b9b8
// Address: 0x23b9b8 - 0x23ba60
void entry_0023b9b8_0x23b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b9b8_0x23b9b8");
#endif

    switch (ctx->pc) {
        case 0x23b9d8u: goto label_23b9d8;
        default: break;
    }

    ctx->pc = 0x23b9b8u;

    // 0x23b9b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9bc: 0x36061e00  ori         $a2, $s0, 0x1E00
    ctx->pc = 0x23b9bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7680);
    // 0x23b9c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23b9c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b9cc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23b9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23b9d0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23B9D0u;
    SET_GPR_U32(ctx, 31, 0x23B9D8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23B9D0u, 0x23B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9D8u;
label_23b9d8:
    // 0x23b9d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b9dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b9e4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23b9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23b9e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b9e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b9ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b9f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b9f8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23b9fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23ba00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba0c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23ba10: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23ba14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23ba18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba24: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23ba24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23ba28: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba2c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ba30: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x23ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x23ba34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba38: 0x0  nop
    ctx->pc = 0x23ba38u;
    // NOP
    // 0x23ba3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ba3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ba40: 0x0  nop
    ctx->pc = 0x23ba40u;
    // NOP
    // 0x23ba44: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23BA44u;
    {
        const bool branch_taken_0x23ba44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ba44) {
            ctx->pc = 0x23BA60u;
            return;
        }
    }
    ctx->pc = 0x23BA4Cu;
    // 0x23ba4c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x23ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x23ba50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba54: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba5c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23ba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x23ba60u;
}
