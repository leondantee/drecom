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

// Function: entry_001a2a90
// Address: 0x1a2a90 - 0x1a2b08
void entry_001a2a90_0x1a2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2a90_0x1a2a90");
#endif

    switch (ctx->pc) {
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2af0u: goto label_1a2af0;
        default: break;
    }

    ctx->pc = 0x1a2a90u;

    // 0x1a2a90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2a98: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2a9c: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a2aa0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AA0u;
    SET_GPR_U32(ctx, 31, 0x1A2AA8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AA0u, 0x1A2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AA8u;
label_1a2aa8:
    // 0x1a2aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2aac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2ab0: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2ab4: 0x24650058  addiu       $a1, $v1, 0x58
    ctx->pc = 0x1a2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1a2ab8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AB8u;
    SET_GPR_U32(ctx, 31, 0x1A2AC0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AB8u, 0x1A2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AC0u;
label_1a2ac0:
    // 0x1a2ac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2ac4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2ac8: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2acc: 0x24650068  addiu       $a1, $v1, 0x68
    ctx->pc = 0x1a2accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x1a2ad0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AD0u;
    SET_GPR_U32(ctx, 31, 0x1A2AD8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AD0u, 0x1A2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AD8u;
label_1a2ad8:
    // 0x1a2ad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2adc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2ae0: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a2ae4: 0x24650078  addiu       $a1, $v1, 0x78
    ctx->pc = 0x1a2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1a2ae8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A2AE8u;
    SET_GPR_U32(ctx, 31, 0x1A2AF0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A2AE8u, 0x1A2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AF0u;
label_1a2af0:
    // 0x1a2af0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a2af0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2afc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a2afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a2b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B08u;
}
