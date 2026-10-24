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

// Function: entry_0028e56c
// Address: 0x28e56c - 0x28e5b4
void entry_0028e56c_0x28e56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e56c_0x28e56c");
#endif

    switch (ctx->pc) {
        case 0x28e57cu: goto label_28e57c;
        default: break;
    }

    ctx->pc = 0x28e56cu;

    // 0x28e56c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e570: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e570u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e574: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E574u;
    SET_GPR_U32(ctx, 31, 0x28E57Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E574u, 0x28E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E57Cu;
label_28e57c:
    // 0x28e57c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28e57cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e580: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x28e580u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e584: 0x0  nop
    ctx->pc = 0x28e584u;
    // NOP
    // 0x28e588: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e58c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28e590: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28e590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e594: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x28e594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e598: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E598u;
    {
        const bool branch_taken_0x28e598 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e598) {
            ctx->pc = 0x28E5B4u;
            return;
        }
    }
    ctx->pc = 0x28E5A0u;
    // 0x28e5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e5a4: 0x0  nop
    ctx->pc = 0x28e5a4u;
    // NOP
    // 0x28e5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e5ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E5ACu;
    {
        const bool branch_taken_0x28e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e5ac) {
            ctx->pc = 0x28E5D0u;
            return;
        }
    }
    ctx->pc = 0x28E5B4u;
}
