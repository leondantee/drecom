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

// Function: entry_0017c8b4
// Address: 0x17c8b4 - 0x17c8d4
void entry_0017c8b4_0x17c8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c8b4_0x17c8b4");
#endif

    ctx->pc = 0x17c8b4u;

    // 0x17c8b4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c8b8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c8c0: 0x0  nop
    ctx->pc = 0x17c8c0u;
    // NOP
    // 0x17c8c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c8c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17c8cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C8CCu;
    {
        const bool branch_taken_0x17c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8cc) {
            ctx->pc = 0x17C8F0u;
            return;
        }
    }
    ctx->pc = 0x17C8D4u;
}
