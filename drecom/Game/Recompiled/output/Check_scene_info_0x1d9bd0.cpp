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

// Function: Check_scene_info
// Address: 0x1d9bd0 - 0x1d9c20
void Check_scene_info_0x1d9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_scene_info_0x1d9bd0");
#endif

    ctx->pc = 0x1d9bd0u;

    // 0x1d9bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9bd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9bd8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d9bdc: 0x2470fd60  addiu       $s0, $v1, -0x2A0
    ctx->pc = 0x1d9bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966624));
    // 0x1d9be0: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x1d9be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CFD74u));
    // 0x1d9be4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d9be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d9be8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9BE8u;
    {
        const bool branch_taken_0x1d9be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9be8) {
            ctx->pc = 0x1D9BF8u;
            goto label_1d9bf8;
        }
    }
    ctx->pc = 0x1D9BF0u;
    // 0x1d9bf0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1d9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d9bf4: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x1d9bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
label_1d9bf8:
    // 0x1d9bf8: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x1d9bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1d9bfc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d9bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d9c00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9C00u;
    {
        const bool branch_taken_0x1d9c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c00) {
            ctx->pc = 0x1D9C10u;
            goto label_1d9c10;
        }
    }
    ctx->pc = 0x1D9C08u;
    // 0x1d9c08: 0x24037530  addiu       $v1, $zero, 0x7530
    ctx->pc = 0x1d9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x1d9c0c: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x1d9c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_1d9c10:
    // 0x1d9c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9c14: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d9c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d9c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9C20u;
}
