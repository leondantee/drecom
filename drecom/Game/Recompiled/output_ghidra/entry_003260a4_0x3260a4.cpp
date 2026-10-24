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

// Function: entry_003260a4
// Address: 0x3260a4 - 0x3260e0
void entry_003260a4_0x3260a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003260a4_0x3260a4");
#endif

    switch (ctx->pc) {
        case 0x3260b0u: goto label_3260b0;
        case 0x3260ccu: goto label_3260cc;
        default: break;
    }

    ctx->pc = 0x3260a4u;

    // 0x3260a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3260a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3260a8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3260A8u;
    SET_GPR_U32(ctx, 31, 0x3260B0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3260B0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3260B0u) { return; }
    ctx->pc = 0x3260B0u;
label_3260b0:
    // 0x3260b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3260b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3260b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3260b8: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x3260b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x3260bc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3260bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3260c0: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x3260c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3260c4: 0xc040c92  jal         func_103248
    ctx->pc = 0x3260C4u;
    SET_GPR_U32(ctx, 31, 0x3260CCu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x3260CCu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3260CCu) { return; }
    ctx->pc = 0x3260CCu;
label_3260cc:
    // 0x3260cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3260ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3260d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3260d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3260d4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3260d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3260d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3260D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3260D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3260E0u;
}
