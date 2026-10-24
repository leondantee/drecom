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

// Function: entry_00195f7c
// Address: 0x195f7c - 0x195fac
void entry_00195f7c_0x195f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195f7c_0x195f7c");
#endif

    ctx->pc = 0x195f7cu;

    // 0x195f7c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x195f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195f84: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x195f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195f88: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195f8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x195f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195f94: 0x0  nop
    ctx->pc = 0x195f94u;
    // NOP
    // 0x195f98: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x195F98u;
    {
        const bool branch_taken_0x195f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195f98) {
            ctx->pc = 0x195FACu;
            return;
        }
    }
    ctx->pc = 0x195FA0u;
    // 0x195fa0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195fa0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195fa4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x195FA4u;
    {
        const bool branch_taken_0x195fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fa4) {
            ctx->pc = 0x196018u;
            return;
        }
    }
    ctx->pc = 0x195FACu;
}
