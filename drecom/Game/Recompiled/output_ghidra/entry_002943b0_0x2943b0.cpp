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

// Function: entry_002943b0
// Address: 0x2943b0 - 0x2943d8
void entry_002943b0_0x2943b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002943b0_0x2943b0");
#endif

    ctx->pc = 0x2943b0u;

    // 0x2943b0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2943b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2943b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943b8: 0x0  nop
    ctx->pc = 0x2943b8u;
    // NOP
    // 0x2943bc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2943bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2943c0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2943c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2943c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943c8: 0x0  nop
    ctx->pc = 0x2943c8u;
    // NOP
    // 0x2943cc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2943ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2943d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2943D0u;
    {
        const bool branch_taken_0x2943d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2943d0) {
            ctx->pc = 0x294400u;
            return;
        }
    }
    ctx->pc = 0x2943D8u;
}
