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

// Function: entry_001935b4
// Address: 0x1935b4 - 0x193624
void entry_001935b4_0x1935b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001935b4_0x1935b4");
#endif

    switch (ctx->pc) {
        case 0x1935fcu: goto label_1935fc;
        default: break;
    }

    ctx->pc = 0x1935b4u;

    // 0x1935b4: 0xc6c00294  lwc1        $f0, 0x294($s6)
    ctx->pc = 0x1935b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1935b8: 0x0  nop
    ctx->pc = 0x1935b8u;
    // NOP
    // 0x1935bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1935bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1935c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1935c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1935c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1935c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1935c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1935c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935cc: 0x0  nop
    ctx->pc = 0x1935ccu;
    // NOP
    // 0x1935d0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1935d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1935d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1935d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1935d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1935d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1935dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1935dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935e0: 0x0  nop
    ctx->pc = 0x1935e0u;
    // NOP
    // 0x1935e4: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x1935e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1935e8: 0x0  nop
    ctx->pc = 0x1935e8u;
    // NOP
    // 0x1935ec: 0x0  nop
    ctx->pc = 0x1935ecu;
    // NOP
    // 0x1935f0: 0x0  nop
    ctx->pc = 0x1935f0u;
    // NOP
    // 0x1935f4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1935F4u;
    SET_GPR_U32(ctx, 31, 0x1935FCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1935F4u, 0x1935FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935FCu;
label_1935fc:
    // 0x1935fc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1935fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x193600: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x193600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x193604: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x193604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193608: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193608u;
    {
        const bool branch_taken_0x193608 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193608) {
            ctx->pc = 0x193624u;
            return;
        }
    }
    ctx->pc = 0x193610u;
    // 0x193610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193614: 0x0  nop
    ctx->pc = 0x193614u;
    // NOP
    // 0x193618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19361c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19361Cu;
    {
        const bool branch_taken_0x19361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19361c) {
            ctx->pc = 0x193640u;
            return;
        }
    }
    ctx->pc = 0x193624u;
}
