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

// Function: entry_00373a74
// Address: 0x373a74 - 0x373b98
void entry_00373a74_0x373a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373a74_0x373a74");
#endif

    switch (ctx->pc) {
        case 0x373b74u: goto label_373b74;
        default: break;
    }

    ctx->pc = 0x373a74u;

label_373a74:
    // 0x373a74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373a78: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373a7c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373a84: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373a88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373a8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373a90: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373a94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373a98: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373aa0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373aa4: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373aac: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373ab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373ab4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373ab8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373abc: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373ac0: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ac8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373acc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373ad0: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373ad4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373ad8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373ae4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373ae8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373aec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373af4: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373af8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373afc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373b00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373b04: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373b08: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373b10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373b18: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373b1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373b20: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373b28: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373b2c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373b30: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373b34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373b3c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373b44: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373b48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373b4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x373b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x373b50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x373b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373b54: 0x1640ffc7  bnez        $s2, . + 4 + (-0x39 << 2)
    ctx->pc = 0x373B54u;
    {
        const bool branch_taken_0x373b54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x373b54) {
            ctx->pc = 0x373A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373a74;
        }
    }
    ctx->pc = 0x373B5Cu;
    // 0x373b5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373b60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373b64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x373b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x373b68: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x373b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x373b6c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x373B6Cu;
    SET_GPR_U32(ctx, 31, 0x373B74u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x373B74u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373B74u) { return; }
    ctx->pc = 0x373B74u;
label_373b74:
    // 0x373b74: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x373b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b78: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x373b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x373b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373b80: 0x0  nop
    ctx->pc = 0x373b80u;
    // NOP
    // 0x373b84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373b88: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x373b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x373b8c: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x373b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x373b90: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x373b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x373b94: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x373b94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x373b98u;
}
