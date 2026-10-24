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

// Function: entry_0026053c
// Address: 0x26053c - 0x2605a4
void entry_0026053c_0x26053c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026053c_0x26053c");
#endif

    switch (ctx->pc) {
        case 0x260550u: goto label_260550;
        case 0x260578u: goto label_260578;
        default: break;
    }

    ctx->pc = 0x26053cu;

label_26053c:
    // 0x26053c: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x26053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260540:
    // 0x260540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260544:
    // 0x260544: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260548:
    // 0x260548: 0xc040c24  jal         func_103090
label_26054c:
    if (ctx->pc == 0x26054Cu) {
        ctx->pc = 0x260550u;
        goto label_260550;
    }
    ctx->pc = 0x260548u;
    SET_GPR_U32(ctx, 31, 0x260550u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260550u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260550u) { return; }
    ctx->pc = 0x260550u;
label_260550:
    // 0x260550: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260554:
    // 0x260554: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x260554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260558:
    // 0x260558: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x260558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26055c:
    // 0x26055c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x26055cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_260560:
    // 0x260560: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260564:
    // 0x260564: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260568:
    // 0x260568: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_26056c:
    // 0x26056c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26056cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260570:
    // 0x260570: 0xc040ed8  jal         func_103B60
label_260574:
    if (ctx->pc == 0x260574u) {
        ctx->pc = 0x260578u;
        goto label_260578;
    }
    ctx->pc = 0x260570u;
    SET_GPR_U32(ctx, 31, 0x260578u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x260578u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260578u) { return; }
    ctx->pc = 0x260578u;
label_260578:
    // 0x260578: 0x2284fffd  addi        $a0, $s4, -0x3
    ctx->pc = 0x260578u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_26057c:
    // 0x26057c: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x26057cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_260580:
    // 0x260580: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_260584:
    if (ctx->pc == 0x260584u) {
        ctx->pc = 0x260588u;
        goto label_260588;
    }
    ctx->pc = 0x260580u;
    {
        const bool branch_taken_0x260580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x260580) {
            ctx->pc = 0x2605FCu;
            return;
        }
    }
    ctx->pc = 0x260588u;
label_260588:
    // 0x260588: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x260588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_26058c:
    // 0x26058c: 0x244213b0  addiu       $v0, $v0, 0x13B0
    ctx->pc = 0x26058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
label_260590:
    // 0x260590: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x260590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_260594:
    // 0x260594: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x260594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_260598:
    // 0x260598: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26059c:
    // 0x26059c: 0x800008  jr          $a0
label_2605a0:
    if (ctx->pc == 0x2605A0u) {
        ctx->pc = 0x2605A4u;
        goto label_fallthrough_0x26059c;
    }
    ctx->pc = 0x26059Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26059Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x26059c:
    ctx->pc = 0x2605A4u;
}
