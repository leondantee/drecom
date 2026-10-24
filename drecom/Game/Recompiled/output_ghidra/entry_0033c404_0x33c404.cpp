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

// Function: entry_0033c404
// Address: 0x33c404 - 0x33c42c
void entry_0033c404_0x33c404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c404_0x33c404");
#endif

    ctx->pc = 0x33c404u;

    // 0x33c404: 0xc62111e4  lwc1        $f1, 0x11E4($s1)
    ctx->pc = 0x33c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c408: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x33c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x33c40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c410: 0x0  nop
    ctx->pc = 0x33c410u;
    // NOP
    // 0x33c414: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x33c414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33c418: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x33c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c41c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33c41cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33c420: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x33c420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x33c424: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33C424u;
    {
        const bool branch_taken_0x33c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c424) {
            ctx->pc = 0x33C4A4u;
            return;
        }
    }
    ctx->pc = 0x33C42Cu;
}
