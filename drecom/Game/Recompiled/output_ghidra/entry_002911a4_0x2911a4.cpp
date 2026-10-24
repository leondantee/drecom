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

// Function: entry_002911a4
// Address: 0x2911a4 - 0x2911c4
void entry_002911a4_0x2911a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002911a4_0x2911a4");
#endif

    switch (ctx->pc) {
        case 0x2911acu: goto label_2911ac;
        default: break;
    }

    ctx->pc = 0x2911a4u;

    // 0x2911a4: 0xc0a4368  jal         func_290DA0
    ctx->pc = 0x2911A4u;
    SET_GPR_U32(ctx, 31, 0x2911ACu);
    ctx->pc = 0x290DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290DA0u, 0x2911A4u, 0x2911ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911ACu;
label_2911ac:
    // 0x2911ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2911acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2911b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2911b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2911b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2911b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2911b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2911b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2911bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2911BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911C4u;
}
