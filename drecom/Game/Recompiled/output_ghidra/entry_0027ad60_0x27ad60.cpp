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

// Function: entry_0027ad60
// Address: 0x27ad60 - 0x27ad84
void entry_0027ad60_0x27ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ad60_0x27ad60");
#endif

    ctx->pc = 0x27ad60u;

    // 0x27ad60: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x27ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x27ad64: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x27ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27ad68: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AD68u;
    {
        const bool branch_taken_0x27ad68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27ad68) {
            ctx->pc = 0x27AD84u;
            return;
        }
    }
    ctx->pc = 0x27AD70u;
    // 0x27ad70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ad70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad74: 0x0  nop
    ctx->pc = 0x27ad74u;
    // NOP
    // 0x27ad78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27ad78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27ad7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27AD7Cu;
    {
        const bool branch_taken_0x27ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ad7c) {
            ctx->pc = 0x27ADA0u;
            return;
        }
    }
    ctx->pc = 0x27AD84u;
}
