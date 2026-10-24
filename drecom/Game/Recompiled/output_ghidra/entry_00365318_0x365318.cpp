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

// Function: entry_00365318
// Address: 0x365318 - 0x365344
void entry_00365318_0x365318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365318_0x365318");
#endif

    switch (ctx->pc) {
        case 0x365334u: goto label_365334;
        default: break;
    }

    ctx->pc = 0x365318u;

    // 0x365318: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36531c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365320: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x365320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x365324: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x365324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x365328: 0xc60e0064  lwc1        $f14, 0x64($s0)
    ctx->pc = 0x365328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36532c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x36532Cu;
    SET_GPR_U32(ctx, 31, 0x365334u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x36532Cu, 0x365334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365334u;
label_365334:
    // 0x365334: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365338: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x365338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36533c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36533Cu;
    {
        const bool branch_taken_0x36533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36533c) {
            ctx->pc = 0x365350u;
            return;
        }
    }
    ctx->pc = 0x365344u;
}
