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

// Function: entry_00335508
// Address: 0x335508 - 0x335558
void entry_00335508_0x335508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335508_0x335508");
#endif

    switch (ctx->pc) {
        case 0x335518u: goto label_335518;
        default: break;
    }

    ctx->pc = 0x335508u;

    // 0x335508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x335508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33550c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x33550cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x335510: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x335510u;
    SET_GPR_U32(ctx, 31, 0x335518u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x335510u, 0x335518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335518u;
label_335518:
    // 0x335518: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x335518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x33551c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x33551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x335520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335524: 0x0  nop
    ctx->pc = 0x335524u;
    // NOP
    // 0x335528: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x335528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33552c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x33552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x335530: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x335530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x335534: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x335534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335538: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x335538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x33553c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33553Cu;
    {
        const bool branch_taken_0x33553c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33553c) {
            ctx->pc = 0x335558u;
            return;
        }
    }
    ctx->pc = 0x335544u;
    // 0x335544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335548: 0x0  nop
    ctx->pc = 0x335548u;
    // NOP
    // 0x33554c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33554cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x335550u;
    {
        const bool branch_taken_0x335550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335550) {
            ctx->pc = 0x335574u;
            return;
        }
    }
    ctx->pc = 0x335558u;
}
