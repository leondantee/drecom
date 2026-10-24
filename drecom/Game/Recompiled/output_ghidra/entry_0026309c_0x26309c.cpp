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

// Function: entry_0026309c
// Address: 0x26309c - 0x2630c4
void entry_0026309c_0x26309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026309c_0x26309c");
#endif

    ctx->pc = 0x26309cu;

    // 0x26309c: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x26309cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2630a0: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x2630a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x2630a4: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x2630a4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2630a8: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2630A8u;
    {
        const bool branch_taken_0x2630a8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2630a8) {
            ctx->pc = 0x2630C4u;
            return;
        }
    }
    ctx->pc = 0x2630B0u;
    // 0x2630b0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2630b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2630b4: 0x0  nop
    ctx->pc = 0x2630b4u;
    // NOP
    // 0x2630b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2630b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2630bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2630BCu;
    {
        const bool branch_taken_0x2630bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2630bc) {
            ctx->pc = 0x2630E0u;
            return;
        }
    }
    ctx->pc = 0x2630C4u;
}
