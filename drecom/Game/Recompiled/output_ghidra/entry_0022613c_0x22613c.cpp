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

// Function: entry_0022613c
// Address: 0x22613c - 0x226190
void entry_0022613c_0x22613c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022613c_0x22613c");
#endif

    ctx->pc = 0x22613cu;

    // 0x22613c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x22613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x226140: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226148: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22614c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226150: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x226150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x226154: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226158: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x226158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22615c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x22615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x226160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226164: 0x0  nop
    ctx->pc = 0x226164u;
    // NOP
    // 0x226168: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22616c: 0x0  nop
    ctx->pc = 0x22616cu;
    // NOP
    // 0x226170: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x226170u;
    {
        const bool branch_taken_0x226170 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226170) {
            ctx->pc = 0x226190u;
            return;
        }
    }
    ctx->pc = 0x226178u;
    // 0x226178: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22617c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226184: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226188: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22618c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x226190u;
}
