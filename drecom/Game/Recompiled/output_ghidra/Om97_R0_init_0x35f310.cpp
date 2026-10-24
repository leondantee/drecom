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

// Function: Om97_R0_init
// Address: 0x35f310 - 0x35f378
void Om97_R0_init_0x35f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_R0_init_0x35f310");
#endif

    switch (ctx->pc) {
        case 0x35f33cu: goto label_35f33c;
        default: break;
    }

    ctx->pc = 0x35f310u;

    // 0x35f310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f314: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35f314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35f318: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35f318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35f31c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f320: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35f324: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35f328: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f32c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x35f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x35f330: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f334: 0xc075e9c  jal         func_1D7A70
    ctx->pc = 0x35F334u;
    SET_GPR_U32(ctx, 31, 0x35F33Cu);
    ctx->pc = 0x1D7A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7A70u, 0x35F334u, 0x35F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F33Cu;
label_35f33c:
    // 0x35f33c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f344: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35f344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35f348: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f34c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35f34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f354: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35f354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f358: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f35c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35f35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f360: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f364: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35f364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35f368: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35f368u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f36c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35f36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35f370: 0x3e00008  jr          $ra
    ctx->pc = 0x35F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F378u;
}
