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

// Function: entry_001b0a38
// Address: 0x1b0a38 - 0x1b0a8c
void entry_001b0a38_0x1b0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0a38_0x1b0a38");
#endif

    ctx->pc = 0x1b0a38u;

    // 0x1b0a38: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1b0a3c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b0a40: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1b0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0a44: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b0a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b0a48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0a4c: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1b0a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0a50: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1B0A50u;
    {
        const bool branch_taken_0x1b0a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a50) {
            ctx->pc = 0x1B0948u;
            return;
        }
    }
    ctx->pc = 0x1B0A58u;
    // 0x1b0a58: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b0a58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0a5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b0a5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0a60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0a60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0a64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0a64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0a68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0a6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0a70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0a80: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1b0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0A8Cu;
}
