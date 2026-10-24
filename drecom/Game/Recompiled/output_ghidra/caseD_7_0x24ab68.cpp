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

// Function: caseD_7
// Address: 0x24ab68 - 0x24abb0
void caseD_7_0x24ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x24ab68");
#endif

    ctx->pc = 0x24ab68u;

    // 0x24ab68: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x24ab68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24ab6c: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x24ab6cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24ab70: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x24ab70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x24ab74: 0x1460f9f3  bnez        $v1, . + 4 + (-0x60D << 2)
    ctx->pc = 0x24AB74u;
    {
        const bool branch_taken_0x24ab74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab74) {
            ctx->pc = 0x249344u;
            return;
        }
    }
    ctx->pc = 0x24AB7Cu;
    // 0x24ab7c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x24ab7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24ab80: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24ab80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24ab84: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24ab84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24ab88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24ab88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24ab8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24ab8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24ab90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24ab90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24ab94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24ab94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ab98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24ab98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ab9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24ab9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24aba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24aba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aba4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0
    ctx->pc = 0x24aba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x24aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x24ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ABB0u;
}
