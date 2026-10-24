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
// Address: 0x2a6a98 - 0x2a6c28
void caseD_1_0x2a6a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2a6a98");
#endif

    switch (ctx->pc) {
        case 0x2a6abcu: goto label_2a6abc;
        case 0x2a6af4u: goto label_2a6af4;
        case 0x2a6b10u: goto label_2a6b10;
        case 0x2a6b3cu: goto label_2a6b3c;
        case 0x2a6b54u: goto label_2a6b54;
        case 0x2a6b74u: goto label_2a6b74;
        case 0x2a6b84u: goto label_2a6b84;
        case 0x2a6b94u: goto label_2a6b94;
        case 0x2a6ba4u: goto label_2a6ba4;
        case 0x2a6c20u: goto label_2a6c20;
        default: break;
    }

    ctx->pc = 0x2a6a98u;

    // 0x2a6a98: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6a9c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a6a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6aa0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2a6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2a6aa4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2a6aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2a6aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6aac: 0x0  nop
    ctx->pc = 0x2a6aacu;
    // NOP
    // 0x2a6ab0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6ab0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a6ab4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6AB4u;
    SET_GPR_U32(ctx, 31, 0x2A6ABCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6AB4u, 0x2A6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6ABCu;
label_2a6abc:
    // 0x2a6abc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ac0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a6ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2a6ac4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ac8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6acc: 0x3c043d0e  lui         $a0, 0x3D0E
    ctx->pc = 0x2a6accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15630 << 16));
    // 0x2a6ad0: 0x3483fa35  ori         $v1, $a0, 0xFA35
    ctx->pc = 0x2a6ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2a6ad4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a6ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6ad8: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x2a6ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a6adc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6adcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a6ae0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a6ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6ae4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a6ae8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a6aec: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A6AECu;
    SET_GPR_U32(ctx, 31, 0x2A6AF4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A6AECu, 0x2A6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AF4u;
label_2a6af4:
    // 0x2a6af4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2a6af8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6afc: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x2a6afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6b00: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6b04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a6b04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a6b08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6B08u;
    SET_GPR_U32(ctx, 31, 0x2A6B10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6B08u, 0x2A6B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B10u;
label_2a6b10:
    // 0x2a6b10: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b14: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x2a6b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    // 0x2a6b18: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b1c: 0xc4c100d4  lwc1        $f1, 0xD4($a2)
    ctx->pc = 0x2a6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6b20: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2a6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2a6b24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a6b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a6b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6b2c: 0x0  nop
    ctx->pc = 0x2a6b2cu;
    // NOP
    // 0x2a6b30: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a6b30u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6b34: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6B34u;
    SET_GPR_U32(ctx, 31, 0x2A6B3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6B34u, 0x2A6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B3Cu;
label_2a6b3c:
    // 0x2a6b3c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a6b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a6b44: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a6b4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A6B4Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6B4Cu, 0x2A6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B54u;
label_2a6b54:
    // 0x2a6b54: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b58: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b5c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b60: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a6b64: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a6b68: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a6b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a6b6c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B74u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A6B6Cu, 0x2A6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B74u;
label_2a6b74:
    // 0x2a6b74: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6b78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6b7c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A6B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B84u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6B7Cu, 0x2A6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B84u;
label_2a6b84:
    // 0x2a6b84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6b84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6b88: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b8c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A6B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B94u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6B8Cu, 0x2A6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B94u;
label_2a6b94:
    // 0x2a6b94: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6b94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6b98: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6b9c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A6B9Cu;
    SET_GPR_U32(ctx, 31, 0x2A6BA4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A6B9Cu, 0x2A6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BA4u;
label_2a6ba4:
    // 0x2a6ba4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6ba4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6ba8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6bac: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a6bb0: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x2a6bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a6bb4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a6bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6bb8: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a6bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6bbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a6bc0: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a6bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a6bc4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6bc8: 0x3c053f73  lui         $a1, 0x3F73
    ctx->pc = 0x2a6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16243 << 16));
    // 0x2a6bcc: 0x34a43333  ori         $a0, $a1, 0x3333
    ctx->pc = 0x2a6bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
    // 0x2a6bd0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a6bd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6bd4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2a6bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6bd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a6bdc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a6bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2a6be0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6be4: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x2a6be4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x2a6be8: 0x10e0021f  beqz        $a3, . + 4 + (0x21F << 2)
    ctx->pc = 0x2A6BE8u;
    {
        const bool branch_taken_0x2a6be8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6be8) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A6BF0u;
    // 0x2a6bf0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6bf4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6bf8: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x2a6bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a6bfc: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c00: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6c00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6c04: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a6c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a6c08: 0x8ce50368  lw          $a1, 0x368($a3)
    ctx->pc = 0x2a6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 872)));
    // 0x2a6c0c: 0x24060411  addiu       $a2, $zero, 0x411
    ctx->pc = 0x2a6c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x2a6c10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6c14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a6c18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A6C18u;
    SET_GPR_U32(ctx, 31, 0x2A6C20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A6C18u, 0x2A6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C20u;
label_2a6c20:
    // 0x2a6c20: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x2A6C20u;
    {
        const bool branch_taken_0x2a6c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6c20) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A6C28u;
}
