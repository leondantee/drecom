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

// Function: entry_0018fedc
// Address: 0x18fedc - 0x18fee8
void entry_0018fedc_0x18fedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fedc_0x18fedc");
#endif

    ctx->pc = 0x18fedcu;

    // 0x18fedc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fee0: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x18fee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fee4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    ctx->pc = 0x18fee8u;
}
