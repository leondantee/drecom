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

// Function: entry_00220c34
// Address: 0x220c34 - 0x220d74
void entry_00220c34_0x220c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220c34_0x220c34");
#endif

    switch (ctx->pc) {
        case 0x220c80u: goto label_220c80;
        case 0x220c8cu: goto label_220c8c;
        case 0x220ce8u: goto label_220ce8;
        case 0x220cf4u: goto label_220cf4;
        case 0x220d2cu: goto label_220d2c;
        case 0x220d38u: goto label_220d38;
        default: break;
    }

    ctx->pc = 0x220c34u;

    // 0x220c34: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220c38: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x220c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220c3c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x220c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x220c40: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220c44: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x220c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220c48: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x220c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x220c4c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220c50: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x220c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220c54: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x220c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x220c58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x220c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x220c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220c60: 0x0  nop
    ctx->pc = 0x220c60u;
    // NOP
    // 0x220c64: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x220c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x220c68: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220c6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220c6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220c70: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x220c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x220c74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220c74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220c78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220C78u;
    SET_GPR_U32(ctx, 31, 0x220C80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220C78u, 0x220C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C80u;
label_220c80:
    // 0x220c80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220c84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220C84u;
    SET_GPR_U32(ctx, 31, 0x220C8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220C84u, 0x220C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C8Cu;
label_220c8c:
    // 0x220c8c: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x220c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220c90: 0xc4c01200  lwc1        $f0, 0x1200($a2)
    ctx->pc = 0x220c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220c94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x220c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x220c98: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220c9c: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x220c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ca0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x220ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x220ca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x220ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220cac: 0x0  nop
    ctx->pc = 0x220cacu;
    // NOP
    // 0x220cb0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x220cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x220cb4: 0x8fb101a8  lw          $s1, 0x1A8($sp)
    ctx->pc = 0x220cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220cb8: 0xc6211204  lwc1        $f1, 0x1204($s1)
    ctx->pc = 0x220cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220cbc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x220cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x220cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220cc4: 0x0  nop
    ctx->pc = 0x220cc4u;
    // NOP
    // 0x220cc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220ccc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x220cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x220cd0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220cd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220cd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220cd8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x220cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x220cdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220cdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220ce0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220CE0u;
    SET_GPR_U32(ctx, 31, 0x220CE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220CE0u, 0x220CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CE8u;
label_220ce8:
    // 0x220ce8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220ce8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220cec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220CECu;
    SET_GPR_U32(ctx, 31, 0x220CF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220CECu, 0x220CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CF4u;
label_220cf4:
    // 0x220cf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220cf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220cf8: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x220cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220cfc: 0xc4e11204  lwc1        $f1, 0x1204($a3)
    ctx->pc = 0x220cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220d00: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x220d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x220d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220d08: 0x0  nop
    ctx->pc = 0x220d08u;
    // NOP
    // 0x220d0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x220d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x220d10: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x220d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x220d14: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220d18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220d18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220d1c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x220d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x220d20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220d20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220d24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220D24u;
    SET_GPR_U32(ctx, 31, 0x220D2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220D24u, 0x220D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D2Cu;
label_220d2c:
    // 0x220d2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220d2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220d30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220D30u;
    SET_GPR_U32(ctx, 31, 0x220D38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220D30u, 0x220D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D38u;
label_220d38:
    // 0x220d38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220d38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220d3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220d40: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220d44: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x220d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x220d48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x220d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220d4c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220d50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x220d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x220d54: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220d58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x220d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x220d5c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220d60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x220d60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x220d64: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220d68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x220d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x220d6c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x220D6Cu;
    {
        const bool branch_taken_0x220d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220d6c) {
            ctx->pc = 0x220FBCu;
            return;
        }
    }
    ctx->pc = 0x220D74u;
}
