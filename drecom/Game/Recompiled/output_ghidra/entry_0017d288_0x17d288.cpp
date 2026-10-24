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

// Function: entry_0017d288
// Address: 0x17d288 - 0x17d2cc
void entry_0017d288_0x17d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d288_0x17d288");
#endif

    ctx->pc = 0x17d288u;

    // 0x17d288: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d28c: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d290: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d294: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x17d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x17d298: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D298u;
    {
        const bool branch_taken_0x17d298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d298) {
            ctx->pc = 0x17D2F8u;
            return;
        }
    }
    ctx->pc = 0x17D2A0u;
    // 0x17d2a0: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17d2a4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d2a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d2ac: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d2b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D2B0u;
    {
        const bool branch_taken_0x17d2b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d2b0) {
            ctx->pc = 0x17D2CCu;
            return;
        }
    }
    ctx->pc = 0x17D2B8u;
    // 0x17d2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d2bc: 0x0  nop
    ctx->pc = 0x17d2bcu;
    // NOP
    // 0x17d2c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d2c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D2C4u;
    {
        const bool branch_taken_0x17d2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d2c4) {
            ctx->pc = 0x17D2E8u;
            return;
        }
    }
    ctx->pc = 0x17D2CCu;
}
