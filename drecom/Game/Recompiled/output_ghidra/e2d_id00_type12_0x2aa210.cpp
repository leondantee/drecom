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

// Function: e2d_id00_type12
// Address: 0x2aa210 - 0x2aa290
void e2d_id00_type12_0x2aa210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type12_0x2aa210");
#endif

    ctx->pc = 0x2aa210u;

    // 0x2aa210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa214: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2aa214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2aa218: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2aa218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2aa21c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa220: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa224: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aa224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aa228: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2aa228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa22c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa230: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2aa230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa234: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2aa234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2aa238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa23c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa240: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2aa240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2aa244: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2aa244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2aa248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa24c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa250: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2aa250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2aa254: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2aa254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2aa258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa25c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa260: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2aa260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2aa264: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x2aa264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
    // 0x2aa268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa26c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa270: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2aa270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2aa274: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2aa274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa27c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa280: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2aa280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2aa284: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aa284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa288: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA290u;
}
