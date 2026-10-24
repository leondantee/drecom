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

// Function: e2d_id4b_type00
// Address: 0x2b64c0 - 0x2b6550
void e2d_id4b_type00_0x2b64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id4b_type00_0x2b64c0");
#endif

    ctx->pc = 0x2b64c0u;

    // 0x2b64c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b64c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b64c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b64c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b64cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b64d0: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b64d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b64d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b64d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b64d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b64d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b64dc: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b64dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b64e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b64e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b64e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b64e8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b64e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b64ec: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b64f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b64f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b64f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b64f8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b64f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b64fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6500: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6504: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b6504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6508: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b6508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b650c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6510: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b6510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6514: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2b6514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2b6518: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b6518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b651c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b651cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6520: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6524: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2b6524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2b6528: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2b6528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2b652c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b652cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6530: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6534: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b653c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6540: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b6540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b6544: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6548: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6550u;
}
