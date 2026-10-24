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

// Function: entry_00239694
// Address: 0x239694 - 0x2396e8
void entry_00239694_0x239694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239694_0x239694");
#endif

    ctx->pc = 0x239694u;

    // 0x239694: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x239694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x239698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23969c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2396a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2396a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2396a8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2396a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2396ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396b0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2396b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2396b4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2396b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2396b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2396bc: 0x0  nop
    ctx->pc = 0x2396bcu;
    // NOP
    // 0x2396c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2396c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2396c4: 0x0  nop
    ctx->pc = 0x2396c4u;
    // NOP
    // 0x2396c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2396C8u;
    {
        const bool branch_taken_0x2396c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2396c8) {
            ctx->pc = 0x2396E8u;
            return;
        }
    }
    ctx->pc = 0x2396D0u;
    // 0x2396d0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2396d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2396d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2396d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2396d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2396d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2396dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2396e4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2396e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x2396e8u;
}
