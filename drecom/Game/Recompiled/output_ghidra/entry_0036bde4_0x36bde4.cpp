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

// Function: entry_0036bde4
// Address: 0x36bde4 - 0x36be00
void entry_0036bde4_0x36bde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bde4_0x36bde4");
#endif

    ctx->pc = 0x36bde4u;

    // 0x36bde4: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x36bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x36bde8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36bdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bdf0: 0x0  nop
    ctx->pc = 0x36bdf0u;
    // NOP
    // 0x36bdf4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36bdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36bdf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36BDF8u;
    {
        const bool branch_taken_0x36bdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bdf8) {
            ctx->pc = 0x36BE18u;
            return;
        }
    }
    ctx->pc = 0x36BE00u;
}
