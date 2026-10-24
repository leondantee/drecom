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

// Function: entry_00365ac4
// Address: 0x365ac4 - 0x365b3c
void entry_00365ac4_0x365ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365ac4_0x365ac4");
#endif

    switch (ctx->pc) {
        case 0x365ad4u: goto label_365ad4;
        case 0x365ae0u: goto label_365ae0;
        case 0x365af0u: goto label_365af0;
        case 0x365afcu: goto label_365afc;
        default: break;
    }

    ctx->pc = 0x365ac4u;

    // 0x365ac4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365acc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365ACCu;
    SET_GPR_U32(ctx, 31, 0x365AD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365ACCu, 0x365AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AD4u;
label_365ad4:
    // 0x365ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ad8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365AD8u;
    SET_GPR_U32(ctx, 31, 0x365AE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365AD8u, 0x365AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AE0u;
label_365ae0:
    // 0x365ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ae4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365ae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365ae8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365AE8u;
    SET_GPR_U32(ctx, 31, 0x365AF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365AE8u, 0x365AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AF0u;
label_365af0:
    // 0x365af0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365af4: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365AF4u;
    SET_GPR_U32(ctx, 31, 0x365AFCu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365AF4u, 0x365AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AFCu;
label_365afc:
    // 0x365afc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b00: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365b04: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x365B04u;
    {
        const bool branch_taken_0x365b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b04) {
            ctx->pc = 0x365B3Cu;
            return;
        }
    }
    ctx->pc = 0x365B0Cu;
    // 0x365b0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365b10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365b1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365b24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365b2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365b34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x365b3cu;
}
