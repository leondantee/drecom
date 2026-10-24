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

// Function: entry_00259d68
// Address: 0x259d68 - 0x259d88
void entry_00259d68_0x259d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259d68_0x259d68");
#endif

    ctx->pc = 0x259d68u;

    // 0x259d68: 0x141a02  srl         $v1, $s4, 8
    ctx->pc = 0x259d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x259d6c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x259D6Cu;
    {
        const bool branch_taken_0x259d6c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x259d6c) {
            ctx->pc = 0x259D88u;
            return;
        }
    }
    ctx->pc = 0x259D74u;
    // 0x259d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x259d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259d78: 0x0  nop
    ctx->pc = 0x259d78u;
    // NOP
    // 0x259d7c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x259d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x259d80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x259D80u;
    {
        const bool branch_taken_0x259d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d80) {
            ctx->pc = 0x259DA4u;
            return;
        }
    }
    ctx->pc = 0x259D88u;
}
