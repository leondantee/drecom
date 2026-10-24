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

// Function: entry_001b4710
// Address: 0x1b4710 - 0x1b4758
void entry_001b4710_0x1b4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4710_0x1b4710");
#endif

    ctx->pc = 0x1b4710u;

    // 0x1b4710: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b4714: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x1b4714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4718: 0x1440fe93  bnez        $v0, . + 4 + (-0x16D << 2)
    ctx->pc = 0x1B4718u;
    {
        const bool branch_taken_0x1b4718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4718) {
            ctx->pc = 0x1B4168u;
            return;
        }
    }
    ctx->pc = 0x1B4720u;
    // 0x1b4720: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x1b4720u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b4724: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b4724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4728: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b4728u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b472c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b472cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4730: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b4730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4734: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b4734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4738: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b4738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b473c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b473cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b474c: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x1b474cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1b4750: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4758u;
}
