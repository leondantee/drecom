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

// Function: entry_0025b6ec
// Address: 0x25b6ec - 0x25b714
void entry_0025b6ec_0x25b6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b6ec_0x25b6ec");
#endif

    ctx->pc = 0x25b6ecu;

    // 0x25b6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25b6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25b6f0: 0x8c24fdf8  lw          $a0, -0x208($at)
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x25b6f4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B6F4u;
    {
        const bool branch_taken_0x25b6f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b6f4) {
            ctx->pc = 0x25B714u;
            return;
        }
    }
    ctx->pc = 0x25B6FCu;
    // 0x25b6fc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b700: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x25b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b704: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b708: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25b708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x25b70c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25B70Cu;
    {
        const bool branch_taken_0x25b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b70c) {
            ctx->pc = 0x25B76Cu;
            return;
        }
    }
    ctx->pc = 0x25B714u;
}
