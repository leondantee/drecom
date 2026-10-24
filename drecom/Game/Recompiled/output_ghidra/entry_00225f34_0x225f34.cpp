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

// Function: entry_00225f34
// Address: 0x225f34 - 0x225f88
void entry_00225f34_0x225f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225f34_0x225f34");
#endif

    ctx->pc = 0x225f34u;

    // 0x225f34: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x225f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x225f38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225f48: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x225f4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f50: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x225f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225f54: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x225f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x225f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f5c: 0x0  nop
    ctx->pc = 0x225f5cu;
    // NOP
    // 0x225f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225f64: 0x0  nop
    ctx->pc = 0x225f64u;
    // NOP
    // 0x225f68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x225F68u;
    {
        const bool branch_taken_0x225f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225f68) {
            ctx->pc = 0x225F88u;
            return;
        }
    }
    ctx->pc = 0x225F70u;
    // 0x225f70: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x225f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x225f74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225f84: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x225f88u;
}
