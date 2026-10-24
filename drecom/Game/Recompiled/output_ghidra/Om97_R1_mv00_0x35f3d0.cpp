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

// Function: Om97_R1_mv00
// Address: 0x35f3d0 - 0x35f3fc
void Om97_R1_mv00_0x35f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_R1_mv00_0x35f3d0");
#endif

    ctx->pc = 0x35f3d0u;

    // 0x35f3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f3d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35f3d8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x35f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x35f3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f3e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x35f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f3e4: 0xe46012e4  swc1        $f0, 0x12E4($v1)
    ctx->pc = 0x35f3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4836), bits); }
    // 0x35f3e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x35f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f3ec: 0xac6012a8  sw          $zero, 0x12A8($v1)
    ctx->pc = 0x35f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4776), GPR_U32(ctx, 0));
    // 0x35f3f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35f3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35F3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F3FCu;
}
