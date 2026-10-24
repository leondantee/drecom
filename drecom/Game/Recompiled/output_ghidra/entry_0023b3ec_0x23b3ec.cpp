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

// Function: entry_0023b3ec
// Address: 0x23b3ec - 0x23b42c
void entry_0023b3ec_0x23b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b3ec_0x23b3ec");
#endif

    ctx->pc = 0x23b3ecu;

    // 0x23b3ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b3f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b3f4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x23b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x23b3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b3fc: 0x0  nop
    ctx->pc = 0x23b3fcu;
    // NOP
    // 0x23b400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b404: 0x0  nop
    ctx->pc = 0x23b404u;
    // NOP
    // 0x23b408: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B408u;
    {
        const bool branch_taken_0x23b408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b408) {
            ctx->pc = 0x23B42Cu;
            return;
        }
    }
    ctx->pc = 0x23B410u;
    // 0x23b410: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x23b410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x23b414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b418: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b41c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b420: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b424: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B424u;
    {
        const bool branch_taken_0x23b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b424) {
            ctx->pc = 0x23B43Cu;
            return;
        }
    }
    ctx->pc = 0x23B42Cu;
}
