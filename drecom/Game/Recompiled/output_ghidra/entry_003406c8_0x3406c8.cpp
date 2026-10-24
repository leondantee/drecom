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

// Function: entry_003406c8
// Address: 0x3406c8 - 0x340770
void entry_003406c8_0x3406c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003406c8_0x3406c8");
#endif

    switch (ctx->pc) {
        case 0x3406f8u: goto label_3406f8;
        case 0x34071cu: goto label_34071c;
        default: break;
    }

    ctx->pc = 0x3406c8u;

    // 0x3406c8: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x3406c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x3406cc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3406CCu;
    {
        const bool branch_taken_0x3406cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3406cc) {
            ctx->pc = 0x340690u;
            return;
        }
    }
    ctx->pc = 0x3406D4u;
    // 0x3406d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3406d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3406d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3406d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3406dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3406dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3406e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3406e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406e8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3406e8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3406ec: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3406ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3406f0: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3406F0u;
    SET_GPR_U32(ctx, 31, 0x3406F8u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3406F0u, 0x3406F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406F8u;
label_3406f8:
    // 0x3406f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3406f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3406fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3406fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340700: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340704: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340704u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340708: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340708u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34070c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x34070cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340710: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x340710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340714: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340714u;
    SET_GPR_U32(ctx, 31, 0x34071Cu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340714u, 0x34071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34071Cu;
label_34071c:
    // 0x34071c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340720: 0x8c641290  lw          $a0, 0x1290($v1)
    ctx->pc = 0x340720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x340724: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x340724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340728: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x340728u;
    {
        const bool branch_taken_0x340728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340728) {
            ctx->pc = 0x340770u;
            return;
        }
    }
    ctx->pc = 0x340730u;
    // 0x340730: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340734: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x340734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x340738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x340738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x34073c: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x34073cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x340740: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x340740u;
    {
        const bool branch_taken_0x340740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340740) {
            ctx->pc = 0x340770u;
            return;
        }
    }
    ctx->pc = 0x340748u;
    // 0x340748: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34074c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x34074cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x340750: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x340750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340758: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x340758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x34075c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340760: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x340760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340764: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x340764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x340768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34076c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x34076cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x340770u;
}
