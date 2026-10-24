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

// Function: entry_002c1f88
// Address: 0x2c1f88 - 0x2c1fc4
void entry_002c1f88_0x2c1f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c1f88_0x2c1f88");
#endif

    ctx->pc = 0x2c1f88u;

    // 0x2c1f88: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c1f8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c1f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c1f90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1f94: 0xa0640368  sb          $a0, 0x368($v1)
    ctx->pc = 0x2c1f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1f98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1f9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1fa0: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c1fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1fa4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2c1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2c1fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1fac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1fb0: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c1fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c1fb4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1fb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1fb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1FC4u;
}
