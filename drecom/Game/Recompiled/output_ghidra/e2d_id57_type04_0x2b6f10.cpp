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

// Function: e2d_id57_type04
// Address: 0x2b6f10 - 0x2b6f94
void e2d_id57_type04_0x2b6f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type04_0x2b6f10");
#endif

    ctx->pc = 0x2b6f10u;

    // 0x2b6f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6f14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6f18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6f20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f24: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6f28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6f30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f34: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6f38: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6f40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f44: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6f48: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b6f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6f50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f54: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6f58: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b6f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b6f5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6f60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f64: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6f68: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b6f6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b6f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b6f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6f74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f78: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b6f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b6f7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6f80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f84: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b6f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6f88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6F94u;
}
