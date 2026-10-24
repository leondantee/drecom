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

// Function: entry_00368ba0
// Address: 0x368ba0 - 0x368bb0
void entry_00368ba0_0x368ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368ba0_0x368ba0");
#endif

    ctx->pc = 0x368ba0u;

    // 0x368ba0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x368ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ba4: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x368ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x368ba8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x368ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368bac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x368bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    ctx->pc = 0x368bb0u;
}
