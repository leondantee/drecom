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

// Function: entry_0013ddc8
// Address: 0x13ddc8 - 0x13de40
void entry_0013ddc8_0x13ddc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ddc8_0x13ddc8");
#endif

    ctx->pc = 0x13ddc8u;

label_13ddc8:
    // 0x13ddc8: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x13ddc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13ddcc: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x13ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x13ddd0: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x13ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x13ddd4: 0xae120064  sw          $s2, 0x64($s0)
    ctx->pc = 0x13ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 18));
    // 0x13ddd8: 0xae130074  sw          $s3, 0x74($s0)
    ctx->pc = 0x13ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 19));
    // 0x13dddc: 0xae140084  sw          $s4, 0x84($s0)
    ctx->pc = 0x13dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 20));
    // 0x13dde0: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x13dde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x13dde4: 0x26520330  addiu       $s2, $s2, 0x330
    ctx->pc = 0x13dde4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x13dde8: 0x26730110  addiu       $s3, $s3, 0x110
    ctx->pc = 0x13dde8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    // 0x13ddec: 0x26940110  addiu       $s4, $s4, 0x110
    ctx->pc = 0x13ddecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x13ddf0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x13ddf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x13ddf4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x13ddf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x13ddf8: 0x16c0fff3  bnez        $s6, . + 4 + (-0xD << 2)
    ctx->pc = 0x13DDF8u;
    {
        const bool branch_taken_0x13ddf8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ddf8) {
            ctx->pc = 0x13DDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ddc8;
        }
    }
    ctx->pc = 0x13DE00u;
    // 0x13de00: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x13de00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x13de04: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x13de04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x13de08: 0x16e0ffd4  bnez        $s7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x13DE08u;
    {
        const bool branch_taken_0x13de08 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x13de08) {
            ctx->pc = 0x13DD5Cu;
            return;
        }
    }
    ctx->pc = 0x13DE10u;
    // 0x13de10: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13de10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13de14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13de14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13de18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13de18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13de1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13de1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13de20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13de20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13de24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13de24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13de28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13de28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13de2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13de2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13de30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13de30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13de34: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x13de34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13de38: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE40u;
}
