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

// Function: entry_001f2cac
// Address: 0x1f2cac - 0x1f2cd8
void entry_001f2cac_0x1f2cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2cac_0x1f2cac");
#endif

    switch (ctx->pc) {
        case 0x1f2cd0u: goto label_1f2cd0;
        default: break;
    }

    ctx->pc = 0x1f2cacu;

    // 0x1f2cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cb0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2cb4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f2cb8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f2cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f2cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2cc0: 0x0  nop
    ctx->pc = 0x1f2cc0u;
    // NOP
    // 0x1f2cc4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1f2cc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2cc8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F2CC8u;
    SET_GPR_U32(ctx, 31, 0x1F2CD0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F2CC8u, 0x1F2CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CD0u;
label_1f2cd0:
    // 0x1f2cd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cd4: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f2cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x1f2cd8u;
}
