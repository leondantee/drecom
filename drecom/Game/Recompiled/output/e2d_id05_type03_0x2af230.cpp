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

// Function: e2d_id05_type03
// Address: 0x2af230 - 0x2af2d0
void e2d_id05_type03_0x2af230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type03_0x2af230");
#endif

    ctx->pc = 0x2af230u;

    // 0x2af230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af234: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2af234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2af238: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af244: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2af244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2af248: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af24c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af24cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af254: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2af254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2af258: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af25c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af25cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af260: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af264: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2af264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2af268: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af26c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af270: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af274: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2af274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2af278: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2af278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2af27c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af27cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af280: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af284: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2af284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2af288: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2af288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2af28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af290: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af294: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af298: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2af298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af29c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af2a0: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af2a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af2a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af2ac: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2af2acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af2b0: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2af2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2af2b4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2af2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2af2b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af2bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af2c0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af2c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2af2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF2D0u;
}
