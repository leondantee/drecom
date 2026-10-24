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

// Function: entry_00259da4
// Address: 0x259da4 - 0x259dc4
void entry_00259da4_0x259da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259da4_0x259da4");
#endif

    ctx->pc = 0x259da4u;

    // 0x259da4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x259da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x259da8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x259DA8u;
    {
        const bool branch_taken_0x259da8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x259da8) {
            ctx->pc = 0x259DC4u;
            return;
        }
    }
    ctx->pc = 0x259DB0u;
    // 0x259db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259db4: 0x0  nop
    ctx->pc = 0x259db4u;
    // NOP
    // 0x259db8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x259db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x259DBCu;
    {
        const bool branch_taken_0x259dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259dbc) {
            ctx->pc = 0x259DE0u;
            return;
        }
    }
    ctx->pc = 0x259DC4u;
}
