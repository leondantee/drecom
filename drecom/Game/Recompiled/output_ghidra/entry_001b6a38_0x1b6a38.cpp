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

// Function: entry_001b6a38
// Address: 0x1b6a38 - 0x1b6b44
void entry_001b6a38_0x1b6a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6a38_0x1b6a38");
#endif

    switch (ctx->pc) {
        case 0x1b6a4cu: goto label_1b6a4c;
        case 0x1b6a58u: goto label_1b6a58;
        case 0x1b6a70u: goto label_1b6a70;
        case 0x1b6a80u: goto label_1b6a80;
        case 0x1b6a9cu: goto label_1b6a9c;
        case 0x1b6aecu: goto label_1b6aec;
        case 0x1b6b04u: goto label_1b6b04;
        default: break;
    }

    ctx->pc = 0x1b6a38u;

    // 0x1b6a38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6a3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6a40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6a44: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B6A44u;
    SET_GPR_U32(ctx, 31, 0x1B6A4Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B6A44u, 0x1B6A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A4Cu;
label_1b6a4c:
    // 0x1b6a4c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6a50: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B6A50u;
    SET_GPR_U32(ctx, 31, 0x1B6A58u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B6A50u, 0x1B6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A58u;
label_1b6a58:
    // 0x1b6a58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b6a5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6a60: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b6a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b6a64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6a64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6a68: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1B6A68u;
    SET_GPR_U32(ctx, 31, 0x1B6A70u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1B6A68u, 0x1B6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A70u;
label_1b6a70:
    // 0x1b6a70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6a70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6a74: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b6a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6a78: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B6A78u;
    SET_GPR_U32(ctx, 31, 0x1B6A80u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6A78u, 0x1B6A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A80u;
label_1b6a80:
    // 0x1b6a80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6a80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6a84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6a88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6a8c: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1b6a90: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1b6a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1b6a94: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B6A94u;
    SET_GPR_U32(ctx, 31, 0x1B6A9Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B6A94u, 0x1B6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A9Cu;
label_1b6a9c:
    // 0x1b6a9c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b6aa0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6aa4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b6aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6aa8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1b6aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6ab0: 0x0  nop
    ctx->pc = 0x1b6ab0u;
    // NOP
    // 0x1b6ab4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b6ab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6ab8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6abc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b6abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6ac0: 0x0  nop
    ctx->pc = 0x1b6ac0u;
    // NOP
    // 0x1b6ac4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1B6AC4u;
    {
        const bool branch_taken_0x1b6ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6ac4) {
            ctx->pc = 0x1B6B44u;
            return;
        }
    }
    ctx->pc = 0x1B6ACCu;
    // 0x1b6acc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ad4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ad8: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1b6adc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1b6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1b6ae0: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1b6ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1b6ae4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B6AE4u;
    SET_GPR_U32(ctx, 31, 0x1B6AECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B6AE4u, 0x1B6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6AECu;
label_1b6aec:
    // 0x1b6aec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6af0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6af4: 0xc46c1b40  lwc1        $f12, 0x1B40($v1)
    ctx->pc = 0x1b6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6af8: 0xc44d1b48  lwc1        $f13, 0x1B48($v0)
    ctx->pc = 0x1b6af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b6afc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B6AFCu;
    SET_GPR_U32(ctx, 31, 0x1B6B04u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B6AFCu, 0x1B6B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B04u;
label_1b6b04:
    // 0x1b6b04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b08: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1b6b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1b6b0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b10: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b14: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1b6b14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b6b18: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b6b1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1b6b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b6b24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b6b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6b2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b6b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6b34: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1b6b34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b38: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b6b3c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1B6B3Cu;
    {
        const bool branch_taken_0x1b6b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b3c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6B44u;
}
