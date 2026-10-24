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

// Function: caseD_5
// Address: 0x149260 - 0x1492a4
void caseD_5_0x149260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x149260");
#endif

    switch (ctx->pc) {
        case 0x149270u: goto label_149270;
        default: break;
    }

    ctx->pc = 0x149260u;

    // 0x149260: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149264: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149268: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149268u;
    SET_GPR_U32(ctx, 31, 0x149270u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149268u, 0x149270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149270u;
label_149270:
    // 0x149270: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149274: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x149274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
    // 0x149278: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x149278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14927c: 0x2841006e  slti        $at, $v0, 0x6E
    ctx->pc = 0x14927cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x149280: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x149280u;
    {
        const bool branch_taken_0x149280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149280) {
            ctx->pc = 0x1492A4u;
            return;
        }
    }
    ctx->pc = 0x149288u;
    // 0x149288: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14928c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x14928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149290: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x149290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x149294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149298: 0x0  nop
    ctx->pc = 0x149298u;
    // NOP
    // 0x14929c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14929cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1492a0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1492a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1492a4u;
}
