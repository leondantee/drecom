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

// Function: entry_00188560
// Address: 0x188560 - 0x188594
void entry_00188560_0x188560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188560_0x188560");
#endif

    ctx->pc = 0x188560u;

    // 0x188560: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x188560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x188564: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x188564u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188568: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x188568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x18856c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x188570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188574: 0x0  nop
    ctx->pc = 0x188574u;
    // NOP
    // 0x188578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18857c: 0x0  nop
    ctx->pc = 0x18857cu;
    // NOP
    // 0x188580: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x188580u;
    {
        const bool branch_taken_0x188580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188580) {
            ctx->pc = 0x188594u;
            return;
        }
    }
    ctx->pc = 0x188588u;
    // 0x188588: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x188588u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18858c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18858Cu;
    {
        const bool branch_taken_0x18858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18858c) {
            ctx->pc = 0x1885A4u;
            return;
        }
    }
    ctx->pc = 0x188594u;
}
