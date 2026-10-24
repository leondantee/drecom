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

// Function: entry_00340868
// Address: 0x340868 - 0x3408fc
void entry_00340868_0x340868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340868_0x340868");
#endif

    switch (ctx->pc) {
        case 0x340898u: goto label_340898;
        case 0x3408bcu: goto label_3408bc;
        default: break;
    }

    ctx->pc = 0x340868u;

    // 0x340868: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x34086c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x34086Cu;
    {
        const bool branch_taken_0x34086c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34086c) {
            ctx->pc = 0x34082Cu;
            return;
        }
    }
    ctx->pc = 0x340874u;
    // 0x340874: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340878: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x340878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34087c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34087cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340880: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340880u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340884: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340884u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340888: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340888u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34088c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x34088cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340890: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340890u;
    SET_GPR_U32(ctx, 31, 0x340898u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340890u, 0x340898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340898u;
label_340898:
    // 0x340898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34089c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x34089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3408a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3408a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3408a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3408a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408ac: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3408acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408b0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3408b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408b4: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3408B4u;
    SET_GPR_U32(ctx, 31, 0x3408BCu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3408B4u, 0x3408BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408BCu;
label_3408bc:
    // 0x3408bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3408bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408c0: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x3408c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x3408c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3408c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3408c8: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x3408c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x3408cc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3408CCu;
    {
        const bool branch_taken_0x3408cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3408cc) {
            ctx->pc = 0x3408FCu;
            return;
        }
    }
    ctx->pc = 0x3408D4u;
    // 0x3408d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3408d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3408dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3408e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3408e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408e8: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x3408e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x3408ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408f0: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x3408f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x3408f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408f8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3408f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3408fcu;
}
