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

// Function: entry_001afab8
// Address: 0x1afab8 - 0x1afb04
void entry_001afab8_0x1afab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afab8_0x1afab8");
#endif

    ctx->pc = 0x1afab8u;

    // 0x1afab8: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1afab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1afabc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1afabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1afac0: 0xafa404a4  sw          $a0, 0x4A4($sp)
    ctx->pc = 0x1afac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 4));
    // 0x1afac4: 0x97a304ae  lhu         $v1, 0x4AE($sp)
    ctx->pc = 0x1afac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1198)));
    // 0x1afac8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afacc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1afaccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afad0: 0x1460ff50  bnez        $v1, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x1AFAD0u;
    {
        const bool branch_taken_0x1afad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afad0) {
            ctx->pc = 0x1AF814u;
            return;
        }
    }
    ctx->pc = 0x1AFAD8u;
    // 0x1afad8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1afad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1afadc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1afadcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afae0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1afae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afae4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1afae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afae8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1afae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afaec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1afaecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afaf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afaf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1afaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afaf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1afaf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afafc: 0x27bd04c0  addiu       $sp, $sp, 0x4C0
    ctx->pc = 0x1afafcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1afb00: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFB08u;
}
