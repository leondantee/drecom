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

// Function: entry_0028250c
// Address: 0x28250c - 0x282570
void entry_0028250c_0x28250c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028250c_0x28250c");
#endif

    ctx->pc = 0x28250cu;

    // 0x28250c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28250cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282510: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x282510u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x282514: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282518: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x282518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x28251c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x28251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x282520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282524: 0x0  nop
    ctx->pc = 0x282524u;
    // NOP
    // 0x282528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28252c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x28252cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x282530: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282534: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x282534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x282538: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x282538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28253c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28253cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282540: 0x0  nop
    ctx->pc = 0x282540u;
    // NOP
    // 0x282544: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282548: 0x0  nop
    ctx->pc = 0x282548u;
    // NOP
    // 0x28254c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28254Cu;
    {
        const bool branch_taken_0x28254c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28254c) {
            ctx->pc = 0x282570u;
            return;
        }
    }
    ctx->pc = 0x282554u;
    // 0x282554: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282558: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x28255c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28255cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x282560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282564: 0x0  nop
    ctx->pc = 0x282564u;
    // NOP
    // 0x282568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x282568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28256c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x28256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x282570u;
}
