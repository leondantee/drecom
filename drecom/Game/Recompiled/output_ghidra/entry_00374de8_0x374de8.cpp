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

// Function: entry_00374de8
// Address: 0x374de8 - 0x374f14
void entry_00374de8_0x374de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374de8_0x374de8");
#endif

    switch (ctx->pc) {
        case 0x374e08u: goto label_374e08;
        case 0x374e18u: goto label_374e18;
        case 0x374e24u: goto label_374e24;
        case 0x374e34u: goto label_374e34;
        case 0x374e50u: goto label_374e50;
        case 0x374e64u: goto label_374e64;
        case 0x374e84u: goto label_374e84;
        case 0x374e98u: goto label_374e98;
        default: break;
    }

    ctx->pc = 0x374de8u;

    // 0x374de8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374dec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374df0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x374df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x374df4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x374df4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374df8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x374df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374dfc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x374dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x374e00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x374E00u;
    SET_GPR_U32(ctx, 31, 0x374E08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x374E00u, 0x374E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E08u;
label_374e08:
    // 0x374e08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x374e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x374e10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x374E10u;
    SET_GPR_U32(ctx, 31, 0x374E18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x374E10u, 0x374E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E18u;
label_374e18:
    // 0x374e18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e1c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x374E1Cu;
    SET_GPR_U32(ctx, 31, 0x374E24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x374E1Cu, 0x374E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E24u;
label_374e24:
    // 0x374e24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x374e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e28: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x374e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x374e2c: 0xc096188  jal         func_258620
    ctx->pc = 0x374E2Cu;
    SET_GPR_U32(ctx, 31, 0x374E34u);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x374E2Cu, 0x374E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E34u;
label_374e34:
    // 0x374e34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e38: 0x8c520058  lw          $s2, 0x58($v0)
    ctx->pc = 0x374e38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x374e3c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e40: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x374e44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374e48: 0xc096254  jal         func_258950
    ctx->pc = 0x374E48u;
    SET_GPR_U32(ctx, 31, 0x374E50u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E48u, 0x374E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E50u;
label_374e50:
    // 0x374e50: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e54: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374e5c: 0xc096254  jal         func_258950
    ctx->pc = 0x374E5Cu;
    SET_GPR_U32(ctx, 31, 0x374E64u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E5Cu, 0x374E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E64u;
label_374e64:
    // 0x374e64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x374e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e68: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x374e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x374e6c: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x374e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x374e70: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e74: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x374e78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374e7c: 0xc096254  jal         func_258950
    ctx->pc = 0x374E7Cu;
    SET_GPR_U32(ctx, 31, 0x374E84u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E7Cu, 0x374E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E84u;
label_374e84:
    // 0x374e84: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x374e84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x374e88: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x374e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374e8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374e90: 0xc096254  jal         func_258950
    ctx->pc = 0x374E90u;
    SET_GPR_U32(ctx, 31, 0x374E98u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x374E90u, 0x374E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E98u;
label_374e98:
    // 0x374e98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374e9c: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x374e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x374ea0: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x374ea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x374ea4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x374ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x374ea8: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x374ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x374eac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374eb0: 0x0  nop
    ctx->pc = 0x374eb0u;
    // NOP
    // 0x374eb4: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x374eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x374eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374ebc: 0x0  nop
    ctx->pc = 0x374ebcu;
    // NOP
    // 0x374ec0: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x374ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x374ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374ec8: 0x0  nop
    ctx->pc = 0x374ec8u;
    // NOP
    // 0x374ecc: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x374eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x374ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374ed4: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x374ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x374ed8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x374ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374edc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x374edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x374ee0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x374EE0u;
    {
        const bool branch_taken_0x374ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374ee0) {
            ctx->pc = 0x374F14u;
            return;
        }
    }
    ctx->pc = 0x374EE8u;
    // 0x374ee8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x374ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374eec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374ef0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x374ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x374ef4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374ef8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x374ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x374efc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374f00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x374f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x374f04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374f08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x374f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x374f0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x374f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x374f10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x374f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x374f14u;
}
