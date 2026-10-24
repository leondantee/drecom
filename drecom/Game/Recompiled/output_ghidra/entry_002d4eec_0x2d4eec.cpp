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

// Function: entry_002d4eec
// Address: 0x2d4eec - 0x2d4f6c
void entry_002d4eec_0x2d4eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4eec_0x2d4eec");
#endif

    switch (ctx->pc) {
        case 0x2d4efcu: goto label_2d4efc;
        case 0x2d4f08u: goto label_2d4f08;
        case 0x2d4f18u: goto label_2d4f18;
        case 0x2d4f24u: goto label_2d4f24;
        default: break;
    }

    ctx->pc = 0x2d4eecu;

    // 0x2d4eec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ef0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4ef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4ef4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4EF4u;
    SET_GPR_U32(ctx, 31, 0x2D4EFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4EF4u, 0x2D4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EFCu;
label_2d4efc:
    // 0x2d4efc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4F00u;
    SET_GPR_U32(ctx, 31, 0x2D4F08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4F00u, 0x2D4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F08u;
label_2d4f08:
    // 0x2d4f08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4f0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4f10: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4F10u;
    SET_GPR_U32(ctx, 31, 0x2D4F18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4F10u, 0x2D4F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F18u;
label_2d4f18:
    // 0x2d4f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f1c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D4F24u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4F1Cu, 0x2D4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F24u;
label_2d4f24:
    // 0x2d4f24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4f2c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D4F2Cu;
    {
        const bool branch_taken_0x2d4f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f2c) {
            ctx->pc = 0x2D503Cu;
            return;
        }
    }
    ctx->pc = 0x2D4F34u;
    // 0x2d4f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4f38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4f40: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2d4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d4f44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d4f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4f4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4f54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4f5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d4f64: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D4F64u;
    {
        const bool branch_taken_0x2d4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f64) {
            ctx->pc = 0x2D503Cu;
            return;
        }
    }
    ctx->pc = 0x2D4F6Cu;
}
