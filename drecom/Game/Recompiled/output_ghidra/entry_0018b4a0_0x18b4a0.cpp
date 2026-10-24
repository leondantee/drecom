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

// Function: entry_0018b4a0
// Address: 0x18b4a0 - 0x18b4e0
void entry_0018b4a0_0x18b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b4a0_0x18b4a0");
#endif

    ctx->pc = 0x18b4a0u;

    // 0x18b4a0: 0x2de182b  sltu        $v1, $s6, $fp
    ctx->pc = 0x18b4a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x18b4a4: 0x1460ff1c  bnez        $v1, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x18B4A4u;
    {
        const bool branch_taken_0x18b4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b4a4) {
            ctx->pc = 0x18B118u;
            return;
        }
    }
    ctx->pc = 0x18B4ACu;
    // 0x18b4ac: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x18b4acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18b4b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18b4b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18b4b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18b4b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b4b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b4b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b4bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b4bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b4c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b4c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b4c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b4c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b4cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b4d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b4d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18b4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18B4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B4E0u;
}
