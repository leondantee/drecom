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

// Function: entry_00147b90
// Address: 0x147b90 - 0x147bd8
void entry_00147b90_0x147b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147b90_0x147b90");
#endif

    switch (ctx->pc) {
        case 0x147b9cu: goto label_147b9c;
        default: break;
    }

    ctx->pc = 0x147b90u;

    // 0x147b90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b94: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x147B94u;
    SET_GPR_U32(ctx, 31, 0x147B9Cu);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x147B94u, 0x147B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B9Cu;
label_147b9c:
    // 0x147b9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x147B9Cu;
    {
        const bool branch_taken_0x147b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b9c) {
            ctx->pc = 0x147C04u;
            return;
        }
    }
    ctx->pc = 0x147BA4u;
    // 0x147ba4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ba8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x147ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147bac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147bb0: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x147bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147bb8: 0x0  nop
    ctx->pc = 0x147bb8u;
    // NOP
    // 0x147bbc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x147BBCu;
    {
        const bool branch_taken_0x147bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147bbc) {
            ctx->pc = 0x147BD8u;
            return;
        }
    }
    ctx->pc = 0x147BC4u;
    // 0x147bc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x147bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x147bc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147bcc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x147bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x147bd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147BD0u;
    {
        const bool branch_taken_0x147bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147bd0) {
            ctx->pc = 0x147BE4u;
            return;
        }
    }
    ctx->pc = 0x147BD8u;
}
