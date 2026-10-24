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

// Function: entry_0017edb8
// Address: 0x17edb8 - 0x17edcc
void entry_0017edb8_0x17edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edb8_0x17edb8");
#endif

    ctx->pc = 0x17edb8u;

    // 0x17edb8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17edbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17edbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17edc0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17edc4: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x17edc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x17edc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17edc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x17edccu;
}
