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

// Function: caseD_a
// Address: 0x1b9504 - 0x1b955c
void caseD_a_0x1b9504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1b9504");
#endif

    switch (ctx->pc) {
        case 0x1b9524u: goto label_1b9524;
        case 0x1b9558u: goto label_1b9558;
        default: break;
    }

    ctx->pc = 0x1b9504u;

    // 0x1b9504: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b950c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b950cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b9510: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1b9510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1b9514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b951c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B951Cu;
    SET_GPR_U32(ctx, 31, 0x1B9524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B951Cu, 0x1B9524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9524u;
label_1b9524:
    // 0x1b9524: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9524u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9528: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b952c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9530: 0x3c04c332  lui         $a0, 0xC332
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49970 << 16));
    // 0x1b9534: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x1b9534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x1b9538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b953c: 0x0  nop
    ctx->pc = 0x1b953cu;
    // NOP
    // 0x1b9540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9544: 0x0  nop
    ctx->pc = 0x1b9544u;
    // NOP
    // 0x1b9548: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9548u;
    {
        const bool branch_taken_0x1b9548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9548) {
            ctx->pc = 0x1B955Cu;
            return;
        }
    }
    ctx->pc = 0x1B9550u;
    // 0x1b9550: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1B9550u;
    SET_GPR_U32(ctx, 31, 0x1B9558u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1B9550u, 0x1B9558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9558u;
label_1b9558:
    // 0x1b9558: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b9558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b955cu;
}
