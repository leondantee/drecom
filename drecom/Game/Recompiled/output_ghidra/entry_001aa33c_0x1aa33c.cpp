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

// Function: entry_001aa33c
// Address: 0x1aa33c - 0x1aa364
void entry_001aa33c_0x1aa33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa33c_0x1aa33c");
#endif

    ctx->pc = 0x1aa33cu;

    // 0x1aa33c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa340: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa344: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa348: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa34c: 0x0  nop
    ctx->pc = 0x1aa34cu;
    // NOP
    // 0x1aa350: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA350u;
    {
        const bool branch_taken_0x1aa350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa350) {
            ctx->pc = 0x1AA364u;
            return;
        }
    }
    ctx->pc = 0x1AA358u;
    // 0x1aa358: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa35c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa360: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x1aa364u;
}
