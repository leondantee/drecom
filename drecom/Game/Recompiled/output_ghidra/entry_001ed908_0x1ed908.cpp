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

// Function: entry_001ed908
// Address: 0x1ed908 - 0x1ed944
void entry_001ed908_0x1ed908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed908_0x1ed908");
#endif

    switch (ctx->pc) {
        case 0x1ed920u: goto label_1ed920;
        case 0x1ed938u: goto label_1ed938;
        default: break;
    }

    ctx->pc = 0x1ed908u;

    // 0x1ed908: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed90c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ed90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed910: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed914: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ed914u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed918: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1ED918u;
    SET_GPR_U32(ctx, 31, 0x1ED920u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1ED918u, 0x1ED920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED920u;
label_1ed920:
    // 0x1ed920: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed924: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ed924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ed928: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed92c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ed92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed930: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1ED930u;
    SET_GPR_U32(ctx, 31, 0x1ED938u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1ED930u, 0x1ED938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED938u;
label_1ed938:
    // 0x1ed938: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed93c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1ED93Cu;
    SET_GPR_U32(ctx, 31, 0x1ED944u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1ED93Cu, 0x1ED944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED944u;
}
