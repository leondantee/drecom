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

// Function: srp_id1d_type05
// Address: 0x2c2210 - 0x2c22bc
void srp_id1d_type05_0x2c2210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1d_type05_0x2c2210");
#endif

    ctx->pc = 0x2c2210u;

    // 0x2c2210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2214: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c2214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c2218: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c2218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c221c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c221cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2220: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2224: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c2224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c2228: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c2228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c222c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c222cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2230: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2234: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c2234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c2238: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c2238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c223c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c223cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2244: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c2244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c2248: 0x3c034268  lui         $v1, 0x4268
    ctx->pc = 0x2c2248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17000 << 16));
    // 0x2c224c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c224cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2254: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c2254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c2258: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c225c: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c225cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2260: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2264: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c2264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2268: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c2268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c226c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2270: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c2270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2274: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c2274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2278: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c227c: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c227cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2284: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2288: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c2288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c228c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2290: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c2290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2298: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c229c: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c229cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c22a0: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x2c22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x2c22a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c22a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c22a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c22ac: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c22acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c22b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c22b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c22b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C22B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C22B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C22BCu;
}
