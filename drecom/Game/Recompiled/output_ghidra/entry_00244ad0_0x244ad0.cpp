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

// Function: entry_00244ad0
// Address: 0x244ad0 - 0x244bdc
void entry_00244ad0_0x244ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244ad0_0x244ad0");
#endif

    switch (ctx->pc) {
        case 0x244aecu: goto label_244aec;
        case 0x244b98u: goto label_244b98;
        case 0x244bacu: goto label_244bac;
        default: break;
    }

    ctx->pc = 0x244ad0u;

    // 0x244ad0: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x244ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x244ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244ae0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x244ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x244ae4: 0xc067654  jal         func_19D950
    ctx->pc = 0x244AE4u;
    SET_GPR_U32(ctx, 31, 0x244AECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x244AE4u, 0x244AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AECu;
label_244aec:
    // 0x244aec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x244aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x244af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x244af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244af4: 0x0  nop
    ctx->pc = 0x244af4u;
    // NOP
    // 0x244af8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x244af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x244afc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x244b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b04: 0x0  nop
    ctx->pc = 0x244b04u;
    // NOP
    // 0x244b08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x244b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244b0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b14: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x244b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x244b18: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x244b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244b1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x244b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b2c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x244b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x244b30: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x244b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244b34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x244b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b44: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x244b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x244b48: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x244b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x244b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b5c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x244b60: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244b64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b74: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x244b78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244b84: 0x3406be02  ori         $a2, $zero, 0xBE02
    ctx->pc = 0x244b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48642);
    // 0x244b88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244b8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244b90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244B90u;
    SET_GPR_U32(ctx, 31, 0x244B98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244B90u, 0x244B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B98u;
label_244b98:
    // 0x244b98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x244b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x244b9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244ba0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x244ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x244ba4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244BA4u;
    SET_GPR_U32(ctx, 31, 0x244BACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244BA4u, 0x244BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BACu;
label_244bac:
    // 0x244bac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244bb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244bb4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x244BB4u;
    {
        const bool branch_taken_0x244bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244bb4) {
            ctx->pc = 0x244BDCu;
            return;
        }
    }
    ctx->pc = 0x244BBCu;
    // 0x244bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244bc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bc4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x244bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x244bc8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x244bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x244bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244bd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244bd8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x244bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x244bdcu;
}
