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

// Function: entry_00195da4
// Address: 0x195da4 - 0x195dd4
void entry_00195da4_0x195da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195da4_0x195da4");
#endif

    ctx->pc = 0x195da4u;

    // 0x195da4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x195da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195da8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195dac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195db0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x195db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195db4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x195db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195db8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x195db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195dbc: 0x0  nop
    ctx->pc = 0x195dbcu;
    // NOP
    // 0x195dc0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x195DC0u;
    {
        const bool branch_taken_0x195dc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195dc0) {
            ctx->pc = 0x195DD4u;
            return;
        }
    }
    ctx->pc = 0x195DC8u;
    // 0x195dc8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195dc8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195dcc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x195DCCu;
    {
        const bool branch_taken_0x195dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195dcc) {
            ctx->pc = 0x196018u;
            return;
        }
    }
    ctx->pc = 0x195DD4u;
}
