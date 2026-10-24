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

// Function: entry_00337f20
// Address: 0x337f20 - 0x337f78
void entry_00337f20_0x337f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337f20_0x337f20");
#endif

    switch (ctx->pc) {
        case 0x337f40u: goto label_337f40;
        default: break;
    }

    ctx->pc = 0x337f20u;

    // 0x337f20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x337f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x337f24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x337f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x337f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x337f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337f2c: 0x0  nop
    ctx->pc = 0x337f2cu;
    // NOP
    // 0x337f30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x337f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x337f34: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x337f34u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x337f38: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x337F38u;
    SET_GPR_U32(ctx, 31, 0x337F40u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337F38u, 0x337F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337F40u;
label_337f40:
    // 0x337f40: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x337f40u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337f44: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x337f44u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337f48: 0x0  nop
    ctx->pc = 0x337f48u;
    // NOP
    // 0x337f4c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x337f50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x337f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x337f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x337f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337f58: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x337f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x337f5c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x337F5Cu;
    {
        const bool branch_taken_0x337f5c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x337f5c) {
            ctx->pc = 0x337F78u;
            return;
        }
    }
    ctx->pc = 0x337F64u;
    // 0x337f64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x337f64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337f68: 0x0  nop
    ctx->pc = 0x337f68u;
    // NOP
    // 0x337f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337f70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x337F70u;
    {
        const bool branch_taken_0x337f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337f70) {
            ctx->pc = 0x337F94u;
            return;
        }
    }
    ctx->pc = 0x337F78u;
}
