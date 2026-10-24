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

// Function: e2d_id5e_type00
// Address: 0x2b8980 - 0x2b89f4
void e2d_id5e_type00_0x2b8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5e_type00_0x2b8980");
#endif

    ctx->pc = 0x2b8980u;

    // 0x2b8980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8984: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8988: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b898c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b898cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8990: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8994: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8998: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b899c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b899cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b89a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b89a4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b89a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b89a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b89ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b89acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b89b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b89b4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b89b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b89b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b89bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b89bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b89c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b89c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b89c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b89c8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b89cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b89ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b89d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b89d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b89d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b89d8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b89dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b89dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b89e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b89e4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b89e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b89e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b89e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b89ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B89ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B89ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B89F4u;
}
