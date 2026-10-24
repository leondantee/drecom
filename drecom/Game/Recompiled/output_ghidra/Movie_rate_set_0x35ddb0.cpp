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

// Function: Movie_rate_set
// Address: 0x35ddb0 - 0x35de08
void Movie_rate_set_0x35ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_rate_set_0x35ddb0");
#endif

    ctx->pc = 0x35ddb0u;

    // 0x35ddb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ddb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x35ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x35ddb8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x35ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x35ddbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x35ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ddc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35DDC0u;
    {
        const bool branch_taken_0x35ddc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ddc0) {
            ctx->pc = 0x35DDD0u;
            goto label_35ddd0;
        }
    }
    ctx->pc = 0x35DDC8u;
    // 0x35ddc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ddcc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x35ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_35ddd0:
    // 0x35ddd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x35ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ddd4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x35ddd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35ddd8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x35ddd8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x35dddc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x35dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dde0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x35dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35dde4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35dde8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35ddec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x35ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x35ddf0: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x35ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x35ddf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35ddf8: 0xa465009c  sh          $a1, 0x9C($v1)
    ctx->pc = 0x35ddf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 156), (uint16_t)GPR_U32(ctx, 5));
    // 0x35ddfc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35ddfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35de00: 0x3e00008  jr          $ra
    ctx->pc = 0x35DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DE08u;
}
