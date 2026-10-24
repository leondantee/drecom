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

// Function: entry_0037027c
// Address: 0x37027c - 0x3702d0
void entry_0037027c_0x37027c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037027c_0x37027c");
#endif

    ctx->pc = 0x37027cu;

    // 0x37027c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370280: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x370280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370284: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370288: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x37028c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x37028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x370290: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370290u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370294: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x370294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x370298: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370298u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x37029c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3702a0: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x3702a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x3702a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3702a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3702a8: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x3702a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x3702ac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3702acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3702b0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x3702b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3702b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3702b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3702b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3702b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3702bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3702bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3702c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3702c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3702c4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3702c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3702c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3702C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3702C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3702D0u;
}
