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

// Function: entry_0023aec4
// Address: 0x23aec4 - 0x23af74
void entry_0023aec4_0x23aec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023aec4_0x23aec4");
#endif

    switch (ctx->pc) {
        case 0x23aee4u: goto label_23aee4;
        default: break;
    }

    ctx->pc = 0x23aec4u;

    // 0x23aec4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23aec8: 0x36061e00  ori         $a2, $s0, 0x1E00
    ctx->pc = 0x23aec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7680);
    // 0x23aecc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23aed0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23aed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23aed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23aed8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23aedc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23AEDCu;
    SET_GPR_U32(ctx, 31, 0x23AEE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23AEDCu, 0x23AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEE4u;
label_23aee4:
    // 0x23aee4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23aee4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23aee8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x23aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x23aeec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23aeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aef0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23aef4: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x23aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23aef8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23aefc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23af00: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x23af00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23af04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23af04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af08: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23af10: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23af14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23af14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23af18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23af18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23af1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23af1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af24: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23af24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23af28: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x23af28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x23af2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23af2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af30: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23af30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af34: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x23af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23af38: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23af38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23af3c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af40: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23af44: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x23af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x23af48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23af48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af4c: 0x0  nop
    ctx->pc = 0x23af4cu;
    // NOP
    // 0x23af50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23af50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23af54: 0x0  nop
    ctx->pc = 0x23af54u;
    // NOP
    // 0x23af58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23AF58u;
    {
        const bool branch_taken_0x23af58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23af58) {
            ctx->pc = 0x23AF74u;
            return;
        }
    }
    ctx->pc = 0x23AF60u;
    // 0x23af60: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x23af64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23af64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af68: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af6c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23af70: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23af70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x23af74u;
}
