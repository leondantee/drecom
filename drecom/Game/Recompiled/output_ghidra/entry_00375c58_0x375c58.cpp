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

// Function: entry_00375c58
// Address: 0x375c58 - 0x375ce8
void entry_00375c58_0x375c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375c58_0x375c58");
#endif

    switch (ctx->pc) {
        case 0x375cbcu: goto label_375cbc;
        case 0x375cc4u: goto label_375cc4;
        default: break;
    }

    ctx->pc = 0x375c58u;

    // 0x375c58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c5c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x375c60: 0x146000ae  bnez        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x375C60u;
    {
        const bool branch_taken_0x375c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x375c60) {
            ctx->pc = 0x375F1Cu;
            return;
        }
    }
    ctx->pc = 0x375C68u;
    // 0x375c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c6c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x375c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375c70: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x375c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x375c74: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x375c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x375c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x375c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375c7c: 0x0  nop
    ctx->pc = 0x375c7cu;
    // NOP
    // 0x375c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375c84: 0x0  nop
    ctx->pc = 0x375c84u;
    // NOP
    // 0x375c88: 0x450000a4  bc1f        . + 4 + (0xA4 << 2)
    ctx->pc = 0x375C88u;
    {
        const bool branch_taken_0x375c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375c88) {
            ctx->pc = 0x375F1Cu;
            return;
        }
    }
    ctx->pc = 0x375C90u;
    // 0x375c90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375c94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c98: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375c9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ca0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ca4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375ca8: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x375ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x375cac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375cb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375cb4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375CB4u;
    SET_GPR_U32(ctx, 31, 0x375CBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375CB4u, 0x375CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375CBCu;
label_375cbc:
    // 0x375cbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375CBCu;
    SET_GPR_U32(ctx, 31, 0x375CC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375CBCu, 0x375CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375CC4u;
label_375cc4:
    // 0x375cc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x375cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x375cc8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x375cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x375ccc: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x375cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x375cd0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x375cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375cd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x375cd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x375cd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375cdc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x375cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x375ce0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x375CE0u;
    {
        const bool branch_taken_0x375ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375ce0) {
            ctx->pc = 0x375F1Cu;
            return;
        }
    }
    ctx->pc = 0x375CE8u;
}
