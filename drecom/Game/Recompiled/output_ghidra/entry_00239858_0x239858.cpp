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

// Function: entry_00239858
// Address: 0x239858 - 0x2398ac
void entry_00239858_0x239858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239858_0x239858");
#endif

    ctx->pc = 0x239858u;

    // 0x239858: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x23985c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239868: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23986c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23986cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239874: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x239874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239878: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x239878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23987c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23987cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239880: 0x0  nop
    ctx->pc = 0x239880u;
    // NOP
    // 0x239884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x239884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239888: 0x0  nop
    ctx->pc = 0x239888u;
    // NOP
    // 0x23988c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23988Cu;
    {
        const bool branch_taken_0x23988c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23988c) {
            ctx->pc = 0x2398ACu;
            return;
        }
    }
    ctx->pc = 0x239894u;
    // 0x239894: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x239894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x239898: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23989c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23989cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2398a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2398a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2398a8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2398a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x2398acu;
}
