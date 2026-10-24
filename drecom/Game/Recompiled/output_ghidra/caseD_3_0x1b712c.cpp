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
// Address: 0x1b712c - 0x1b719c
void caseD_3_0x1b712c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1b712c");
#endif

    switch (ctx->pc) {
        case 0x1b7150u: goto label_1b7150;
        case 0x1b7198u: goto label_1b7198;
        default: break;
    }

    ctx->pc = 0x1b712cu;

    // 0x1b712c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b712cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7130: 0x908509da  lbu         $a1, 0x9DA($a0)
    ctx->pc = 0x1b7130u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
    // 0x1b7134: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1b7134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b7138: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1b7138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1b713c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1b713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b7140: 0x14440016  bne         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B7140u;
    {
        const bool branch_taken_0x1b7140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b7140) {
            ctx->pc = 0x1B719Cu;
            return;
        }
    }
    ctx->pc = 0x1B7148u;
    // 0x1b7148: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1B7148u;
    SET_GPR_U32(ctx, 31, 0x1B7150u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B7148u, 0x1B7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7150u;
label_1b7150:
    // 0x1b7150: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b7150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b7154: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b7154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b7158: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1b7158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b715c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b715cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b7160: 0x248352d8  addiu       $v1, $a0, 0x52D8
    ctx->pc = 0x1b7160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
    // 0x1b7164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b7168: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1b7168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b716c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1b716cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b7170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7174: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1b7174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1b7178: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x1b7178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x1b717c: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x1b717cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1b7180: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1b7180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7184: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b7184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b7188: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1b7188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b718c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b718cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b7190: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1B7190u;
    SET_GPR_U32(ctx, 31, 0x1B7198u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B7190u, 0x1B7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7198u;
label_1b7198:
    // 0x1b7198: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b719cu;
}
