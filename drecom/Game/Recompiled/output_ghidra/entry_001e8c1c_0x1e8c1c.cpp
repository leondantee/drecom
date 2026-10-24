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

// Function: entry_001e8c1c
// Address: 0x1e8c1c - 0x1e8d60
void entry_001e8c1c_0x1e8c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8c1c_0x1e8c1c");
#endif

    switch (ctx->pc) {
        case 0x1e8c68u: goto label_1e8c68;
        case 0x1e8c78u: goto label_1e8c78;
        case 0x1e8cd8u: goto label_1e8cd8;
        case 0x1e8ce4u: goto label_1e8ce4;
        case 0x1e8d1cu: goto label_1e8d1c;
        case 0x1e8d28u: goto label_1e8d28;
        default: break;
    }

    ctx->pc = 0x1e8c1cu;

    // 0x1e8c1c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8c20: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e8c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8c24: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1e8c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e8c28: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8c2c: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e8c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8c30: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1e8c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1e8c34: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8c38: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e8c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8c3c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1e8c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e8c40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8c48: 0x0  nop
    ctx->pc = 0x1e8c48u;
    // NOP
    // 0x1e8c4c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e8c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1e8c50: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8c54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8c54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8c58: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8c5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8c5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8c60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8C60u;
    SET_GPR_U32(ctx, 31, 0x1E8C68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8C60u, 0x1E8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C68u;
label_1e8c68:
    // 0x1e8c68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8c68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8c6c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e8c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e8c70: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8C70u;
    SET_GPR_U32(ctx, 31, 0x1E8C78u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8C70u, 0x1E8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C78u;
label_1e8c78:
    // 0x1e8c78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8c78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8c7c: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e8c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8c80: 0xc4c01200  lwc1        $f0, 0x1200($a2)
    ctx->pc = 0x1e8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8c84: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1e8c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e8c88: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8c8c: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e8c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8c90: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1e8c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e8c94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8c98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8c9c: 0x0  nop
    ctx->pc = 0x1e8c9cu;
    // NOP
    // 0x1e8ca0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e8ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1e8ca4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8ca8: 0xc4611204  lwc1        $f1, 0x1204($v1)
    ctx->pc = 0x1e8ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8cac: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1e8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1e8cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8cb4: 0x0  nop
    ctx->pc = 0x1e8cb4u;
    // NOP
    // 0x1e8cb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e8cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e8cbc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1e8cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1e8cc0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8cc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8cc8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8ccc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8cccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8cd0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8CD0u;
    SET_GPR_U32(ctx, 31, 0x1E8CD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8CD0u, 0x1E8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CD8u;
label_1e8cd8:
    // 0x1e8cd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8cdc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8CDCu;
    SET_GPR_U32(ctx, 31, 0x1E8CE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8CDCu, 0x1E8CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CE4u;
label_1e8ce4:
    // 0x1e8ce4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e8ce4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8ce8: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8cec: 0xc4a11204  lwc1        $f1, 0x1204($a1)
    ctx->pc = 0x1e8cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8cf0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1e8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1e8cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8cf8: 0x0  nop
    ctx->pc = 0x1e8cf8u;
    // NOP
    // 0x1e8cfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e8cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e8d00: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1e8d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1e8d04: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8d08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8d08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8d0c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e8d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8d10: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8d10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8d14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8D14u;
    SET_GPR_U32(ctx, 31, 0x1E8D1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8D14u, 0x1E8D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D1Cu;
label_1e8d1c:
    // 0x1e8d1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8d20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8D20u;
    SET_GPR_U32(ctx, 31, 0x1E8D28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8D20u, 0x1E8D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D28u;
label_1e8d28:
    // 0x1e8d28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8d2c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e8d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8d34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8d38: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d3c: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1e8d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8d40: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e8d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8d48: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d4c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1e8d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8d50: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d54: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1e8d58: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1E8D58u;
    {
        const bool branch_taken_0x1e8d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d58) {
            ctx->pc = 0x1E8F98u;
            return;
        }
    }
    ctx->pc = 0x1E8D60u;
}
