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

// Function: entry_0017d00c
// Address: 0x17d00c - 0x17d050
void entry_0017d00c_0x17d00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d00c_0x17d00c");
#endif

    ctx->pc = 0x17d00cu;

    // 0x17d00c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d010: 0x942500c8  lhu         $a1, 0xC8($at)
    ctx->pc = 0x17d010u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d014: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x17d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17d018: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x17d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x17d01c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D01Cu;
    {
        const bool branch_taken_0x17d01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d01c) {
            ctx->pc = 0x17D07Cu;
            return;
        }
    }
    ctx->pc = 0x17D024u;
    // 0x17d024: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d028: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d030: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d034: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D034u;
    {
        const bool branch_taken_0x17d034 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d034) {
            ctx->pc = 0x17D050u;
            return;
        }
    }
    ctx->pc = 0x17D03Cu;
    // 0x17d03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d040: 0x0  nop
    ctx->pc = 0x17d040u;
    // NOP
    // 0x17d044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D048u;
    {
        const bool branch_taken_0x17d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d048) {
            ctx->pc = 0x17D06Cu;
            return;
        }
    }
    ctx->pc = 0x17D050u;
}
