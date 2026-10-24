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

// Function: total_check
// Address: 0x17e3e0 - 0x17e43c
void total_check_0x17e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("total_check_0x17e3e0");
#endif

    ctx->pc = 0x17e3e0u;

    // 0x17e3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e3e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x17e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x17e3e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e3ec: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x17e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x17e3f0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E3F0u;
    {
        const bool branch_taken_0x17e3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e3f0) {
            ctx->pc = 0x17E40Cu;
            goto label_17e40c;
        }
    }
    ctx->pc = 0x17E3F8u;
    // 0x17e3f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e3fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e400: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x17e400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
    // 0x17e404: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e408: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x17e408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_17e40c:
    // 0x17e40c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e410: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x17e414: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E414u;
    {
        const bool branch_taken_0x17e414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e414) {
            ctx->pc = 0x17E430u;
            goto label_17e430;
        }
    }
    ctx->pc = 0x17E41Cu;
    // 0x17e41c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e420: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e424: 0xac640094  sw          $a0, 0x94($v1)
    ctx->pc = 0x17e424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
    // 0x17e428: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e42c: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x17e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
label_17e430:
    // 0x17e430: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e434: 0x3e00008  jr          $ra
    ctx->pc = 0x17E434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E43Cu;
}
