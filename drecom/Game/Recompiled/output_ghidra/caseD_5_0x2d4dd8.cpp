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

// Function: caseD_5
// Address: 0x2d4dd8 - 0x2d4e54
void caseD_5_0x2d4dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2d4dd8");
#endif

    switch (ctx->pc) {
        case 0x2d4de8u: goto label_2d4de8;
        case 0x2d4df4u: goto label_2d4df4;
        case 0x2d4e04u: goto label_2d4e04;
        case 0x2d4e10u: goto label_2d4e10;
        default: break;
    }

    ctx->pc = 0x2d4dd8u;

    // 0x2d4dd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4ddc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4de0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4DE0u;
    SET_GPR_U32(ctx, 31, 0x2D4DE8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4DE0u, 0x2D4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DE8u;
label_2d4de8:
    // 0x2d4de8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4dec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4DECu;
    SET_GPR_U32(ctx, 31, 0x2D4DF4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4DECu, 0x2D4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DF4u;
label_2d4df4:
    // 0x2d4df4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4df8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4df8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4dfc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4DFCu;
    SET_GPR_U32(ctx, 31, 0x2D4E04u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4DFCu, 0x2D4E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E04u;
label_2d4e04:
    // 0x2d4e04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e08: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4E08u;
    SET_GPR_U32(ctx, 31, 0x2D4E10u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4E08u, 0x2D4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E10u;
label_2d4e10:
    // 0x2d4e10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4e18: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D4E18u;
    {
        const bool branch_taken_0x2d4e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4e18) {
            ctx->pc = 0x2D4E54u;
            return;
        }
    }
    ctx->pc = 0x2D4E20u;
    // 0x2d4e20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d4e24: 0xa020ec68  sb          $zero, -0x1398($at)
    ctx->pc = 0x2d4e24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x2d4e28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4e2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4e34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e38: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d4e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4e3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4e4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d4e54u;
}
