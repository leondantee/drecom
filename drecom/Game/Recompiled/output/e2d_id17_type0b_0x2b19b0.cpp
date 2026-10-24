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

// Function: e2d_id17_type0b
// Address: 0x2b19b0 - 0x2b1a2c
void e2d_id17_type0b_0x2b19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type0b_0x2b19b0");
#endif

    ctx->pc = 0x2b19b0u;

    // 0x2b19b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b19b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b19b8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b19bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b19bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b19c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b19c4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b19c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b19c8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2b19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2b19cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b19ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b19d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b19d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b19d4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b19d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b19d8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b19dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b19dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b19e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b19e4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b19e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b19e8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b19ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b19ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b19f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b19f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b19f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b19f8: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2b19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2b19fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b19fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1a08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1a0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a10: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b1a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1a14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b1a18: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1a1c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b1a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1a20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1A2Cu;
}
