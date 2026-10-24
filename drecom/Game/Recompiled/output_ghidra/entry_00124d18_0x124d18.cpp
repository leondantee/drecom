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

// Function: entry_00124d18
// Address: 0x124d18 - 0x124db0
void entry_00124d18_0x124d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124d18_0x124d18");
#endif

    switch (ctx->pc) {
        case 0x124d28u: goto label_124d28;
        case 0x124d34u: goto label_124d34;
        case 0x124d44u: goto label_124d44;
        case 0x124d50u: goto label_124d50;
        default: break;
    }

    ctx->pc = 0x124d18u;

    // 0x124d18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x124d1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124d20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x124D20u;
    SET_GPR_U32(ctx, 31, 0x124D28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x124D20u, 0x124D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D28u;
label_124d28:
    // 0x124d28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x124D2Cu;
    SET_GPR_U32(ctx, 31, 0x124D34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x124D2Cu, 0x124D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D34u;
label_124d34:
    // 0x124d34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x124d38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124d3c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x124D3Cu;
    SET_GPR_U32(ctx, 31, 0x124D44u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x124D3Cu, 0x124D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D44u;
label_124d44:
    // 0x124d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x124D48u;
    SET_GPR_U32(ctx, 31, 0x124D50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x124D48u, 0x124D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D50u;
label_124d50:
    // 0x124d50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x124d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x124d58: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x124D58u;
    {
        const bool branch_taken_0x124d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d58) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124D60u;
    // 0x124d60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d64: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124d68: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124d6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124d70: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x124D70u;
    {
        const bool branch_taken_0x124d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d70) {
            ctx->pc = 0x124DB0u;
            return;
        }
    }
    ctx->pc = 0x124D78u;
    // 0x124d78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124d84: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x124d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x124d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124d90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124d98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124da0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124da4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124da8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x124DA8u;
    {
        const bool branch_taken_0x124da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124da8) {
            ctx->pc = 0x124DE0u;
            return;
        }
    }
    ctx->pc = 0x124DB0u;
}
