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

// Function: entry_002fad74
// Address: 0x2fad74 - 0x2fae14
void entry_002fad74_0x2fad74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fad74_0x2fad74");
#endif

    switch (ctx->pc) {
        case 0x2fadbcu: goto label_2fadbc;
        case 0x2faddcu: goto label_2faddc;
        case 0x2fae0cu: goto label_2fae0c;
        default: break;
    }

    ctx->pc = 0x2fad74u;

    // 0x2fad74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fad78: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fad78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fad7c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2fad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2fad80: 0x14830040  bne         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2FAD80u;
    {
        const bool branch_taken_0x2fad80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fad80) {
            ctx->pc = 0x2FAE84u;
            return;
        }
    }
    ctx->pc = 0x2FAD88u;
    // 0x2fad88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fad8c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fad90: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FAD90u;
    {
        const bool branch_taken_0x2fad90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fad90) {
            ctx->pc = 0x2FAE14u;
            return;
        }
    }
    ctx->pc = 0x2FAD98u;
    // 0x2fad98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fad98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fad9c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fada0: 0x24670640  addiu       $a3, $v1, 0x640
    ctx->pc = 0x2fada0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
    // 0x2fada4: 0x2409001d  addiu       $t1, $zero, 0x1D
    ctx->pc = 0x2fada4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fada8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fada8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fadac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fadacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadb0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fadb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadb4: 0xc065580  jal         func_195600
    ctx->pc = 0x2FADB4u;
    SET_GPR_U32(ctx, 31, 0x2FADBCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FADB4u, 0x2FADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADBCu;
label_2fadbc:
    // 0x2fadbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fadc0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fadc4: 0x24470680  addiu       $a3, $v0, 0x680
    ctx->pc = 0x2fadc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2fadc8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x2fadc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fadcc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fadccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadd0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fadd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadd4: 0xc065580  jal         func_195600
    ctx->pc = 0x2FADD4u;
    SET_GPR_U32(ctx, 31, 0x2FADDCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FADD4u, 0x2FADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADDCu;
label_2faddc:
    // 0x2faddc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2faddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fade0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fade0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fade4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fade4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fade8: 0x244706c0  addiu       $a3, $v0, 0x6C0
    ctx->pc = 0x2fade8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2fadec: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2fadecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fadf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fadf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fadf4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2fadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadf8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fadf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fadfc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fadfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae00: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fae00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fae04: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE04u;
    SET_GPR_U32(ctx, 31, 0x2FAE0Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE04u, 0x2FAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE0Cu;
label_2fae0c:
    // 0x2fae0c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FAE0Cu;
    {
        const bool branch_taken_0x2fae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fae0c) {
            ctx->pc = 0x2FAE84u;
            return;
        }
    }
    ctx->pc = 0x2FAE14u;
}
