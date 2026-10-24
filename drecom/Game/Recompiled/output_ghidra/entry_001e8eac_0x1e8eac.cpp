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

// Function: entry_001e8eac
// Address: 0x1e8eac - 0x1e8f40
void entry_001e8eac_0x1e8eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8eac_0x1e8eac");
#endif

    switch (ctx->pc) {
        case 0x1e8ef8u: goto label_1e8ef8;
        case 0x1e8f04u: goto label_1e8f04;
        default: break;
    }

    ctx->pc = 0x1e8eacu;

    // 0x1e8eac: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8eb0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8eb4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1e8eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e8eb8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8ebc: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e8ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8ec0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1e8ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e8ec4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8ec8: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8ecc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1e8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e8ed0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8ed8: 0x0  nop
    ctx->pc = 0x1e8ed8u;
    // NOP
    // 0x1e8edc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1e8edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e8ee0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8ee4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8ee8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1e8ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e8eec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8eecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8ef0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8EF0u;
    SET_GPR_U32(ctx, 31, 0x1E8EF8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8EF0u, 0x1E8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EF8u;
label_1e8ef8:
    // 0x1e8ef8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8ef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8efc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8EFCu;
    SET_GPR_U32(ctx, 31, 0x1E8F04u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8EFCu, 0x1E8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F04u;
label_1e8f04:
    // 0x1e8f04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8f04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8f08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8f0c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e8f10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8f14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8f18: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1e8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8f20: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f24: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1e8f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8f28: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e8f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8f30: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f34: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1e8f38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E8F38u;
    {
        const bool branch_taken_0x1e8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f38) {
            ctx->pc = 0x1E8F98u;
            return;
        }
    }
    ctx->pc = 0x1E8F40u;
}
