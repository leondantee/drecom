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

// Function: entry_00160a28
// Address: 0x160a28 - 0x160a38
void entry_00160a28_0x160a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a28_0x160a28");
#endif

    ctx->pc = 0x160a28u;

    // 0x160a28: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160a2c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160a30: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x160a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160a34: 0x0  nop
    ctx->pc = 0x160a34u;
    // NOP
    ctx->pc = 0x160a38u;
}
