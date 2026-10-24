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

// Function: entry_001afc98
// Address: 0x1afc98 - 0x1afcfc
void entry_001afc98_0x1afc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc98_0x1afc98");
#endif

    ctx->pc = 0x1afc98u;

    // 0x1afc98: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1afc9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1afc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1afca0: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1afca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1afca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1afca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1afca8: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1afca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afcac: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1AFCACu;
    {
        const bool branch_taken_0x1afcac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afcac) {
            ctx->pc = 0x1AFBD8u;
            return;
        }
    }
    ctx->pc = 0x1AFCB4u;
    // 0x1afcb4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1afcb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1afcb8: 0x97a3015e  lhu         $v1, 0x15E($sp)
    ctx->pc = 0x1afcb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
    // 0x1afcbc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afcc0: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1afcc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afcc4: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1AFCC4u;
    {
        const bool branch_taken_0x1afcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afcc4) {
            ctx->pc = 0x1AFB88u;
            return;
        }
    }
    ctx->pc = 0x1AFCCCu;
    // 0x1afccc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1afcccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1afcd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1afcd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afcd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1afcd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afcd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1afcd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afcdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1afcdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afce0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1afce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1afce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afcec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1afcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afcf0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x1afcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1afcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFCFCu;
}
