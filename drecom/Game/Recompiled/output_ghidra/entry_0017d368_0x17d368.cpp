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

// Function: entry_0017d368
// Address: 0x17d368 - 0x17d3ac
void entry_0017d368_0x17d368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d368_0x17d368");
#endif

    ctx->pc = 0x17d368u;

    // 0x17d368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d36c: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d36cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d374: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x17d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x17d378: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x17D378u;
    {
        const bool branch_taken_0x17d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d378) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D380u;
    // 0x17d380: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17d384: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d38c: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d390: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D390u;
    {
        const bool branch_taken_0x17d390 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d390) {
            ctx->pc = 0x17D3ACu;
            return;
        }
    }
    ctx->pc = 0x17D398u;
    // 0x17d398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d39c: 0x0  nop
    ctx->pc = 0x17d39cu;
    // NOP
    // 0x17d3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d3a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D3A4u;
    {
        const bool branch_taken_0x17d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d3a4) {
            ctx->pc = 0x17D3C8u;
            return;
        }
    }
    ctx->pc = 0x17D3ACu;
}
