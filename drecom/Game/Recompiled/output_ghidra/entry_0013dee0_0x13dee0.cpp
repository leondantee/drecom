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

// Function: entry_0013dee0
// Address: 0x13dee0 - 0x13df7c
void entry_0013dee0_0x13dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dee0_0x13dee0");
#endif

    ctx->pc = 0x13dee0u;

label_13dee0:
    // 0x13dee0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x13dee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13dee4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x13dee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13dee8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x13dee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x13deec: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x13deecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x13def0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x13def0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13def4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x13def4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13def8: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x13def8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x13defc: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x13defcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x13df00: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13df00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13df04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13df04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13df08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x13df08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13df0c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13df0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13df10: 0x1660fff3  bnez        $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x13DF10u;
    {
        const bool branch_taken_0x13df10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df10) {
            ctx->pc = 0x13DEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dee0;
        }
    }
    ctx->pc = 0x13DF18u;
    // 0x13df18: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x13df18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x13df1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x13df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13df20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13df24: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13df28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13df28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13df2c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x13df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13df30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13df34: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13df38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13df3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13df40: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x13df40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x13df44: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x13df44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x13df48: 0x16a0ffce  bnez        $s5, . + 4 + (-0x32 << 2)
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13DE84u;
            return;
        }
    }
    ctx->pc = 0x13DF50u;
    // 0x13df50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13df54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13df54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13df58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13df58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13df5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13df5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13df60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13df60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13df64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13df64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13df68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13df68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13df6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13df6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df70: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13df74: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DF7Cu;
}
