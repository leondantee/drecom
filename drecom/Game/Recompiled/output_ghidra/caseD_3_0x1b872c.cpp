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
// Address: 0x1b872c - 0x1b87a0
void caseD_3_0x1b872c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1b872c");
#endif

    switch (ctx->pc) {
        case 0x1b8750u: goto label_1b8750;
        case 0x1b879cu: goto label_1b879c;
        default: break;
    }

    ctx->pc = 0x1b872cu;

    // 0x1b872c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8730: 0x904309da  lbu         $v1, 0x9DA($v0)
    ctx->pc = 0x1b8730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x1b8734: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b8734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b8738: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1b8738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1b873c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1b873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b8740: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B8740u;
    {
        const bool branch_taken_0x1b8740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b8740) {
            ctx->pc = 0x1B87A0u;
            return;
        }
    }
    ctx->pc = 0x1B8748u;
    // 0x1b8748: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1B8748u;
    SET_GPR_U32(ctx, 31, 0x1B8750u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B8748u, 0x1B8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8750u;
label_1b8750:
    // 0x1b8750: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8750u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8754: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b8754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b8758: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x1b8758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1b875c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1b875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b8760: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b8760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b8764: 0x248552d8  addiu       $a1, $a0, 0x52D8
    ctx->pc = 0x1b8764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
    // 0x1b8768: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b8768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b876c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1b876cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8770: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x1b8770u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1b8774: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8778: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1b8778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1b877c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1b877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1b8780: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1b8780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1b8784: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1b8784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8788: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b8788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b878c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1b878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1b8790: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b8790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8794: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1B8794u;
    SET_GPR_U32(ctx, 31, 0x1B879Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B8794u, 0x1B879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B879Cu;
label_1b879c:
    // 0x1b879c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b879cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b87a0u;
}
