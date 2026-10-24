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

// Function: entry_00182d08
// Address: 0x182d08 - 0x182d24
void entry_00182d08_0x182d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182d08_0x182d08");
#endif

    ctx->pc = 0x182d08u;

    // 0x182d08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x182d0c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x182d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x182d10: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x182d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x182d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182D14u;
    {
        const bool branch_taken_0x182d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d14) {
            ctx->pc = 0x182D24u;
            return;
        }
    }
    ctx->pc = 0x182D1Cu;
    // 0x182d1c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x182d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d20: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x182d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x182d24u;
}
