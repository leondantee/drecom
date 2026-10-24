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

// Function: entry_00238b6c
// Address: 0x238b6c - 0x238c70
void entry_00238b6c_0x238b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238b6c_0x238b6c");
#endif

    switch (ctx->pc) {
        case 0x238b98u: goto label_238b98;
        case 0x238bc4u: goto label_238bc4;
        case 0x238c24u: goto label_238c24;
        default: break;
    }

    ctx->pc = 0x238b6cu;

    // 0x238b6c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x238b70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x238b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238b74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x238b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x238b78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b80: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x238b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x238b84: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x238b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238b88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x238b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x238b8c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x238b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x238b90: 0xc05c848  jal         func_172120
    ctx->pc = 0x238B90u;
    SET_GPR_U32(ctx, 31, 0x238B98u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x238B90u, 0x238B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B98u;
label_238b98:
    // 0x238b98: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x238b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x238b9c: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x238b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
    // 0x238ba0: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x238ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x238ba4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x238ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x238ba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238bac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238bb0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x238bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x238bb4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x238bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238bb8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x238bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x238bbc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x238BBCu;
    SET_GPR_U32(ctx, 31, 0x238BC4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x238BBCu, 0x238BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BC4u;
label_238bc4:
    // 0x238bc4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x238BC4u;
    {
        const bool branch_taken_0x238bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238bc4) {
            ctx->pc = 0x238C70u;
            return;
        }
    }
    ctx->pc = 0x238BCCu;
    // 0x238bcc: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x238bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238bd0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x238bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x238bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238bd8: 0x0  nop
    ctx->pc = 0x238bd8u;
    // NOP
    // 0x238bdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238be0: 0x0  nop
    ctx->pc = 0x238be0u;
    // NOP
    // 0x238be4: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x238BE4u;
    {
        const bool branch_taken_0x238be4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238be4) {
            ctx->pc = 0x238C70u;
            return;
        }
    }
    ctx->pc = 0x238BECu;
    // 0x238bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238bf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238bf4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x238bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238bf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x238bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238bfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c00: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x238c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x238c04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c08: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x238c08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238c0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c10: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x238c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238c14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x238c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x238c1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x238C1Cu;
    SET_GPR_U32(ctx, 31, 0x238C24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x238C1Cu, 0x238C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C24u;
label_238c24:
    // 0x238c24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x238c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238c28: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x238c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x238c2c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x238c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x238c30: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x238c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x238c34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x238c34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x238c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c3c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x238c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x238c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238c44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c48: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x238c48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x238c4c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x238c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238c54: 0x0  nop
    ctx->pc = 0x238c54u;
    // NOP
    // 0x238c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238c5c: 0x0  nop
    ctx->pc = 0x238c5cu;
    // NOP
    // 0x238c60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x238C60u;
    {
        const bool branch_taken_0x238c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238c60) {
            ctx->pc = 0x238C70u;
            return;
        }
    }
    ctx->pc = 0x238C68u;
    // 0x238c68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c6c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x238c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x238c70u;
}
