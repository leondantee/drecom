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

// Function: entry_002e35d4
// Address: 0x2e35d4 - 0x2e35ec
void entry_002e35d4_0x2e35d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e35d4_0x2e35d4");
#endif

    ctx->pc = 0x2e35d4u;

    // 0x2e35d4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2e35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2e35d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e35d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e35dc: 0x0  nop
    ctx->pc = 0x2e35dcu;
    // NOP
    // 0x2e35e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e35e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e35e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E35E4u;
    {
        const bool branch_taken_0x2e35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35e4) {
            ctx->pc = 0x2E35FCu;
            return;
        }
    }
    ctx->pc = 0x2E35ECu;
}
