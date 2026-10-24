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

// Function: caseD_4
// Address: 0x1231c8 - 0x1231e0
void caseD_4_0x1231c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1231c8");
#endif

    ctx->pc = 0x1231c8u;

    // 0x1231c8: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1231c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x1231cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1231ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1231d0: 0x0  nop
    ctx->pc = 0x1231d0u;
    // NOP
    // 0x1231d4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1231d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1231d8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1231D8u;
    {
        const bool branch_taken_0x1231d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231d8) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x1231E0u;
}
