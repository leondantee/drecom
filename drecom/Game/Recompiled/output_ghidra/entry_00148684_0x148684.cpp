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

// Function: entry_00148684
// Address: 0x148684 - 0x1486d0
void entry_00148684_0x148684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148684_0x148684");
#endif

    switch (ctx->pc) {
        case 0x1486c0u: goto label_1486c0;
        default: break;
    }

    ctx->pc = 0x148684u;

    // 0x148684: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148688: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x148688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14868c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14868Cu;
    {
        const bool branch_taken_0x14868c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14868c) {
            ctx->pc = 0x1486D0u;
            return;
        }
    }
    ctx->pc = 0x148694u;
    // 0x148694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148698: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x148698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14869c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1486a0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1486a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1486a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486a8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1486a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1486ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486b0: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x1486b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1486b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1486b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1486b8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1486B8u;
    SET_GPR_U32(ctx, 31, 0x1486C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1486B8u, 0x1486C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486C0u;
label_1486c0:
    // 0x1486c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486c4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1486c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1486c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1486C8u;
    {
        const bool branch_taken_0x1486c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1486c8) {
            ctx->pc = 0x1486E0u;
            return;
        }
    }
    ctx->pc = 0x1486D0u;
}
