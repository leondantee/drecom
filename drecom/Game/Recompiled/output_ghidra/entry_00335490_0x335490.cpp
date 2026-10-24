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

// Function: entry_00335490
// Address: 0x335490 - 0x3354ec
void entry_00335490_0x335490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335490_0x335490");
#endif

    switch (ctx->pc) {
        case 0x3354b0u: goto label_3354b0;
        default: break;
    }

    ctx->pc = 0x335490u;

    // 0x335490: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x335490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335494: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x335494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x335498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33549c: 0x0  nop
    ctx->pc = 0x33549cu;
    // NOP
    // 0x3354a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3354a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3354a4: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x3354a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3354a8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3354A8u;
    SET_GPR_U32(ctx, 31, 0x3354B0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3354A8u, 0x3354B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354B0u;
label_3354b0:
    // 0x3354b0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3354b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x3354b4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3354b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3354b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3354b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3354bc: 0x0  nop
    ctx->pc = 0x3354bcu;
    // NOP
    // 0x3354c0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3354c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3354c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3354c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3354c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3354c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3354cc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3354ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3354d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3354D0u;
    {
        const bool branch_taken_0x3354d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3354d0) {
            ctx->pc = 0x3354ECu;
            return;
        }
    }
    ctx->pc = 0x3354D8u;
    // 0x3354d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3354d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3354dc: 0x0  nop
    ctx->pc = 0x3354dcu;
    // NOP
    // 0x3354e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3354e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3354e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3354E4u;
    {
        const bool branch_taken_0x3354e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354e4) {
            ctx->pc = 0x335508u;
            return;
        }
    }
    ctx->pc = 0x3354ECu;
}
