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

// Function: entry_0017d2f8
// Address: 0x17d2f8 - 0x17d33c
void entry_0017d2f8_0x17d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d2f8_0x17d2f8");
#endif

    ctx->pc = 0x17d2f8u;

    // 0x17d2f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d2fc: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d300: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d304: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x17d308: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D308u;
    {
        const bool branch_taken_0x17d308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d308) {
            ctx->pc = 0x17D368u;
            return;
        }
    }
    ctx->pc = 0x17D310u;
    // 0x17d310: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d314: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d31c: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d31cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d320: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D320u;
    {
        const bool branch_taken_0x17d320 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d320) {
            ctx->pc = 0x17D33Cu;
            return;
        }
    }
    ctx->pc = 0x17D328u;
    // 0x17d328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d32c: 0x0  nop
    ctx->pc = 0x17d32cu;
    // NOP
    // 0x17d330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D334u;
    {
        const bool branch_taken_0x17d334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d334) {
            ctx->pc = 0x17D358u;
            return;
        }
    }
    ctx->pc = 0x17D33Cu;
}
