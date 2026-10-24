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

// Function: entry_0014b798
// Address: 0x14b798 - 0x14b7f4
void entry_0014b798_0x14b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b798_0x14b798");
#endif

    switch (ctx->pc) {
        case 0x14b7a8u: goto label_14b7a8;
        case 0x14b7e4u: goto label_14b7e4;
        default: break;
    }

    ctx->pc = 0x14b798u;

    // 0x14b798: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b79c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b79cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b7a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14B7A0u;
    SET_GPR_U32(ctx, 31, 0x14B7A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B7A0u, 0x14B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7A8u;
label_14b7a8:
    // 0x14b7a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b7ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b7acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14b7b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14B7B0u;
    {
        const bool branch_taken_0x14b7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7b0) {
            ctx->pc = 0x14B7F4u;
            return;
        }
    }
    ctx->pc = 0x14B7B8u;
    // 0x14b7b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b7bc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14b7bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14b7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b7c4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14b7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x14b7c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b7cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b7d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b7d4: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b7d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x14b7d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14b7dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14B7DCu;
    SET_GPR_U32(ctx, 31, 0x14B7E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14B7DCu, 0x14B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7E4u;
label_14b7e4:
    // 0x14b7e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b7e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14b7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14b7ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B7ECu;
    {
        const bool branch_taken_0x14b7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7ec) {
            ctx->pc = 0x14B804u;
            return;
        }
    }
    ctx->pc = 0x14B7F4u;
}
