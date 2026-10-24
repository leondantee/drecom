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

// Function: entry_001f69f0
// Address: 0x1f69f0 - 0x1f6b04
void entry_001f69f0_0x1f69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f69f0_0x1f69f0");
#endif

    switch (ctx->pc) {
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6ac0u: goto label_1f6ac0;
        case 0x1f6ac8u: goto label_1f6ac8;
        case 0x1f6afcu: goto label_1f6afc;
        default: break;
    }

    ctx->pc = 0x1f69f0u;

    // 0x1f69f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f69f4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1f69f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f69f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f69fc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f69fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a08: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f6a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f6a0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f6a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f6a18: 0x24060f0c  addiu       $a2, $zero, 0xF0C
    ctx->pc = 0x1f6a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3852));
    // 0x1f6a1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f6a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6a20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f6a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f6a24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F6A24u;
    SET_GPR_U32(ctx, 31, 0x1F6A2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F6A24u, 0x1F6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A2Cu;
label_1f6a2c:
    // 0x1f6a2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a38: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f6a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f6a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a48: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f6a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f6a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a58: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f6a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f6a5c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f6a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6a6c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f6a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f6a70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6a74: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f6a78: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x1f6a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f6a7c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x1f6a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f6a80: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f6a84: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1f6a88: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1f6a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1f6a8c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f6a90: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f6a94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f6a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f6a98: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f6a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f6a9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6aa0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f6aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6aa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6aac: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1f6aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x1f6ab0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f6ab4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6ab4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6ab8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F6AB8u;
    SET_GPR_U32(ctx, 31, 0x1F6AC0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F6AB8u, 0x1F6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AC0u;
label_1f6ac0:
    // 0x1f6ac0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6AC0u;
    SET_GPR_U32(ctx, 31, 0x1F6AC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6AC0u, 0x1F6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AC8u;
label_1f6ac8:
    // 0x1f6ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f6ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6acc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f6accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f6ad0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6AD0u;
    {
        const bool branch_taken_0x1f6ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ad0) {
            ctx->pc = 0x1F6B04u;
            return;
        }
    }
    ctx->pc = 0x1F6AD8u;
    // 0x1f6ad8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6adc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f6ae0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f6ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6ae4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ae8: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f6ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f6aec: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f6af0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6af0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6af4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F6AF4u;
    SET_GPR_U32(ctx, 31, 0x1F6AFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F6AF4u, 0x1F6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AFCu;
label_1f6afc:
    // 0x1f6afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F6AFCu;
    {
        const bool branch_taken_0x1f6afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6afc) {
            ctx->pc = 0x1F6B28u;
            return;
        }
    }
    ctx->pc = 0x1F6B04u;
}
