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

// Function: Screen_blur
// Address: 0x155fe0 - 0x15605c
void Screen_blur_0x155fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Screen_blur_0x155fe0");
#endif

    switch (ctx->pc) {
        case 0x155ff0u: goto label_155ff0;
        case 0x15602cu: goto label_15602c;
        case 0x15603cu: goto label_15603c;
        case 0x15604cu: goto label_15604c;
        default: break;
    }

    ctx->pc = 0x155fe0u;

    // 0x155fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155fe4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x155fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x155fe8: 0xc05575c  jal         func_155D70
    ctx->pc = 0x155FE8u;
    SET_GPR_U32(ctx, 31, 0x155FF0u);
    ctx->pc = 0x155D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D70u, 0x155FE8u, 0x155FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FF0u;
label_155ff0:
    // 0x155ff0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155ff4: 0x90234f11  lbu         $v1, 0x4F11($at)
    ctx->pc = 0x155ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F4F11u));
    // 0x155ff8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ffc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156000: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x156000u;
    {
        const bool branch_taken_0x156000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156000) {
            ctx->pc = 0x156044u;
            goto label_156044;
        }
    }
    ctx->pc = 0x156008u;
    // 0x156008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15600c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15600Cu;
    {
        const bool branch_taken_0x15600c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15600c) {
            ctx->pc = 0x156034u;
            goto label_156034;
        }
    }
    ctx->pc = 0x156014u;
    // 0x156014: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156014u;
    {
        const bool branch_taken_0x156014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156014) {
            ctx->pc = 0x156024u;
            goto label_156024;
        }
    }
    ctx->pc = 0x15601Cu;
    // 0x15601c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15601Cu;
    {
        const bool branch_taken_0x15601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15601c) {
            ctx->pc = 0x15604Cu;
            goto label_15604c;
        }
    }
    ctx->pc = 0x156024u;
label_156024:
    // 0x156024: 0xc055818  jal         func_156060
    ctx->pc = 0x156024u;
    SET_GPR_U32(ctx, 31, 0x15602Cu);
    ctx->pc = 0x156060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156060u, 0x156024u, 0x15602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15602Cu;
label_15602c:
    // 0x15602c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15602Cu;
    {
        const bool branch_taken_0x15602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15602c) {
            ctx->pc = 0x15604Cu;
            goto label_15604c;
        }
    }
    ctx->pc = 0x156034u;
label_156034:
    // 0x156034: 0xc0558b8  jal         func_1562E0
    ctx->pc = 0x156034u;
    SET_GPR_U32(ctx, 31, 0x15603Cu);
    ctx->pc = 0x1562E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562E0u, 0x156034u, 0x15603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15603Cu;
label_15603c:
    // 0x15603c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15603Cu;
    {
        const bool branch_taken_0x15603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15603c) {
            ctx->pc = 0x15604Cu;
            goto label_15604c;
        }
    }
    ctx->pc = 0x156044u;
label_156044:
    // 0x156044: 0xc055c50  jal         func_157140
    ctx->pc = 0x156044u;
    SET_GPR_U32(ctx, 31, 0x15604Cu);
    ctx->pc = 0x157140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157140u, 0x156044u, 0x15604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15604Cu;
label_15604c:
    // 0x15604c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15604cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156050: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x156050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x156054: 0x3e00008  jr          $ra
    ctx->pc = 0x156054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15605Cu;
}
