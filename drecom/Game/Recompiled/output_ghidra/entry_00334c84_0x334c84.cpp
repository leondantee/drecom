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

// Function: entry_00334c84
// Address: 0x334c84 - 0x334d10
void entry_00334c84_0x334c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334c84_0x334c84");
#endif

    switch (ctx->pc) {
        case 0x334c9cu: goto label_334c9c;
        case 0x334cd0u: goto label_334cd0;
        default: break;
    }

    ctx->pc = 0x334c84u;

    // 0x334c84: 0x265e001c  addiu       $fp, $s2, 0x1C
    ctx->pc = 0x334c84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c88: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x334c88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x334c8c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x334c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x334c90: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x334c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c94: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C94u;
    SET_GPR_U32(ctx, 31, 0x334C9Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C94u, 0x334C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C9Cu;
label_334c9c:
    // 0x334c9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x334ca0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334ca4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334ca8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x334ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x334cac: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x334cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x334cb0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334cb4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x334cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x334cb8: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334cbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334cbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334cc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x334cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334cc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x334cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334cc8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334CC8u;
    SET_GPR_U32(ctx, 31, 0x334CD0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334CC8u, 0x334CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CD0u;
label_334cd0:
    // 0x334cd0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334cd4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x334cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x334cd8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x334cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x334cdc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x334cdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x334ce0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x334ce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x334ce4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x334ce4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x334ce8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x334ce8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x334cec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x334cecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334cf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x334cf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334cf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x334cf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x334cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334d04: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x334d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x334d08: 0x3e00008  jr          $ra
    ctx->pc = 0x334D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334D10u;
}
