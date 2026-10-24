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

// Function: entry_0025d908
// Address: 0x25d908 - 0x25d928
void entry_0025d908_0x25d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d908_0x25d908");
#endif

    ctx->pc = 0x25d908u;

    // 0x25d908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25d908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25d90c: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x25d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x25d910: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D910u;
    {
        const bool branch_taken_0x25d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d910) {
            ctx->pc = 0x25D928u;
            return;
        }
    }
    ctx->pc = 0x25D918u;
    // 0x25d918: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x25d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d91c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x25d91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x25d920: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25D920u;
    {
        const bool branch_taken_0x25d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d920) {
            ctx->pc = 0x25D970u;
            return;
        }
    }
    ctx->pc = 0x25D928u;
}
