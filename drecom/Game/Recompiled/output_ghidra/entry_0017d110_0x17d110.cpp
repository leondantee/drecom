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

// Function: entry_0017d110
// Address: 0x17d110 - 0x17d154
void entry_0017d110_0x17d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d110_0x17d110");
#endif

    ctx->pc = 0x17d110u;

    // 0x17d110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d114: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d118: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d11c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17d11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17d120: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D120u;
    {
        const bool branch_taken_0x17d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d120) {
            ctx->pc = 0x17D180u;
            return;
        }
    }
    ctx->pc = 0x17D128u;
    // 0x17d128: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17d12c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d134: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d138: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D138u;
    {
        const bool branch_taken_0x17d138 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d138) {
            ctx->pc = 0x17D154u;
            return;
        }
    }
    ctx->pc = 0x17D140u;
    // 0x17d140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d144: 0x0  nop
    ctx->pc = 0x17d144u;
    // NOP
    // 0x17d148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d14c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D14Cu;
    {
        const bool branch_taken_0x17d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d14c) {
            ctx->pc = 0x17D170u;
            return;
        }
    }
    ctx->pc = 0x17D154u;
}
