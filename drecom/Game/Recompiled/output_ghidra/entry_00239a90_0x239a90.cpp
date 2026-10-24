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

// Function: entry_00239a90
// Address: 0x239a90 - 0x239ae4
void entry_00239a90_0x239a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239a90_0x239a90");
#endif

    ctx->pc = 0x239a90u;

    // 0x239a90: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x239a94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239aa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239aa4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239aa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239aac: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x239aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239ab0: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x239ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x239ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ab8: 0x0  nop
    ctx->pc = 0x239ab8u;
    // NOP
    // 0x239abc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x239abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239ac0: 0x0  nop
    ctx->pc = 0x239ac0u;
    // NOP
    // 0x239ac4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x239AC4u;
    {
        const bool branch_taken_0x239ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x239ac4) {
            ctx->pc = 0x239AE4u;
            return;
        }
    }
    ctx->pc = 0x239ACCu;
    // 0x239acc: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x239accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x239ad0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ae0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x239ae4u;
}
