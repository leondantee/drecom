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

// Function: entry_00337208
// Address: 0x337208 - 0x337260
void entry_00337208_0x337208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337208_0x337208");
#endif

    switch (ctx->pc) {
        case 0x337228u: goto label_337228;
        default: break;
    }

    ctx->pc = 0x337208u;

    // 0x337208: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x337208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33720c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33720cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x337210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337214: 0x0  nop
    ctx->pc = 0x337214u;
    // NOP
    // 0x337218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x337218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33721c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x33721cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x337220: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x337220u;
    SET_GPR_U32(ctx, 31, 0x337228u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337220u, 0x337228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337228u;
label_337228:
    // 0x337228: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x337228u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33722c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x33722cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337230: 0x0  nop
    ctx->pc = 0x337230u;
    // NOP
    // 0x337234: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x337238: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x337238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x33723c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33723cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337240: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x337240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x337244: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337244u;
    {
        const bool branch_taken_0x337244 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x337244) {
            ctx->pc = 0x337260u;
            return;
        }
    }
    ctx->pc = 0x33724Cu;
    // 0x33724c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33724cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337250: 0x0  nop
    ctx->pc = 0x337250u;
    // NOP
    // 0x337254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337258: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x337258u;
    {
        const bool branch_taken_0x337258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337258) {
            ctx->pc = 0x33727Cu;
            return;
        }
    }
    ctx->pc = 0x337260u;
}
