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

// Function: entry_002d6c7c
// Address: 0x2d6c7c - 0x2d6e3c
void entry_002d6c7c_0x2d6c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6c7c_0x2d6c7c");
#endif

    switch (ctx->pc) {
        case 0x2d6cb4u: goto label_2d6cb4;
        case 0x2d6cd8u: goto label_2d6cd8;
        case 0x2d6cfcu: goto label_2d6cfc;
        case 0x2d6d20u: goto label_2d6d20;
        case 0x2d6d44u: goto label_2d6d44;
        case 0x2d6d68u: goto label_2d6d68;
        case 0x2d6d8cu: goto label_2d6d8c;
        case 0x2d6db0u: goto label_2d6db0;
        case 0x2d6dd4u: goto label_2d6dd4;
        case 0x2d6e28u: goto label_2d6e28;
        default: break;
    }

    ctx->pc = 0x2d6c7cu;

    // 0x2d6c7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d6c80: 0x24428960  addiu       $v0, $v0, -0x76A0
    ctx->pc = 0x2d6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936928));
    // 0x2d6c84: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6c88: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d6c88u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398960u));
    // 0x2d6c8c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d6c90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c94: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6c98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c9c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2d6c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d6ca0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6ca4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6ca8: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6cac: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6CACu;
    SET_GPR_U32(ctx, 31, 0x2D6CB4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6CACu, 0x2D6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CB4u;
label_2d6cb4:
    // 0x2d6cb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6cb8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6cbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6cc0: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2d6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d6cc4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6cc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6ccc: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6cd0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6CD0u;
    SET_GPR_U32(ctx, 31, 0x2D6CD8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6CD0u, 0x2D6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CD8u;
label_2d6cd8:
    // 0x2d6cd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6cdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6ce0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ce4: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x2d6ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2d6ce8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6cec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6cf0: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6cf4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6CF4u;
    SET_GPR_U32(ctx, 31, 0x2D6CFCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6CF4u, 0x2D6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CFCu;
label_2d6cfc:
    // 0x2d6cfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d00: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d08: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x2d6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2d6d0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d10: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d14: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d18: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D18u;
    SET_GPR_U32(ctx, 31, 0x2D6D20u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D18u, 0x2D6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D20u;
label_2d6d20:
    // 0x2d6d20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d2c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2d6d30: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d34: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d38: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d3c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6D44u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D3Cu, 0x2D6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D44u;
label_2d6d44:
    // 0x2d6d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d48: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d50: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d6d54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d58: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d5c: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d60: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D60u;
    SET_GPR_U32(ctx, 31, 0x2D6D68u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D60u, 0x2D6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D68u;
label_2d6d68:
    // 0x2d6d68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d74: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x2d6d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x2d6d78: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d80: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d84: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D84u;
    SET_GPR_U32(ctx, 31, 0x2D6D8Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D84u, 0x2D6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D8Cu;
label_2d6d8c:
    // 0x2d6d8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d98: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x2d6d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2d6d9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6da0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6da4: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6da8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6DA8u;
    SET_GPR_U32(ctx, 31, 0x2D6DB0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6DA8u, 0x2D6DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DB0u;
label_2d6db0:
    // 0x2d6db0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6db4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6db8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6dbc: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x2d6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2d6dc0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6dc4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6dc8: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6dcc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6DCCu;
    SET_GPR_U32(ctx, 31, 0x2D6DD4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6DCCu, 0x2D6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DD4u;
label_2d6dd4:
    // 0x2d6dd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6dd8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d6dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d6ddc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6DDCu;
    {
        const bool branch_taken_0x2d6ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ddc) {
            ctx->pc = 0x2D6E3Cu;
            return;
        }
    }
    ctx->pc = 0x2D6DE4u;
    // 0x2d6de4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d6de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6dec: 0x0  nop
    ctx->pc = 0x2d6decu;
    // NOP
    // 0x2d6df0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d6df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d6df4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x2d6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x2d6df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6dfc: 0x0  nop
    ctx->pc = 0x2d6dfcu;
    // NOP
    // 0x2d6e00: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d6e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d6e04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e08: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6e0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e10: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d6e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d6e14: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6e18: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6e1c: 0x24478cd0  addiu       $a3, $v0, -0x7330
    ctx->pc = 0x2d6e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x2d6e20: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6E20u;
    SET_GPR_U32(ctx, 31, 0x2D6E28u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6E20u, 0x2D6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E28u;
label_2d6e28:
    // 0x2d6e28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6E28u;
    {
        const bool branch_taken_0x2d6e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e28) {
            ctx->pc = 0x2D6E3Cu;
            return;
        }
    }
    ctx->pc = 0x2D6E30u;
    // 0x2d6e30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6e34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e38: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d6e38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d6e3cu;
}
