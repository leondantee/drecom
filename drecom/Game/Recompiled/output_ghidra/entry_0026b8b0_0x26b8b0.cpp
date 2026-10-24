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

// Function: entry_0026b8b0
// Address: 0x26b8b0 - 0x26b8c8
void entry_0026b8b0_0x26b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b8b0_0x26b8b0");
#endif

    ctx->pc = 0x26b8b0u;

    // 0x26b8b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b8b4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b8b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b8bc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b8c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b8c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26b8c4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x26b8c8u;
}
