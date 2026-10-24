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

// Function: entry_00325d4c
// Address: 0x325d4c - 0x325d6c
void entry_00325d4c_0x325d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325d4c_0x325d4c");
#endif

    ctx->pc = 0x325d4cu;

    // 0x325d4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x325d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325d50: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x325d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325d54: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x325d54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x325d58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325d5c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x325d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325d64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x325d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d68: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x325d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x325d6cu;
}
