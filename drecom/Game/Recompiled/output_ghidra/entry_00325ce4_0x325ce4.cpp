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

// Function: entry_00325ce4
// Address: 0x325ce4 - 0x325d04
void entry_00325ce4_0x325ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325ce4_0x325ce4");
#endif

    ctx->pc = 0x325ce4u;

    // 0x325ce4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x325ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325ce8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x325ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325cec: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x325cecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x325cf0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325cf4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x325cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325cf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325cfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x325cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x325d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x325d04u;
}
