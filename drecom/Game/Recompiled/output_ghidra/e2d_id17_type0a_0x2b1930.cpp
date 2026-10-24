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

// Function: e2d_id17_type0a
// Address: 0x2b1930 - 0x2b19ac
void e2d_id17_type0a_0x2b1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type0a_0x2b1930");
#endif

    ctx->pc = 0x2b1930u;

    // 0x2b1930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1934: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1938: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b1938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b193c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b193cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1940: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1944: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1948: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b1948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b194c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b194cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1950: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1954: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1958: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b1958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b195c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b195cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1960: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1964: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1968: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b1968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b196c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b196cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1970: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1974: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b1978: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b1978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b197c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b197cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1980: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1984: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1988: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b198c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1990: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b1990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1994: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b1994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b1998: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b199c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b199cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b19a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b19a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b19a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B19A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B19A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B19ACu;
}
