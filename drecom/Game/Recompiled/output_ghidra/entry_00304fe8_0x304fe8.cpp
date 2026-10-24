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

// Function: entry_00304fe8
// Address: 0x304fe8 - 0x305060
void entry_00304fe8_0x304fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304fe8_0x304fe8");
#endif

    switch (ctx->pc) {
        case 0x304ff8u: goto label_304ff8;
        case 0x305004u: goto label_305004;
        case 0x305014u: goto label_305014;
        case 0x305020u: goto label_305020;
        default: break;
    }

    ctx->pc = 0x304fe8u;

    // 0x304fe8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304ff0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304FF0u;
    SET_GPR_U32(ctx, 31, 0x304FF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304FF0u, 0x304FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FF8u;
label_304ff8:
    // 0x304ff8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ffc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304FFCu;
    SET_GPR_U32(ctx, 31, 0x305004u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304FFCu, 0x305004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305004u;
label_305004:
    // 0x305004: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305008: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30500c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30500Cu;
    SET_GPR_U32(ctx, 31, 0x305014u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30500Cu, 0x305014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305014u;
label_305014:
    // 0x305014: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305018: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305018u;
    SET_GPR_U32(ctx, 31, 0x305020u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305018u, 0x305020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305020u;
label_305020:
    // 0x305020: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305024: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305028: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305028u;
    {
        const bool branch_taken_0x305028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305028) {
            ctx->pc = 0x305060u;
            return;
        }
    }
    ctx->pc = 0x305030u;
    // 0x305030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305034: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305038: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30503c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305040: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305044: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305048: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30504c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30504cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305050: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305054: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305058: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30505c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30505cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x305060u;
}
