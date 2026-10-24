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

// Function: entry_00356084
// Address: 0x356084 - 0x356114
void entry_00356084_0x356084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356084_0x356084");
#endif

    switch (ctx->pc) {
        case 0x356094u: goto label_356094;
        case 0x3560a0u: goto label_3560a0;
        case 0x3560b4u: goto label_3560b4;
        case 0x3560c0u: goto label_3560c0;
        default: break;
    }

    ctx->pc = 0x356084u;

    // 0x356084: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356088: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35608c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x35608Cu;
    SET_GPR_U32(ctx, 31, 0x356094u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x35608Cu, 0x356094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356094u;
label_356094:
    // 0x356094: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356098: 0xc05cd10  jal         func_173440
    ctx->pc = 0x356098u;
    SET_GPR_U32(ctx, 31, 0x3560A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x356098u, 0x3560A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560A0u;
label_3560a0:
    // 0x3560a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3560a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3560a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3560a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3560a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3560ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x3560ACu;
    SET_GPR_U32(ctx, 31, 0x3560B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x3560ACu, 0x3560B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560B4u;
label_3560b4:
    // 0x3560b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3560b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3560b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x3560B8u;
    SET_GPR_U32(ctx, 31, 0x3560C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x3560B8u, 0x3560C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560C0u;
label_3560c0:
    // 0x3560c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3560c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3560c8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3560C8u;
    {
        const bool branch_taken_0x3560c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3560c8) {
            ctx->pc = 0x356114u;
            return;
        }
    }
    ctx->pc = 0x3560D0u;
    // 0x3560d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560d4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3560d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3560d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3560dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3560e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3560e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560e8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3560e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3560f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3560f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3560f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3560fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3560fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356100: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x356100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x356104: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356108: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x356108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35610c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356110: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x356110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x356114u;
}
