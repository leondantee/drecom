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

// Function: entry_0017b998
// Address: 0x17b998 - 0x17b9e8
void entry_0017b998_0x17b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b998_0x17b998");
#endif

    ctx->pc = 0x17b998u;

    // 0x17b998: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17b998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x17b99c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b9a0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b9a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b9a8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b9ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17b9acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17b9b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b9b4: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b9b4u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b9b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17b9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b9bc: 0x0  nop
    ctx->pc = 0x17b9bcu;
    // NOP
    // 0x17b9c0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x17B9C0u;
    {
        const bool branch_taken_0x17b9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b9c0) {
            ctx->pc = 0x17BA60u;
            return;
        }
    }
    ctx->pc = 0x17B9C8u;
    // 0x17b9c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b9cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b9d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b9d4: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x17b9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x17b9d8: 0x2e01005b  sltiu       $at, $s0, 0x5B
    ctx->pc = 0x17b9d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x17b9dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9DCu;
    {
        const bool branch_taken_0x17b9dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9dc) {
            ctx->pc = 0x17B9E8u;
            return;
        }
    }
    ctx->pc = 0x17B9E4u;
    // 0x17b9e4: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->pc = 0x17b9e8u;
}
