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

// Function: caseD_d
// Address: 0x1232a0 - 0x1232b8
void caseD_d_0x1232a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1232a0");
#endif

    ctx->pc = 0x1232a0u;

    // 0x1232a0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1232a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1232a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1232a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1232a8: 0x0  nop
    ctx->pc = 0x1232a8u;
    // NOP
    // 0x1232ac: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1232acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1232b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1232B0u;
    {
        const bool branch_taken_0x1232b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1232b0) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x1232B8u;
}
