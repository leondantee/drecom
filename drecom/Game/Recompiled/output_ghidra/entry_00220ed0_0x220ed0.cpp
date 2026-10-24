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

// Function: entry_00220ed0
// Address: 0x220ed0 - 0x220f60
void entry_00220ed0_0x220ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220ed0_0x220ed0");
#endif

    switch (ctx->pc) {
        case 0x220f1cu: goto label_220f1c;
        case 0x220f28u: goto label_220f28;
        default: break;
    }

    ctx->pc = 0x220ed0u;

    // 0x220ed0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ed4: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x220ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ed8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x220ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x220edc: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ee0: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x220ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ee4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x220ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x220ee8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220eec: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x220eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ef0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x220ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x220ef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x220ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220efc: 0x0  nop
    ctx->pc = 0x220efcu;
    // NOP
    // 0x220f00: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x220f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x220f04: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220f08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220f08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220f0c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x220f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x220f10: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220f10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220f14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220F14u;
    SET_GPR_U32(ctx, 31, 0x220F1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220F14u, 0x220F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F1Cu;
label_220f1c:
    // 0x220f1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220f1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220f20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220F20u;
    SET_GPR_U32(ctx, 31, 0x220F28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220F20u, 0x220F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F28u;
label_220f28:
    // 0x220f28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220f2c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f30: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x220f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x220f34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220f38: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f3c: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x220f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x220f40: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f44: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x220f44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x220f48: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f4c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x220f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x220f50: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x220f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x220f58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x220F58u;
    {
        const bool branch_taken_0x220f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220f58) {
            ctx->pc = 0x220FBCu;
            return;
        }
    }
    ctx->pc = 0x220F60u;
}
