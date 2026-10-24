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

// Function: e2d_id63_type04
// Address: 0x2b9f50 - 0x2ba014
void e2d_id63_type04_0x2b9f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id63_type04_0x2b9f50");
#endif

    ctx->pc = 0x2b9f50u;

    // 0x2b9f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9f54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9f58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9f5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f60: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2b9f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9f64: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b9f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9f6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f70: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9f74: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9f7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f80: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9f84: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9f8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f90: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9f94: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9f9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9fa0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9fa4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9fac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9fb0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9fb4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b9fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9fbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9fc0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b9fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b9fc4: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b9fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9fcc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9fd0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b9fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b9fd4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9fd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9fdc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9fe0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b9fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b9fe4: 0x3c0342a8  lui         $v1, 0x42A8
    ctx->pc = 0x2b9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17064 << 16));
    // 0x2b9fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9fec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ff0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2b9ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2b9ff4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b9ff8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b9ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b9ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba000: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba004: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2ba004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2ba008: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ba00c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA014u;
}
