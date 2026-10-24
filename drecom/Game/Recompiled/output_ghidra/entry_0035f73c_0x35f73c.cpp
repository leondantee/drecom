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

// Function: entry_0035f73c
// Address: 0x35f73c - 0x35f794
void entry_0035f73c_0x35f73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f73c_0x35f73c");
#endif

    switch (ctx->pc) {
        case 0x35f758u: goto label_35f758;
        case 0x35f77cu: goto label_35f77c;
        default: break;
    }

    ctx->pc = 0x35f73cu;

    // 0x35f73c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35f740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35f744: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35f744u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35f748: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35f748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f74c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x35f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x35f750: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x35F750u;
    SET_GPR_U32(ctx, 31, 0x35F758u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x35F750u, 0x35F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F758u;
label_35f758:
    // 0x35f758: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f75c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f760: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f764: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x35f764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f768: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35f768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35f76c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35f770: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35f770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f774: 0xc096234  jal         func_2588D0
    ctx->pc = 0x35F774u;
    SET_GPR_U32(ctx, 31, 0x35F77Cu);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x35F774u, 0x35F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F77Cu;
label_35f77c:
    // 0x35f77c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35f77cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f788: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35f788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35f78c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F794u;
}
