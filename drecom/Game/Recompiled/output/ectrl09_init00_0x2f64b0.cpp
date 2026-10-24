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

// Function: ectrl09_init00
// Address: 0x2f64b0 - 0x2f64e4
void ectrl09_init00_0x2f64b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl09_init00_0x2f64b0");
#endif

    ctx->pc = 0x2f64b0u;

    // 0x2f64b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f64b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f64b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2f64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2f64b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f64b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f64bc: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f64bcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f64c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f64c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f64c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f64c8: 0xa4640100  sh          $a0, 0x100($v1)
    ctx->pc = 0x2f64c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 4));
    // 0x2f64cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f64d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f64d4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2f64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2f64d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2f64d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f64dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F64DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F64DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F64E4u;
}
