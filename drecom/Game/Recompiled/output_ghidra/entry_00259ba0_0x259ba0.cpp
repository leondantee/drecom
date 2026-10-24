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

// Function: entry_00259ba0
// Address: 0x259ba0 - 0x259bb0
void entry_00259ba0_0x259ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259ba0_0x259ba0");
#endif

    ctx->pc = 0x259ba0u;

    // 0x259ba0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ba4: 0xc44009cc  lwc1        $f0, 0x9CC($v0)
    ctx->pc = 0x259ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259ba8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259bac: 0xe44009c8  swc1        $f0, 0x9C8($v0)
    ctx->pc = 0x259bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2504), bits); }
    ctx->pc = 0x259bb0u;
}
