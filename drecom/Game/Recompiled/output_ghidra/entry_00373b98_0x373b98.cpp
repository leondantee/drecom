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

// Function: entry_00373b98
// Address: 0x373b98 - 0x373ea0
void entry_00373b98_0x373b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373b98_0x373b98");
#endif

    switch (ctx->pc) {
        case 0x373bb8u: goto label_373bb8;
        case 0x373be8u: goto label_373be8;
        case 0x373c4cu: goto label_373c4c;
        default: break;
    }

    ctx->pc = 0x373b98u;

    // 0x373b98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373b9c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373ba0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ba8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x373ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x373bac: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x373bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x373bb0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x373BB0u;
    SET_GPR_U32(ctx, 31, 0x373BB8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x373BB8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373BB8u) { return; }
    ctx->pc = 0x373BB8u;
label_373bb8:
    // 0x373bb8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x373bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373bbc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x373bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x373bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373bc4: 0x0  nop
    ctx->pc = 0x373bc4u;
    // NOP
    // 0x373bc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373bcc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x373bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x373bd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373bd4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x373bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x373bd8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x373bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x373bdc: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x373bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x373be0: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x373BE0u;
    SET_GPR_U32(ctx, 31, 0x373BE8u);
    ctx->pc = 0x1681E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681E0u, 0x373BE0u, 0x373BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BE8u;
label_373be8:
    // 0x373be8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x373be8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x373bec: 0x126000ac  beqz        $s3, . + 4 + (0xAC << 2)
    ctx->pc = 0x373BECu;
    {
        const bool branch_taken_0x373bec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x373bec) {
            ctx->pc = 0x373EA0u;
            return;
        }
    }
    ctx->pc = 0x373BF4u;
    // 0x373bf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373bf8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373bfc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c04: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c08: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373c10: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x373c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x373c14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c18: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c24: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c28: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373c30: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x373c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373c34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373c38: 0x0  nop
    ctx->pc = 0x373c38u;
    // NOP
    // 0x373c3c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x373c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x373c40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373c44: 0xc067588  jal         func_19D620
    ctx->pc = 0x373C44u;
    SET_GPR_U32(ctx, 31, 0x373C4Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x373C44u, 0x373C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C4Cu;
label_373c4c:
    // 0x373c4c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x373c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x373c50: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c54: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c58: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c60: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c64: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373c6c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373c70: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c74: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c78: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c80: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c84: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373c8c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373c90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c94: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c98: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ca0: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373ca4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373ca8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373cac: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373cb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373cb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373cb8: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373cbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373cc0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373cc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373cc8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373ccc: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373cd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373cd4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373cd8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373cdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373ce0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373ce4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373ce8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373cec: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373cf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373cf4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373cf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373cfc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373d00: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373d08: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373d0c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373d10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373d14: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373d18: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373d1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373d20: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373d24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373d28: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373d2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373d30: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373d34: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373d3c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373d40: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373d44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373d48: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373d4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373d50: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373d54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373d58: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373d5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373d64: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373d68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373d6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373d70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373d74: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373d78: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373d7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373d80: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373d84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373d88: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373d8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373d90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373d9c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373da0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373da4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373dac: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373db0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373db4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373db8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373dbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373dc0: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373dc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373dc8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373dcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373dd4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373dd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373ddc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373de4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373de8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373dec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373df0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373df4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373df8: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373dfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373e00: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373e08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373e0c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373e10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373e14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373e1c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e20: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373e28: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373e2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373e30: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373e34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373e38: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373e3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373e40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373e44: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373e48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373e4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373e54: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e58: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373e60: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373e64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373e68: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373e6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373e70: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373e74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373e78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373e7c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373e80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373e84: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373e8c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e90: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373e98: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373e9c: 0x0  nop
    ctx->pc = 0x373e9cu;
    // NOP
    ctx->pc = 0x373ea0u;
}
