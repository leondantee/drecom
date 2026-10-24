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

// Function: e2d_id17_type1e
// Address: 0x2b2530 - 0x2b25ac
void e2d_id17_type1e_0x2b2530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type1e_0x2b2530");
#endif

    ctx->pc = 0x2b2530u;

    // 0x2b2530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2534: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b2534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b2538: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b2538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b253c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b253cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2540: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2544: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b2544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b2548: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b2548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b254c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b254cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2550: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2554: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b2554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b2558: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b2558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b255c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b255cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2560: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2564: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b2564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b2568: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b2568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b256c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b256cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2570: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2574: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b2574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b2578: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b2578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b257c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b257cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2580: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2584: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2588: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b258c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2590: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2594: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2598: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b259c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b259cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b25a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b25a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B25A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B25A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B25ACu;
}
