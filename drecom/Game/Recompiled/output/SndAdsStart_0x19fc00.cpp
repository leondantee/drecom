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

// Function: SndAdsStart
// Address: 0x19fc00 - 0x19fc5c
void SndAdsStart_0x19fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndAdsStart_0x19fc00");
#endif

    switch (ctx->pc) {
        case 0x19fc2cu: goto label_19fc2c;
        case 0x19fc34u: goto label_19fc34;
        case 0x19fc4cu: goto label_19fc4c;
        default: break;
    }

    ctx->pc = 0x19fc00u;

    // 0x19fc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fc04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19fc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19fc08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19fc0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19fc10: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x19fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19fc14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19fc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19fc18: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19FC18u;
    {
        const bool branch_taken_0x19fc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc18) {
            ctx->pc = 0x19FC4Cu;
            goto label_19fc4c;
        }
    }
    ctx->pc = 0x19FC20u;
    // 0x19fc20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fc24: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19FC24u;
    SET_GPR_U32(ctx, 31, 0x19FC2Cu);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19FC24u, 0x19FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC2Cu;
label_19fc2c:
    // 0x19fc2c: 0xc0ce648  jal         func_339920
    ctx->pc = 0x19FC2Cu;
    SET_GPR_U32(ctx, 31, 0x19FC34u);
    ctx->pc = 0x339920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339920u, 0x19FC2Cu, 0x19FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC34u;
label_19fc34:
    // 0x19fc34: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FC34u;
    {
        const bool branch_taken_0x19fc34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19fc34) {
            ctx->pc = 0x19FC4Cu;
            goto label_19fc4c;
        }
    }
    ctx->pc = 0x19FC3Cu;
    // 0x19fc3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x19fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x19fc40: 0x2444ef20  addiu       $a0, $v0, -0x10E0
    ctx->pc = 0x19fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962976));
    // 0x19fc44: 0xc046760  jal         func_119D80
    ctx->pc = 0x19FC44u;
    SET_GPR_U32(ctx, 31, 0x19FC4Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x19FC4Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19FC4Cu) { return; }
    ctx->pc = 0x19FC4Cu;
label_19fc4c:
    // 0x19fc4c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19fc4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19fc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19fc54: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FC5Cu;
}
