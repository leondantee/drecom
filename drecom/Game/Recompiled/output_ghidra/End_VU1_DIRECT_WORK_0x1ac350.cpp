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

// Function: End_VU1_DIRECT_WORK
// Address: 0x1ac350 - 0x1ac3a8
void End_VU1_DIRECT_WORK_0x1ac350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End_VU1_DIRECT_WORK_0x1ac350");
#endif

    ctx->pc = 0x1ac350u;

    // 0x1ac350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac354: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1ac354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1ac358: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac35c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ac35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ac360: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac364: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ac364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1ac368: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ac368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ac36c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac370: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1ac370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ac374: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1ac374u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1ac378: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac37c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1ac37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ac380: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ac380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ac384: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ac384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ac388: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x1ac388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x1ac38c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac390: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1ac390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ac394: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1ac394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ac398: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ac398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1ac39c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ac39cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC3A8u;
}
