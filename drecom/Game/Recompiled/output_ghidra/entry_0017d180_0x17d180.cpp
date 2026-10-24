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

// Function: entry_0017d180
// Address: 0x17d180 - 0x17d1c4
void entry_0017d180_0x17d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d180_0x17d180");
#endif

    ctx->pc = 0x17d180u;

    // 0x17d180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d184: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d184u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d188: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d190: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x17D190u;
    {
        const bool branch_taken_0x17d190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d190) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D198u;
    // 0x17d198: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d19c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d1a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d1a4: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d1a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D1A8u;
    {
        const bool branch_taken_0x17d1a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d1a8) {
            ctx->pc = 0x17D1C4u;
            return;
        }
    }
    ctx->pc = 0x17D1B0u;
    // 0x17d1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d1b4: 0x0  nop
    ctx->pc = 0x17d1b4u;
    // NOP
    // 0x17d1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d1bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D1BCu;
    {
        const bool branch_taken_0x17d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1bc) {
            ctx->pc = 0x17D1E0u;
            return;
        }
    }
    ctx->pc = 0x17D1C4u;
}
