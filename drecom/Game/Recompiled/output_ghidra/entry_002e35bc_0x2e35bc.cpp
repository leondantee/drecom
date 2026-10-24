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

// Function: entry_002e35bc
// Address: 0x2e35bc - 0x2e35d4
void entry_002e35bc_0x2e35bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e35bc_0x2e35bc");
#endif

    ctx->pc = 0x2e35bcu;

    // 0x2e35bc: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2e35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2e35c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e35c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e35c4: 0x0  nop
    ctx->pc = 0x2e35c4u;
    // NOP
    // 0x2e35c8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e35c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e35cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E35CCu;
    {
        const bool branch_taken_0x2e35cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35cc) {
            ctx->pc = 0x2E35FCu;
            return;
        }
    }
    ctx->pc = 0x2E35D4u;
}
