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

// Function: Blur_st_ed_check
// Address: 0x155f70 - 0x155fd4
void Blur_st_ed_check_0x155f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Blur_st_ed_check_0x155f70");
#endif

    ctx->pc = 0x155f70u;

    // 0x155f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155f74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x155f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x155f78: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x155f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x155f7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x155f80: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x155f84: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155f88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x155f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x155f8c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F8Cu;
    {
        const bool branch_taken_0x155f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155f8c) {
            ctx->pc = 0x155FB4u;
            goto label_155fb4;
        }
    }
    ctx->pc = 0x155F94u;
    // 0x155f94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x155f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x155f98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x155f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x155f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x155fa0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x155fa4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155fa8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x155fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x155fac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155FACu;
    {
        const bool branch_taken_0x155fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155fac) {
            ctx->pc = 0x155FC8u;
            goto label_155fc8;
        }
    }
    ctx->pc = 0x155FB4u;
label_155fb4:
    // 0x155fb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x155fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155fb8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x155fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x155fbc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x155fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x155fc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155fc4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x155fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_155fc8:
    // 0x155fc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x155fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x155FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155FD4u;
}
