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

// Function: Pl_upper_rotation
// Address: 0x15c9d0 - 0x15ca88
void Pl_upper_rotation_0x15c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_upper_rotation_0x15c9d0");
#endif

    ctx->pc = 0x15c9d0u;

    // 0x15c9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15c9d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15c9d8: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x15c9d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15c9dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c9e0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15c9e4: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x15c9e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x15c9e8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15c9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15c9ec: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x15c9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c9f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c9f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c9f8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15c9fc: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x15c9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x15ca00: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15ca04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15ca04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ca08: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15ca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15ca0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ca10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca14: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15ca18: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x15ca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x15ca1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ca1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ca20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca24: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15ca28: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x15ca28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x15ca2c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca30: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15ca34: 0x94830460  lhu         $v1, 0x460($a0)
    ctx->pc = 0x15ca34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x15ca38: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15ca38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15ca3c: 0xa4830460  sh          $v1, 0x460($a0)
    ctx->pc = 0x15ca3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1120), (uint16_t)GPR_U32(ctx, 3));
    // 0x15ca40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ca40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ca44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca48: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15ca4c: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x15ca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x15ca50: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15ca54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15ca54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ca58: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ca5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15ca5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ca60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca64: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15ca68: 0xe4600440  swc1        $f0, 0x440($v1)
    ctx->pc = 0x15ca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1088), bits); }
    // 0x15ca6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ca6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ca70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca74: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15ca78: 0xe4600444  swc1        $f0, 0x444($v1)
    ctx->pc = 0x15ca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1092), bits); }
    // 0x15ca7c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15ca7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15ca80: 0x3e00008  jr          $ra
    ctx->pc = 0x15CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CA88u;
}
