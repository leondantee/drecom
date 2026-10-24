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

// Function: entry_001854e4
// Address: 0x1854e4 - 0x185508
void entry_001854e4_0x1854e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001854e4_0x1854e4");
#endif

    ctx->pc = 0x1854e4u;

    // 0x1854e4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1854e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1854e8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1854ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1854ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1854f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1854f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1854f4: 0x0  nop
    ctx->pc = 0x1854f4u;
    // NOP
    // 0x1854f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1854f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1854fc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1854fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185500: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x185500u;
    {
        const bool branch_taken_0x185500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185500) {
            ctx->pc = 0x1855C8u;
            return;
        }
    }
    ctx->pc = 0x185508u;
}
