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

// Function: entry_00327820
// Address: 0x327820 - 0x327870
void entry_00327820_0x327820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327820_0x327820");
#endif

    switch (ctx->pc) {
        case 0x32783cu: goto label_32783c;
        case 0x327864u: goto label_327864;
        default: break;
    }

    ctx->pc = 0x327820u;

    // 0x327820: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x327820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x327824: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x327824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x327828: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x327828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32782c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327830: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x327830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327834: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x327834u;
    SET_GPR_U32(ctx, 31, 0x32783Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x32783Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32783Cu) { return; }
    ctx->pc = 0x32783Cu;
label_32783c:
    // 0x32783c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32783cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327844: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x327844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327848: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x327848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32784c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327850: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327854: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x327854u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x327858: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x327858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32785c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x32785Cu;
    SET_GPR_U32(ctx, 31, 0x327864u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x32785Cu, 0x327864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327864u;
label_327864:
    // 0x327864: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x327864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327868: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x327868u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32786c: 0x0  nop
    ctx->pc = 0x32786cu;
    // NOP
    ctx->pc = 0x327870u;
}
