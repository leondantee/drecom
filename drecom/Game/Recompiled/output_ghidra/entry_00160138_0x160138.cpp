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

// Function: entry_00160138
// Address: 0x160138 - 0x160178
void entry_00160138_0x160138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160138_0x160138");
#endif

    ctx->pc = 0x160138u;

    // 0x160138: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x160138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16013c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x160140: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x160140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160144: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x160144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x160148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16014c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160150: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x160154: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x160154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160158: 0x0  nop
    ctx->pc = 0x160158u;
    // NOP
    // 0x16015c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16015Cu;
    {
        const bool branch_taken_0x16015c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16015c) {
            ctx->pc = 0x160178u;
            return;
        }
    }
    ctx->pc = 0x160164u;
    // 0x160164: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160168: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16016c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160170: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x160170u;
    {
        const bool branch_taken_0x160170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160170) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x160178u;
}
