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

// Function: entry_0017d1f8
// Address: 0x17d1f8 - 0x17d25c
void entry_0017d1f8_0x17d1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1f8_0x17d1f8");
#endif

    switch (ctx->pc) {
        case 0x17d218u: goto label_17d218;
        default: break;
    }

    ctx->pc = 0x17d1f8u;

    // 0x17d1f8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d1fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d200: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d204: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d208: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d20c: 0x2445ec60  addiu       $a1, $v0, -0x13A0
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962272));
    // 0x17d210: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D210u;
    SET_GPR_U32(ctx, 31, 0x17D218u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D210u, 0x17D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D218u;
label_17d218:
    // 0x17d218: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d21c: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d220: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d224: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x17d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x17d228: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D228u;
    {
        const bool branch_taken_0x17d228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d228) {
            ctx->pc = 0x17D288u;
            return;
        }
    }
    ctx->pc = 0x17D230u;
    // 0x17d230: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d234: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d23c: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d240: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D240u;
    {
        const bool branch_taken_0x17d240 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d240) {
            ctx->pc = 0x17D25Cu;
            return;
        }
    }
    ctx->pc = 0x17D248u;
    // 0x17d248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d24c: 0x0  nop
    ctx->pc = 0x17d24cu;
    // NOP
    // 0x17d250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D254u;
    {
        const bool branch_taken_0x17d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d254) {
            ctx->pc = 0x17D278u;
            return;
        }
    }
    ctx->pc = 0x17D25Cu;
}
