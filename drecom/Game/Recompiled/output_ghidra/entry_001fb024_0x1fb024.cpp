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

// Function: entry_001fb024
// Address: 0x1fb024 - 0x1fb048
void entry_001fb024_0x1fb024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb024_0x1fb024");
#endif

    ctx->pc = 0x1fb024u;

    // 0x1fb024: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fb024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fb028: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x1fb028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb02c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB02Cu;
    {
        const bool branch_taken_0x1fb02c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fb02c) {
            ctx->pc = 0x1FB048u;
            return;
        }
    }
    ctx->pc = 0x1FB034u;
    // 0x1fb034: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fb034u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb038: 0x0  nop
    ctx->pc = 0x1fb038u;
    // NOP
    // 0x1fb03c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fb03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fb040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB040u;
    {
        const bool branch_taken_0x1fb040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb040) {
            ctx->pc = 0x1FB064u;
            return;
        }
    }
    ctx->pc = 0x1FB048u;
}
