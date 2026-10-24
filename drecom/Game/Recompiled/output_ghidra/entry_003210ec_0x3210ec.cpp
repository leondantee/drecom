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

// Function: entry_003210ec
// Address: 0x3210ec - 0x32110c
void entry_003210ec_0x3210ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003210ec_0x3210ec");
#endif

    ctx->pc = 0x3210ecu;

    // 0x3210ec: 0x0  nop
    ctx->pc = 0x3210ecu;
    // NOP
    // 0x3210f0: 0x0  nop
    ctx->pc = 0x3210f0u;
    // NOP
    // 0x3210f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3210f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3210f8: 0x0  nop
    ctx->pc = 0x3210f8u;
    // NOP
    // 0x3210fc: 0x0  nop
    ctx->pc = 0x3210fcu;
    // NOP
    // 0x321100: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x321100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x321104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x321104u;
    {
        const bool branch_taken_0x321104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321104) {
            ctx->pc = 0x321118u;
            return;
        }
    }
    ctx->pc = 0x32110Cu;
}
