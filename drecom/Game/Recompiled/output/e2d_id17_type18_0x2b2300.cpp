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

// Function: e2d_id17_type18
// Address: 0x2b2300 - 0x2b237c
void e2d_id17_type18_0x2b2300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type18_0x2b2300");
#endif

    ctx->pc = 0x2b2300u;

    // 0x2b2300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2304: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b2304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b2308: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b2308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b230c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b230cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2310: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2314: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b2314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b2318: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b2318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b231c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b231cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2320: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2324: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b2324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b2328: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b2328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b232c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b232cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2330: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2334: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b2334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b2338: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b2338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b233c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b233cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2340: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2344: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b2344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b2348: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b2348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b234c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b234cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2350: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2354: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2358: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b235c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2360: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2364: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2368: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b236c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b236cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2370: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2374: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B237Cu;
}
