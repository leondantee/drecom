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

// Function: entry_0036bdc8
// Address: 0x36bdc8 - 0x36bde4
void entry_0036bdc8_0x36bdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bdc8_0x36bdc8");
#endif

    ctx->pc = 0x36bdc8u;

    // 0x36bdc8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x36bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x36bdcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36bdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bdd4: 0x0  nop
    ctx->pc = 0x36bdd4u;
    // NOP
    // 0x36bdd8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36bddc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36BDDCu;
    {
        const bool branch_taken_0x36bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bddc) {
            ctx->pc = 0x36BE18u;
            return;
        }
    }
    ctx->pc = 0x36BDE4u;
}
