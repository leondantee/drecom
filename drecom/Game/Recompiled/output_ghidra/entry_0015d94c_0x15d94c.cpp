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

// Function: entry_0015d94c
// Address: 0x15d94c - 0x15d96c
void entry_0015d94c_0x15d94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d94c_0x15d94c");
#endif

    ctx->pc = 0x15d94cu;

    // 0x15d94c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d950: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15d954: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x15d958: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
    // 0x15d95c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d960: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x15d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d968: 0xe4401400  swc1        $f0, 0x1400($v0)
    ctx->pc = 0x15d968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5120), bits); }
    ctx->pc = 0x15d96cu;
}
