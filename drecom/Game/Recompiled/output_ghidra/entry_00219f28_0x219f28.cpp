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

// Function: entry_00219f28
// Address: 0x219f28 - 0x219f40
void entry_00219f28_0x219f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219f28_0x219f28");
#endif

    ctx->pc = 0x219f28u;

    // 0x219f28: 0x0  nop
    ctx->pc = 0x219f28u;
    // NOP
    // 0x219f2c: 0x0  nop
    ctx->pc = 0x219f2cu;
    // NOP
    // 0x219f30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x219f30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x219f34: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x219f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x219f38: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x219f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x219f3c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x219f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x219f40u;
}
