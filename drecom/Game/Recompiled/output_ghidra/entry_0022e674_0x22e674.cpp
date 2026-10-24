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

// Function: entry_0022e674
// Address: 0x22e674 - 0x22e774
void entry_0022e674_0x22e674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e674_0x22e674");
#endif

    switch (ctx->pc) {
        case 0x22e6b0u: goto label_22e6b0;
        case 0x22e738u: goto label_22e738;
        case 0x22e76cu: goto label_22e76c;
        default: break;
    }

    ctx->pc = 0x22e674u;

    // 0x22e674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e678: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x22e678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22e67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e680: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22e680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22e684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e68c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22e690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e694: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e698: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22e698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22e69c: 0x24061e0c  addiu       $a2, $zero, 0x1E0C
    ctx->pc = 0x22e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7692));
    // 0x22e6a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e6a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22e6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22e6a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22E6A8u;
    SET_GPR_U32(ctx, 31, 0x22E6B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22E6A8u, 0x22E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6B0u;
label_22e6b0:
    // 0x22e6b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6b4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e6b8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e6bc: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22e6c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e6c4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6d0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22e6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22e6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e6e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22e6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22e6e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e6ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e6f0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22e6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22e6f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22e6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e700: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e704: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22e704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22e708: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22e708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22e70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e710: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e714: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e718: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22e718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22e71c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x22e720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e724: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e72c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22e72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22e730: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E730u;
    SET_GPR_U32(ctx, 31, 0x22E738u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E730u, 0x22E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E738u;
label_22e738:
    // 0x22e738: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e73c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e740: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22E740u;
    {
        const bool branch_taken_0x22e740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e740) {
            ctx->pc = 0x22E774u;
            return;
        }
    }
    ctx->pc = 0x22E748u;
    // 0x22e748: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22e74c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e758: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22e75c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22e760: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22e760u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e764: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22E764u;
    SET_GPR_U32(ctx, 31, 0x22E76Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22E764u, 0x22E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E76Cu;
label_22e76c:
    // 0x22e76c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22E76Cu;
    {
        const bool branch_taken_0x22e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e76c) {
            ctx->pc = 0x22E798u;
            return;
        }
    }
    ctx->pc = 0x22E774u;
}
