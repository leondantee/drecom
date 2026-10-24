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

// Function: caseD_0
// Address: 0x227b00 - 0x227c1c
void caseD_0_0x227b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x227b00");
#endif

    switch (ctx->pc) {
        case 0x227b38u: goto label_227b38;
        case 0x227ba4u: goto label_227ba4;
        case 0x227bc0u: goto label_227bc0;
        case 0x227bdcu: goto label_227bdc;
        case 0x227be8u: goto label_227be8;
        default: break;
    }

    ctx->pc = 0x227b00u;

    // 0x227b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227b04: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x227b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x227b0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227b10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b14: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x227b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x227b18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b20: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x227b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x227b24: 0x2406781f  addiu       $a2, $zero, 0x781F
    ctx->pc = 0x227b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30751));
    // 0x227b28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x227b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227b2c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x227b30: 0xc0965d0  jal         func_259740
    ctx->pc = 0x227B30u;
    SET_GPR_U32(ctx, 31, 0x227B38u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x227B30u, 0x227B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B38u;
label_227b38:
    // 0x227b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227b3c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b40: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x227b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x227b44: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x227b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x227b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227b4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b50: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x227b54: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x227b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x227b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227b5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b60: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x227b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x227b64: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x227b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x227b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227b6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b70: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227b74: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x227b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x227b78: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x227b7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x227b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x227b80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x227b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x227b84: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227b8c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x227b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x227b90: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x227b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227b94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x227b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x227b98: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x227b9c: 0xc05c848  jal         func_172120
    ctx->pc = 0x227B9Cu;
    SET_GPR_U32(ctx, 31, 0x227BA4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x227B9Cu, 0x227BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BA4u;
label_227ba4:
    // 0x227ba4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x227ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x227ba8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227bac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x227bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227bb0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x227bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227bb4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x227bb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x227bb8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x227BB8u;
    SET_GPR_U32(ctx, 31, 0x227BC0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x227BB8u, 0x227BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BC0u;
label_227bc0:
    // 0x227bc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227bc4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x227bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x227bc8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227bcc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227bd0: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x227bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x227bd4: 0xc096c60  jal         func_25B180
    ctx->pc = 0x227BD4u;
    SET_GPR_U32(ctx, 31, 0x227BDCu);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x227BD4u, 0x227BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BDCu;
label_227bdc:
    // 0x227bdc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227be0: 0xc05ce54  jal         func_173950
    ctx->pc = 0x227BE0u;
    SET_GPR_U32(ctx, 31, 0x227BE8u);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x227BE0u, 0x227BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BE8u;
label_227be8:
    // 0x227be8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227bec: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x227becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x227bf0: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x227bf4: 0x34c70020  ori         $a3, $a2, 0x20
    ctx->pc = 0x227bf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x227bf8: 0xaca70030  sw          $a3, 0x30($a1)
    ctx->pc = 0x227bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 7));
    // 0x227bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227c00: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x227c00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c04: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x227c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x227c08: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x227c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x227c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227c10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c14: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x227c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x227c18: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x227c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x227c1cu;
}
