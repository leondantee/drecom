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

// Function: entry_0014789c
// Address: 0x14789c - 0x1478e4
void entry_0014789c_0x14789c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014789c_0x14789c");
#endif

    switch (ctx->pc) {
        case 0x1478bcu: goto label_1478bc;
        default: break;
    }

    ctx->pc = 0x14789cu;

    // 0x14789c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1478a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1478a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1478a4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1478a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1478a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1478ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1478acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1478b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1478b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1478b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1478B4u;
    SET_GPR_U32(ctx, 31, 0x1478BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1478B4u, 0x1478BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1478BCu;
label_1478bc:
    // 0x1478bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1478bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1478c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1478c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1478c4: 0x94640a02  lhu         $a0, 0xA02($v1)
    ctx->pc = 0x1478c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2562)));
    // 0x1478c8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1478C8u;
    {
        const bool branch_taken_0x1478c8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1478c8) {
            ctx->pc = 0x1478E4u;
            return;
        }
    }
    ctx->pc = 0x1478D0u;
    // 0x1478d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1478d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1478d4: 0x0  nop
    ctx->pc = 0x1478d4u;
    // NOP
    // 0x1478d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1478d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1478dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1478DCu;
    {
        const bool branch_taken_0x1478dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1478dc) {
            ctx->pc = 0x147900u;
            return;
        }
    }
    ctx->pc = 0x1478E4u;
}
