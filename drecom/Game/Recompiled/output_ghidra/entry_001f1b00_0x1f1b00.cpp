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

// Function: entry_001f1b00
// Address: 0x1f1b00 - 0x1f1c60
void entry_001f1b00_0x1f1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1b00_0x1f1b00");
#endif

    switch (ctx->pc) {
        case 0x1f1b2cu: goto label_1f1b2c;
        case 0x1f1c3cu: goto label_1f1c3c;
        default: break;
    }

    ctx->pc = 0x1f1b00u;

    // 0x1f1b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1b04: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f1b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1b0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b10: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f1b18: 0x24061e27  addiu       $a2, $zero, 0x1E27
    ctx->pc = 0x1f1b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7719));
    // 0x1f1b1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1b20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f1b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f1b24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F1B24u;
    SET_GPR_U32(ctx, 31, 0x1F1B2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F1B24u, 0x1F1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B2Cu;
label_1f1b2c:
    // 0x1f1b2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b30: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b34: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1b38: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f1b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f1b3c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f1b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b44: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b48: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f1b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f1b4c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x1f1b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x1f1b50: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f1b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b58: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b5c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1b60: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f1b64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f1b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b6c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1b74: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f1b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f1b78: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f1b7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f1b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1b8c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f1b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f1b90: 0x3c043bc9  lui         $a0, 0x3BC9
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15305 << 16));
    // 0x1f1b94: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1f1b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1f1b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b9c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1ba0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1ba4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f1ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f1ba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bac: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bb0: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f1bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f1bb4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1f1bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1f1bb8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f1bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bc0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bc4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1bc8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x1f1bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1f1bcc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f1bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bd4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bd8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f1bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1bdc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1f1bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x1f1be0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1be4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1be8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f1bec: 0x344200b8  ori         $v0, $v0, 0xB8
    ctx->pc = 0x1f1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)184);
    // 0x1f1bf0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f1bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bf8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bfc: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f1bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1f1c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1c04: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c08: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1f1c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x1f1c0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c10: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x1f1c10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1c14: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
    // 0x1f1c18: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x1f1c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1f1c1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1c20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c24: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f1c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f1c28: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x1f1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f1c2c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1f1c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1f1c30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1c30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1c34: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1C34u;
    SET_GPR_U32(ctx, 31, 0x1F1C3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1C34u, 0x1F1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C3Cu;
label_1f1c3c:
    // 0x1f1c3c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c40: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x1f1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
    // 0x1f1c44: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1f1c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1f1c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f1c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1c4c: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f1c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f1c50: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1f1c54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1c54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1c58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1C58u;
    SET_GPR_U32(ctx, 31, 0x1F1C60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1C58u, 0x1F1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C60u;
}
