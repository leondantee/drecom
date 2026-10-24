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

// Function: entry_0015aaa4
// Address: 0x15aaa4 - 0x15aae4
void entry_0015aaa4_0x15aaa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aaa4_0x15aaa4");
#endif

    switch (ctx->pc) {
        case 0x15aab8u: goto label_15aab8;
        case 0x15aaccu: goto label_15aacc;
        default: break;
    }

    ctx->pc = 0x15aaa4u;

    // 0x15aaa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aaa8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aaac: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x15aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15aab0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15AAB0u;
    SET_GPR_U32(ctx, 31, 0x15AAB8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15AAB8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15AAB8u) { return; }
    ctx->pc = 0x15AAB8u;
label_15aab8:
    // 0x15aab8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aabc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aac0: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x15aac4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x15AAC4u;
    SET_GPR_U32(ctx, 31, 0x15AACCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x15AAC4u, 0x15AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AACCu;
label_15aacc:
    // 0x15aacc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x15aaccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15aad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15aad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15aad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15aad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15aadc: 0x3e00008  jr          $ra
    ctx->pc = 0x15AADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AAE4u;
}
