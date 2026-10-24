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

// Function: entry_002a2a50
// Address: 0x2a2a50 - 0x2a2b24
void entry_002a2a50_0x2a2a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2a50_0x2a2a50");
#endif

    switch (ctx->pc) {
        case 0x2a2ab8u: goto label_2a2ab8;
        case 0x2a2b20u: goto label_2a2b20;
        default: break;
    }

    ctx->pc = 0x2a2a50u;

    // 0x2a2a50: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2a54: 0x906509db  lbu         $a1, 0x9DB($v1)
    ctx->pc = 0x2a2a54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2a2a58: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2a2a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a2a5c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2a2a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2a2a60: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A2A60u;
    {
        const bool branch_taken_0x2a2a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a60) {
            ctx->pc = 0x2A2B24u;
            return;
        }
    }
    ctx->pc = 0x2A2A68u;
    // 0x2a2a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a6c: 0x0  nop
    ctx->pc = 0x2a2a6cu;
    // NOP
    // 0x2a2a70: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a2a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a2a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a78: 0x0  nop
    ctx->pc = 0x2a2a78u;
    // NOP
    // 0x2a2a7c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a2a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a2a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a84: 0x0  nop
    ctx->pc = 0x2a2a84u;
    // NOP
    // 0x2a2a88: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a2a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a94: 0x0  nop
    ctx->pc = 0x2a2a94u;
    // NOP
    // 0x2a2a98: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a2a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a2a9c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2aa0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a2aa4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2a2aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2aa8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2aac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2a2aacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2a2ab0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A2AB0u;
    SET_GPR_U32(ctx, 31, 0x2A2AB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A2AB0u, 0x2A2AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AB8u;
label_2a2ab8:
    // 0x2a2ab8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2a2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2a2abc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2a2abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2a2ac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2ac4: 0x0  nop
    ctx->pc = 0x2a2ac4u;
    // NOP
    // 0x2a2ac8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a2ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2acc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a2accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2ad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2ad4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a2ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a2ad8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2adc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2a2adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a2ae0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a2ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a2ae4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2a2ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2ae8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2a2ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2a2aec: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2a2aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a2af0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a2af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a2af4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a2af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2af8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2a2af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2a2afc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b00: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2a2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2a2b04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a2b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2b08: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2a2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2b0c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a2b0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2b10: 0x246702c0  addiu       $a3, $v1, 0x2C0
    ctx->pc = 0x2a2b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x2a2b14: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a2b14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2b18: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A2B18u;
    SET_GPR_U32(ctx, 31, 0x2A2B20u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A2B18u, 0x2A2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B20u;
label_2a2b20:
    // 0x2a2b20: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a2b20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a2b24u;
}
