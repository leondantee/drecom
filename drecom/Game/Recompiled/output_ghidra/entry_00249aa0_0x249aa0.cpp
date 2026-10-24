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

// Function: entry_00249aa0
// Address: 0x249aa0 - 0x249bbc
void entry_00249aa0_0x249aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249aa0_0x249aa0");
#endif

    switch (ctx->pc) {
        case 0x249aacu: goto label_249aac;
        case 0x249b20u: goto label_249b20;
        case 0x249b90u: goto label_249b90;
        case 0x249b9cu: goto label_249b9c;
        default: break;
    }

    ctx->pc = 0x249aa0u;

    // 0x249aa0: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x249aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249aa4: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x249AA4u;
    SET_GPR_U32(ctx, 31, 0x249AACu);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x249AA4u, 0x249AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AACu;
label_249aac:
    // 0x249aac: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x249aacu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249ab0: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x249ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x249ab4: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x249AB4u;
    {
        const bool branch_taken_0x249ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249ab4) {
            ctx->pc = 0x249CE8u;
            return;
        }
    }
    ctx->pc = 0x249ABCu;
    // 0x249abc: 0xafb20140  sw          $s2, 0x140($sp)
    ctx->pc = 0x249abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
    // 0x249ac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249ac4: 0x0  nop
    ctx->pc = 0x249ac4u;
    // NOP
    // 0x249ac8: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x249ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x249acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249ad0: 0x0  nop
    ctx->pc = 0x249ad0u;
    // NOP
    // 0x249ad4: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x249ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x249ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249adc: 0x0  nop
    ctx->pc = 0x249adcu;
    // NOP
    // 0x249ae0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x249ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x249ae4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x249ae8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249ae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249aec: 0x0  nop
    ctx->pc = 0x249aecu;
    // NOP
    // 0x249af0: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x249af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x249af4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x249af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x249af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249afc: 0x0  nop
    ctx->pc = 0x249afcu;
    // NOP
    // 0x249b00: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x249b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x249b04: 0xa7a00164  sh          $zero, 0x164($sp)
    ctx->pc = 0x249b04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x249b08: 0xa3a00166  sb          $zero, 0x166($sp)
    ctx->pc = 0x249b08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 358), (uint8_t)GPR_U32(ctx, 0));
    // 0x249b0c: 0xa3a00167  sb          $zero, 0x167($sp)
    ctx->pc = 0x249b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 359), (uint8_t)GPR_U32(ctx, 0));
    // 0x249b10: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x249b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249b14: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x249b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x249b18: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x249B18u;
    SET_GPR_U32(ctx, 31, 0x249B20u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x249B18u, 0x249B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B20u;
label_249b20:
    // 0x249b20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249b24: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x249B24u;
    {
        const bool branch_taken_0x249b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b24) {
            ctx->pc = 0x249CE8u;
            return;
        }
    }
    ctx->pc = 0x249B2Cu;
    // 0x249b2c: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x249b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249b30: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x249b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x249b34: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x249b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x249b38: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x249b38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x249b3c: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x249b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
    // 0x249b40: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x249b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249b44: 0xa4b024  and         $s6, $a1, $a0
    ctx->pc = 0x249b44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x249b48: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x249b4c: 0x34770006  ori         $s7, $v1, 0x6
    ctx->pc = 0x249b4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x249b50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x249b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x249b54: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x249b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x249b58: 0x2485b420  addiu       $a1, $a0, -0x4BE0
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
    // 0x249b5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x249b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x249b60: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x249b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x249b64: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x249b68: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x249b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x249b6c: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249b70: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x249b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x249b74: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x249b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249b78: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x249b78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x249b7c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x249b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x249b80: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249b80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x249b84: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x249b84u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x249b88: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x249B88u;
    SET_GPR_U32(ctx, 31, 0x249B90u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x249B88u, 0x249B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B90u;
label_249b90:
    // 0x249b90: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x249b90u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249b94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x249B94u;
    SET_GPR_U32(ctx, 31, 0x249B9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x249B94u, 0x249B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B9Cu;
label_249b9c:
    // 0x249b9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249b9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249ba0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x249BA0u;
    {
        const bool branch_taken_0x249ba0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x249ba0) {
            ctx->pc = 0x249BBCu;
            return;
        }
    }
    ctx->pc = 0x249BA8u;
    // 0x249ba8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x249ba8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249bac: 0x0  nop
    ctx->pc = 0x249bacu;
    // NOP
    // 0x249bb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x249bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x249bb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x249BB4u;
    {
        const bool branch_taken_0x249bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249bb4) {
            ctx->pc = 0x249BD8u;
            return;
        }
    }
    ctx->pc = 0x249BBCu;
}
