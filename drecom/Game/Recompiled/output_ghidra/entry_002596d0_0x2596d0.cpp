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

// Function: entry_002596d0
// Address: 0x2596d0 - 0x259740
void entry_002596d0_0x2596d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002596d0_0x2596d0");
#endif

    ctx->pc = 0x2596d0u;

    // 0x2596d0: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x2596d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x2596d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2596d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2596d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2596dc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2596dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2596e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2596e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2596e4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2596e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2596e8: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2596e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2596ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2596ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2596f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2596f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2596f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2596f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2596f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2596f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2596fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2596fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x259700: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x259700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x259704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259708: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x259708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25970c: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x25970Cu;
    {
        const bool branch_taken_0x25970c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25970c) {
            ctx->pc = 0x2595BCu;
            return;
        }
    }
    ctx->pc = 0x259714u;
    // 0x259714: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x259714u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259718: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x259718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25971c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25971cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259720: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25972c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25972cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259734: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x259734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x259738: 0x3e00008  jr          $ra
    ctx->pc = 0x259738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259740u;
}
