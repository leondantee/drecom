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

// Function: srp_id0c_type00
// Address: 0x2c0710 - 0x2c0764
void srp_id0c_type00_0x2c0710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id0c_type00_0x2c0710");
#endif

    ctx->pc = 0x2c0710u;

    // 0x2c0710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0714: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c0714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c0718: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c071c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c071cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0720: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0724: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c0724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c0728: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c072c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c072cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0730: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0734: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c0734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c0738: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c073c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c073cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0740: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0744: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c0744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c0748: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c074c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c074cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0750: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0754: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c0754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c0758: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c0758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c075c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C075Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C075Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0764u;
}
