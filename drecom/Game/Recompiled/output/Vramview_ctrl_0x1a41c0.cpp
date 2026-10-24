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

// Function: Vramview_ctrl
// Address: 0x1a41c0 - 0x1a4224
void Vramview_ctrl_0x1a41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vramview_ctrl_0x1a41c0");
#endif

    switch (ctx->pc) {
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4214u: goto label_1a4214;
        default: break;
    }

    ctx->pc = 0x1a41c0u;

    // 0x1a41c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a41c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a41c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a41c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a41cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a41d0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a41d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a41d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a41d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a41d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a41dc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A41DCu;
    {
        const bool branch_taken_0x1a41dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a41dc) {
            ctx->pc = 0x1A4208u;
            goto label_1a4208;
        }
    }
    ctx->pc = 0x1A41E4u;
    // 0x1a41e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A41E4u;
    {
        const bool branch_taken_0x1a41e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a41e4) {
            ctx->pc = 0x1A41F4u;
            goto label_1a41f4;
        }
    }
    ctx->pc = 0x1A41ECu;
    // 0x1a41ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A41ECu;
    {
        const bool branch_taken_0x1a41ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a41ec) {
            ctx->pc = 0x1A4214u;
            goto label_1a4214;
        }
    }
    ctx->pc = 0x1A41F4u;
label_1a41f4:
    // 0x1a41f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a41f8: 0xc06908c  jal         func_1A4230
    ctx->pc = 0x1A41F8u;
    SET_GPR_U32(ctx, 31, 0x1A4200u);
    ctx->pc = 0x1A4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4230u, 0x1A41F8u, 0x1A4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4200u;
label_1a4200:
    // 0x1a4200: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4200u;
    {
        const bool branch_taken_0x1a4200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4200) {
            ctx->pc = 0x1A4214u;
            goto label_1a4214;
        }
    }
    ctx->pc = 0x1A4208u;
label_1a4208:
    // 0x1a4208: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a420c: 0xc068b64  jal         func_1A2D90
    ctx->pc = 0x1A420Cu;
    SET_GPR_U32(ctx, 31, 0x1A4214u);
    ctx->pc = 0x1A2D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D90u, 0x1A420Cu, 0x1A4214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4214u;
label_1a4214:
    // 0x1a4214: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a4214u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4218: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a4218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a421c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A421Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4224u;
}
