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

// Function: entry_0022c714
// Address: 0x22c714 - 0x22c838
void entry_0022c714_0x22c714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c714_0x22c714");
#endif

    switch (ctx->pc) {
        case 0x22c7bcu: goto label_22c7bc;
        case 0x22c7fcu: goto label_22c7fc;
        default: break;
    }

    ctx->pc = 0x22c714u;

    // 0x22c714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c718: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c71c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22c71cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c724: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c72c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22c730: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22c734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c738: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c73c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c740: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c744: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c74c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c754: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22c754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22c758: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c760: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c768: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22c768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22c76c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22c770: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c778: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c77c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c780: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22c780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22c784: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x22c784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x22c788: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c790: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c794: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c798: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22c798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22c79c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c7a8: 0x24063c24  addiu       $a2, $zero, 0x3C24
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15396));
    // 0x22c7ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c7b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c7b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C7B4u;
    SET_GPR_U32(ctx, 31, 0x22C7BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C7B4u, 0x22C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7BCu;
label_22c7bc:
    // 0x22c7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c7c0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22c7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c7c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c7cc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22c7d0: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x22c7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x22c7d4: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22c7d8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x22c7dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7e0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22c7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c7e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c7f0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22c7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22c7f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C7F4u;
    SET_GPR_U32(ctx, 31, 0x22C7FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C7F4u, 0x22C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7FCu;
label_22c7fc:
    // 0x22c7fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c800: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x22c800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x22c804: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x22c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x22c808: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22c808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c80c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22c80cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22c810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c814: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c818: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x22c818u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c81c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c820: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c824: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x22c824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x22c828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c834: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x22c834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    ctx->pc = 0x22c838u;
}
