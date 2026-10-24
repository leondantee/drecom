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

// Function: entry_00173714
// Address: 0x173714 - 0x173744
void entry_00173714_0x173714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173714_0x173714");
#endif

    ctx->pc = 0x173714u;

    // 0x173714: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x173714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173718: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x173718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x17371c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173724: 0x0  nop
    ctx->pc = 0x173724u;
    // NOP
    // 0x173728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17372c: 0x0  nop
    ctx->pc = 0x17372cu;
    // NOP
    // 0x173730: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x173730u;
    {
        const bool branch_taken_0x173730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173730) {
            ctx->pc = 0x173744u;
            return;
        }
    }
    ctx->pc = 0x173738u;
    // 0x173738: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173738u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17373c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17373Cu;
    {
        const bool branch_taken_0x17373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17373c) {
            ctx->pc = 0x173748u;
            return;
        }
    }
    ctx->pc = 0x173744u;
}
