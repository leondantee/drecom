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

// Function: entry_001600c0
// Address: 0x1600c0 - 0x1600d4
void entry_001600c0_0x1600c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001600c0_0x1600c0");
#endif

    ctx->pc = 0x1600c0u;

    // 0x1600c0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1600c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1600c4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1600c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1600c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1600cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1600CCu;
    {
        const bool branch_taken_0x1600cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600cc) {
            ctx->pc = 0x160180u;
            return;
        }
    }
    ctx->pc = 0x1600D4u;
}
