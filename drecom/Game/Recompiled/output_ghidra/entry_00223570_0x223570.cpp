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

// Function: entry_00223570
// Address: 0x223570 - 0x2235bc
void entry_00223570_0x223570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223570_0x223570");
#endif

    switch (ctx->pc) {
        case 0x2235a4u: goto label_2235a4;
        default: break;
    }

    ctx->pc = 0x223570u;

    // 0x223570: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223574: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x223574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x223578: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x223578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22357c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x22357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x223580: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x223580u;
    {
        const bool branch_taken_0x223580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223580) {
            ctx->pc = 0x2235BCu;
            return;
        }
    }
    ctx->pc = 0x223588u;
    // 0x223588: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x223588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22358c: 0x24a60234  addiu       $a2, $a1, 0x234
    ctx->pc = 0x22358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 564));
    // 0x223590: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x223590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x223594: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x223594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223598: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x223598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22359c: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x22359Cu;
    SET_GPR_U32(ctx, 31, 0x2235A4u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x22359Cu, 0x2235A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235A4u;
label_2235a4:
    // 0x2235a4: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x2235a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2235a8: 0x252b023c  addiu       $t3, $t1, 0x23C
    ctx->pc = 0x2235a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 572));
    // 0x2235ac: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x2235acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2235b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2235b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2235b4: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2235B4u;
    SET_GPR_U32(ctx, 31, 0x2235BCu);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2235B4u, 0x2235BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235BCu;
}
