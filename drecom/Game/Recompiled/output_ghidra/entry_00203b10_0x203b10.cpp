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

// Function: entry_00203b10
// Address: 0x203b10 - 0x203b58
void entry_00203b10_0x203b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b10_0x203b10");
#endif

    ctx->pc = 0x203b10u;

    // 0x203b10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x203b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x203b14: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x203b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x203b18: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x203b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x203b1c: 0x1460fdc6  bnez        $v1, . + 4 + (-0x23A << 2)
    ctx->pc = 0x203B1Cu;
    {
        const bool branch_taken_0x203b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203b1c) {
            ctx->pc = 0x203238u;
            return;
        }
    }
    ctx->pc = 0x203B24u;
    // 0x203b24: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x203b24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203b28: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x203b28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203b2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x203b2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203b30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x203b30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203b34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x203b34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203b38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x203b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203b3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x203b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x203b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203b4c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x203b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x203b50: 0x3e00008  jr          $ra
    ctx->pc = 0x203B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203B58u;
}
