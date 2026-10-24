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

// Function: entry_00225f88
// Address: 0x225f88 - 0x225fec
void entry_00225f88_0x225f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225f88_0x225f88");
#endif

    switch (ctx->pc) {
        case 0x225fb4u: goto label_225fb4;
        case 0x225fd0u: goto label_225fd0;
        case 0x225fe4u: goto label_225fe4;
        default: break;
    }

    ctx->pc = 0x225f88u;

    // 0x225f88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f8c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x225f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f94: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225f98: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x225f9c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x225f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225fa0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x225fa4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x225fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x225fa8: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x225fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x225fac: 0xc05c848  jal         func_172120
    ctx->pc = 0x225FACu;
    SET_GPR_U32(ctx, 31, 0x225FB4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x225FACu, 0x225FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB4u;
label_225fb4:
    // 0x225fb4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x225fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x225fb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225fbc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x225fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225fc0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x225fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225fc4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x225fc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225fc8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x225FC8u;
    SET_GPR_U32(ctx, 31, 0x225FD0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x225FC8u, 0x225FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FD0u;
label_225fd0:
    // 0x225fd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225fd4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x225fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x225fd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225fdc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x225FDCu;
    SET_GPR_U32(ctx, 31, 0x225FE4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x225FDCu, 0x225FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FE4u;
label_225fe4:
    // 0x225fe4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x225FE4u;
    {
        const bool branch_taken_0x225fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225fe4) {
            ctx->pc = 0x226208u;
            return;
        }
    }
    ctx->pc = 0x225FECu;
}
