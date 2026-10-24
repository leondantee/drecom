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

// Function: entry_002ba930
// Address: 0x2ba930 - 0x2ba960
void entry_002ba930_0x2ba930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ba930_0x2ba930");
#endif

    ctx->pc = 0x2ba930u;

    // 0x2ba930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ba930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba938: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2ba938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba93c: 0x3c033ed7  lui         $v1, 0x3ED7
    ctx->pc = 0x2ba93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16087 << 16));
    // 0x2ba940: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x2ba940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x2ba944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba948: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba94c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2ba94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2ba950: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ba950u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba954: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ba954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba958: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA960u;
}
