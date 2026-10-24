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

// Function: entry_0017d5c4
// Address: 0x17d5c4 - 0x17d600
void entry_0017d5c4_0x17d5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d5c4_0x17d5c4");
#endif

    ctx->pc = 0x17d5c4u;

    // 0x17d5c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d5c8: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d5c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d5cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d5d0: 0x3042c000  andi        $v0, $v0, 0xC000
    ctx->pc = 0x17d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
    // 0x17d5d4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17D5D4u;
    {
        const bool branch_taken_0x17d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d5d4) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D5DCu;
    // 0x17d5dc: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x17d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d5e0: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d5e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D5E4u;
    {
        const bool branch_taken_0x17d5e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d5e4) {
            ctx->pc = 0x17D600u;
            return;
        }
    }
    ctx->pc = 0x17D5ECu;
    // 0x17d5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d5f0: 0x0  nop
    ctx->pc = 0x17d5f0u;
    // NOP
    // 0x17d5f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d5f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D5F8u;
    {
        const bool branch_taken_0x17d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d5f8) {
            ctx->pc = 0x17D61Cu;
            return;
        }
    }
    ctx->pc = 0x17D600u;
}
