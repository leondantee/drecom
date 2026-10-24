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

// Function: entry_001ab17c
// Address: 0x1ab17c - 0x1ab190
void entry_001ab17c_0x1ab17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab17c_0x1ab17c");
#endif

    ctx->pc = 0x1ab17cu;

    // 0x1ab17c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab180: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1ab180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab184: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ab184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab188: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab18c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ab18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    ctx->pc = 0x1ab190u;
}
