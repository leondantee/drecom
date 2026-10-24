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

// Function: entry_001e8bb4
// Address: 0x1e8bb4 - 0x1e8c1c
void entry_001e8bb4_0x1e8bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8bb4_0x1e8bb4");
#endif

    switch (ctx->pc) {
        case 0x1e8c00u: goto label_1e8c00;
        case 0x1e8c10u: goto label_1e8c10;
        default: break;
    }

    ctx->pc = 0x1e8bb4u;

    // 0x1e8bb4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8bb8: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8bbc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e8bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e8bc0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8bc4: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x1e8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8bc8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1e8bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e8bcc: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8bd0: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x1e8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8bd4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e8bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e8bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8be0: 0x0  nop
    ctx->pc = 0x1e8be0u;
    // NOP
    // 0x1e8be4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e8be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e8be8: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8bec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8becu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8bf0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e8bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e8bf4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8bf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8bf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8BF8u;
    SET_GPR_U32(ctx, 31, 0x1E8C00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8BF8u, 0x1E8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C00u;
label_1e8c00:
    // 0x1e8c00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8c00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8c04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e8c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e8c08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8C08u;
    SET_GPR_U32(ctx, 31, 0x1E8C10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8C08u, 0x1E8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C10u;
label_1e8c10:
    // 0x1e8c10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8c10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8c14: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1E8C14u;
    {
        const bool branch_taken_0x1e8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c14) {
            ctx->pc = 0x1E8F98u;
            return;
        }
    }
    ctx->pc = 0x1E8C1Cu;
}
