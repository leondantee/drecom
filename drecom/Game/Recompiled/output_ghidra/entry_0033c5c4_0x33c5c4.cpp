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

// Function: entry_0033c5c4
// Address: 0x33c5c4 - 0x33c5dc
void entry_0033c5c4_0x33c5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c5c4_0x33c5c4");
#endif

    ctx->pc = 0x33c5c4u;

    // 0x33c5c4: 0xc62111e4  lwc1        $f1, 0x11E4($s1)
    ctx->pc = 0x33c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c5c8: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x33c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c5cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33c5ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33c5d0: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x33c5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x33c5d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x33C5D4u;
    {
        const bool branch_taken_0x33c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c5d4) {
            ctx->pc = 0x33C648u;
            return;
        }
    }
    ctx->pc = 0x33C5DCu;
}
