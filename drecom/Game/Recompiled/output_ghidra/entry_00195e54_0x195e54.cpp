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

// Function: entry_00195e54
// Address: 0x195e54 - 0x195e84
void entry_00195e54_0x195e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195e54_0x195e54");
#endif

    ctx->pc = 0x195e54u;

    // 0x195e54: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x195e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e58: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195e5c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x195e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195e64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x195e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195e6c: 0x0  nop
    ctx->pc = 0x195e6cu;
    // NOP
    // 0x195e70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x195E70u;
    {
        const bool branch_taken_0x195e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195e70) {
            ctx->pc = 0x195E84u;
            return;
        }
    }
    ctx->pc = 0x195E78u;
    // 0x195e78: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195e78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195e7c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x195E7Cu;
    {
        const bool branch_taken_0x195e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e7c) {
            ctx->pc = 0x196018u;
            return;
        }
    }
    ctx->pc = 0x195E84u;
}
