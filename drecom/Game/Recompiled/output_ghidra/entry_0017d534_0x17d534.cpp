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

// Function: entry_0017d534
// Address: 0x17d534 - 0x17d590
void entry_0017d534_0x17d534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d534_0x17d534");
#endif

    switch (ctx->pc) {
        case 0x17d554u: goto label_17d554;
        default: break;
    }

    ctx->pc = 0x17d534u;

    // 0x17d534: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d538: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d53c: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d540: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d544: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d548: 0x2445ec80  addiu       $a1, $v0, -0x1380
    ctx->pc = 0x17d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x17d54c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D54Cu;
    SET_GPR_U32(ctx, 31, 0x17D554u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D54Cu, 0x17D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D554u;
label_17d554:
    // 0x17d554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d558: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d55c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d560: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x17d560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x17d564: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D564u;
    {
        const bool branch_taken_0x17d564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d564) {
            ctx->pc = 0x17D5C4u;
            return;
        }
    }
    ctx->pc = 0x17D56Cu;
    // 0x17d56c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x17d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d570: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d574: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D574u;
    {
        const bool branch_taken_0x17d574 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d574) {
            ctx->pc = 0x17D590u;
            return;
        }
    }
    ctx->pc = 0x17D57Cu;
    // 0x17d57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d580: 0x0  nop
    ctx->pc = 0x17d580u;
    // NOP
    // 0x17d584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d588: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D588u;
    {
        const bool branch_taken_0x17d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d588) {
            ctx->pc = 0x17D5ACu;
            return;
        }
    }
    ctx->pc = 0x17D590u;
}
