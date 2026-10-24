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

// Function: entry_00329f6c
// Address: 0x329f6c - 0x329f98
void entry_00329f6c_0x329f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329f6c_0x329f6c");
#endif

    ctx->pc = 0x329f6cu;

    // 0x329f6c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x329f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329f70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x329f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329f74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329f7c: 0x0  nop
    ctx->pc = 0x329f7cu;
    // NOP
    // 0x329f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329f84: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x329f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x329f88: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x329f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329f8c: 0xe4601028  swc1        $f0, 0x1028($v1)
    ctx->pc = 0x329f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4136), bits); }
    // 0x329f90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x329F90u;
    {
        const bool branch_taken_0x329f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f90) {
            ctx->pc = 0x32A020u;
            return;
        }
    }
    ctx->pc = 0x329F98u;
}
