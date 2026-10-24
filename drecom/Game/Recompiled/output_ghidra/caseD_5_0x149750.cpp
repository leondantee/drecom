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
// Address: 0x149750 - 0x149794
void caseD_5_0x149750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x149750");
#endif

    switch (ctx->pc) {
        case 0x149760u: goto label_149760;
        default: break;
    }

    ctx->pc = 0x149750u;

    // 0x149750: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149754: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149758: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149758u;
    SET_GPR_U32(ctx, 31, 0x149760u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149758u, 0x149760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149760u;
label_149760:
    // 0x149760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149764: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x149764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
    // 0x149768: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x149768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14976c: 0x2841006e  slti        $at, $v0, 0x6E
    ctx->pc = 0x14976cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x149770: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x149770u;
    {
        const bool branch_taken_0x149770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149770) {
            ctx->pc = 0x149794u;
            return;
        }
    }
    ctx->pc = 0x149778u;
    // 0x149778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14977c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x14977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149780: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x149780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x149784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149788: 0x0  nop
    ctx->pc = 0x149788u;
    // NOP
    // 0x14978c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14978cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149790: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x149794u;
}
