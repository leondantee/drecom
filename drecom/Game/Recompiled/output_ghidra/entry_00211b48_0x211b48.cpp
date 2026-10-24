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

// Function: entry_00211b48
// Address: 0x211b48 - 0x211b88
void entry_00211b48_0x211b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211b48_0x211b48");
#endif

    ctx->pc = 0x211b48u;

    // 0x211b48: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x211b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211b4c: 0x1460ff98  bnez        $v1, . + 4 + (-0x68 << 2)
    ctx->pc = 0x211B4Cu;
    {
        const bool branch_taken_0x211b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211b4c) {
            ctx->pc = 0x2119B0u;
            return;
        }
    }
    ctx->pc = 0x211B54u;
    // 0x211b54: 0x7bbf00b0  lq          $ra, 0xB0($sp)
    ctx->pc = 0x211b54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x211b58: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x211b58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x211b5c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x211b5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211b60: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x211b60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211b64: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x211b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211b68: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x211b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211b6c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x211b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211b70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x211b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211b74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x211b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211b78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x211b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211b7c: 0x27bd0530  addiu       $sp, $sp, 0x530
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x211b80: 0x3e00008  jr          $ra
    ctx->pc = 0x211B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211B88u;
}
