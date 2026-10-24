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

// Function: caseD_1
// Address: 0x2a5b34 - 0x2a5c70
void caseD_1_0x2a5b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2a5b34");
#endif

    switch (ctx->pc) {
        case 0x2a5b60u: goto label_2a5b60;
        case 0x2a5b7cu: goto label_2a5b7c;
        case 0x2a5b9cu: goto label_2a5b9c;
        case 0x2a5bc4u: goto label_2a5bc4;
        case 0x2a5bd4u: goto label_2a5bd4;
        case 0x2a5be0u: goto label_2a5be0;
        case 0x2a5becu: goto label_2a5bec;
        case 0x2a5c68u: goto label_2a5c68;
        default: break;
    }

    ctx->pc = 0x2a5b34u;

    // 0x2a5b34: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2a5b38: 0x3444fa35  ori         $a0, $v0, 0xFA35
    ctx->pc = 0x2a5b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a5b3c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a5b3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5b40: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5b44: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5b48: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a5b4c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a5b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a5b50: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2a5b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2a5b54: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x2a5b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x2a5b58: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A5B58u;
    SET_GPR_U32(ctx, 31, 0x2A5B60u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A5B58u, 0x2A5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B60u;
label_2a5b60:
    // 0x2a5b60: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a5b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2a5b64: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5b68: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5b6c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5b70: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a5b70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a5b74: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A5B74u;
    SET_GPR_U32(ctx, 31, 0x2A5B7Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5B74u, 0x2A5B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B7Cu;
label_2a5b7c:
    // 0x2a5b7c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5b80: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a5b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2a5b84: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5b88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a5b88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a5b8c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a5b90: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a5b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5b94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A5B94u;
    SET_GPR_U32(ctx, 31, 0x2A5B9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5B94u, 0x2A5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B9Cu;
label_2a5b9c:
    // 0x2a5b9c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ba0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ba4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ba8: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a5bac: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a5bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a5bb0: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x2a5bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a5bb4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a5bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5bb8: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a5bbc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A5BBCu;
    SET_GPR_U32(ctx, 31, 0x2A5BC4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A5BBCu, 0x2A5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BC4u;
label_2a5bc4:
    // 0x2a5bc4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5bc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5bcc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A5BCCu;
    SET_GPR_U32(ctx, 31, 0x2A5BD4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5BCCu, 0x2A5BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BD4u;
label_2a5bd4:
    // 0x2a5bd4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5bd8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A5BD8u;
    SET_GPR_U32(ctx, 31, 0x2A5BE0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5BD8u, 0x2A5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BE0u;
label_2a5be0:
    // 0x2a5be0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5be4: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A5BE4u;
    SET_GPR_U32(ctx, 31, 0x2A5BECu);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A5BE4u, 0x2A5BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BECu;
label_2a5bec:
    // 0x2a5bec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5becu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5bf0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5bf4: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a5bf8: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x2a5bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a5bfc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a5bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5c00: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5c08: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a5c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a5c0c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c10: 0x3c053f73  lui         $a1, 0x3F73
    ctx->pc = 0x2a5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16243 << 16));
    // 0x2a5c14: 0x34a43333  ori         $a0, $a1, 0x3333
    ctx->pc = 0x2a5c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
    // 0x2a5c18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a5c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5c1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2a5c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5c20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5c24: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a5c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2a5c28: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c2c: 0x907009e7  lbu         $s0, 0x9E7($v1)
    ctx->pc = 0x2a5c2cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a5c30: 0x12000208  beqz        $s0, . + 4 + (0x208 << 2)
    ctx->pc = 0x2A5C30u;
    {
        const bool branch_taken_0x2a5c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c30) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A5C38u;
    // 0x2a5c38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a5c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5c3c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c40: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a5c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a5c44: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c48: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5c4c: 0x8ca30368  lw          $v1, 0x368($a1)
    ctx->pc = 0x2a5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x2a5c50: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2a5c50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a5c54: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2a5c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a5c58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5c5c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a5c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a5c60: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A5C60u;
    SET_GPR_U32(ctx, 31, 0x2A5C68u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5C60u, 0x2A5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C68u;
label_2a5c68:
    // 0x2a5c68: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x2A5C68u;
    {
        const bool branch_taken_0x2a5c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c68) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A5C70u;
}
