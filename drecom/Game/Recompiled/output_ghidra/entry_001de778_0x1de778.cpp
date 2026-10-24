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

// Function: entry_001de778
// Address: 0x1de778 - 0x1de7d0
void entry_001de778_0x1de778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de778_0x1de778");
#endif

    ctx->pc = 0x1de778u;

    // 0x1de778: 0x26f70090  addiu       $s7, $s7, 0x90
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x1de77c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1de77cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1de780: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1de780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1de784: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x1de784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1de788: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1de788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x1de78c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1de790: 0xa3202b  sltu        $a0, $a1, $v1
    ctx->pc = 0x1de790u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1de794: 0x1480fe83  bnez        $a0, . + 4 + (-0x17D << 2)
    ctx->pc = 0x1DE794u;
    {
        const bool branch_taken_0x1de794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de794) {
            ctx->pc = 0x1DE1A4u;
            return;
        }
    }
    ctx->pc = 0x1DE79Cu;
    // 0x1de79c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1de79cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1de7a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1de7a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1de7a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1de7a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1de7a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1de7a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de7ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1de7acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de7b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1de7b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1de7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1de7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de7c4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1de7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1de7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7D0u;
}
