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

// Function: e2d_id05_type02
// Address: 0x2af190 - 0x2af230
void e2d_id05_type02_0x2af190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type02_0x2af190");
#endif

    ctx->pc = 0x2af190u;

    // 0x2af190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af194: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2af194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2af198: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af1a4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2af1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2af1a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af1ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af1b4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2af1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2af1b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af1bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af1c4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2af1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2af1c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af1cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af1d4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2af1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2af1d8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2af1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2af1dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af1e4: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2af1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2af1e8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2af1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2af1ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af1ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af1f4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af1f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2af1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af1fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af200: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af204: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af208: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af20c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2af20cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af210: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2af210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2af214: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2af214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2af218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af21c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af220: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af224: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2af224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af228: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF230u;
}
