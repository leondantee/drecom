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

// Function: caseD_3
// Address: 0x1bb030 - 0x1bb0a0
void caseD_3_0x1bb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1bb030");
#endif

    switch (ctx->pc) {
        case 0x1bb054u: goto label_1bb054;
        case 0x1bb09cu: goto label_1bb09c;
        default: break;
    }

    ctx->pc = 0x1bb030u;

    // 0x1bb030: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb034: 0x90a209da  lbu         $v0, 0x9DA($a1)
    ctx->pc = 0x1bb034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2522)));
    // 0x1bb038: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb03c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1bb03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1bb040: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1bb040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bb044: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BB044u;
    {
        const bool branch_taken_0x1bb044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb044) {
            ctx->pc = 0x1BB0A0u;
            return;
        }
    }
    ctx->pc = 0x1BB04Cu;
    // 0x1bb04c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1BB04Cu;
    SET_GPR_U32(ctx, 31, 0x1BB054u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BB04Cu, 0x1BB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB054u;
label_1bb054:
    // 0x1bb054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb058: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1bb058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1bb05c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bb060: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1bb064: 0x244352d8  addiu       $v1, $v0, 0x52D8
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21208));
    // 0x1bb068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb06c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1bb06cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb070: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1bb070u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1bb074: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb078: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1bb07c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1bb07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1bb080: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x1bb080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1bb084: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bb084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb088: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1bb088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1bb08c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1bb090: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bb090u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb094: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1BB094u;
    SET_GPR_U32(ctx, 31, 0x1BB09Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BB094u, 0x1BB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB09Cu;
label_1bb09c:
    // 0x1bb09c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb09cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bb0a0u;
}
