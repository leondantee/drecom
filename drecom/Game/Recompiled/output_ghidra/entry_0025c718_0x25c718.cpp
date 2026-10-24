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

// Function: entry_0025c718
// Address: 0x25c718 - 0x25c740
void entry_0025c718_0x25c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c718_0x25c718");
#endif

    ctx->pc = 0x25c718u;

    // 0x25c718: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25c718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25c71c: 0x8c23fdf8  lw          $v1, -0x208($at)
    ctx->pc = 0x25c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x25c720: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C720u;
    {
        const bool branch_taken_0x25c720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c720) {
            ctx->pc = 0x25C740u;
            return;
        }
    }
    ctx->pc = 0x25C728u;
    // 0x25c728: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c72c: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x25c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c730: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c734: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25c734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x25c738: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25C738u;
    {
        const bool branch_taken_0x25c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c738) {
            ctx->pc = 0x25C798u;
            return;
        }
    }
    ctx->pc = 0x25C740u;
}
