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

// Function: entry_00131d4c
// Address: 0x131d4c - 0x131dd0
void entry_00131d4c_0x131d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131d4c_0x131d4c");
#endif

    switch (ctx->pc) {
        case 0x131d5cu: goto label_131d5c;
        case 0x131d68u: goto label_131d68;
        case 0x131d78u: goto label_131d78;
        case 0x131d84u: goto label_131d84;
        default: break;
    }

    ctx->pc = 0x131d4cu;

    // 0x131d4c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131d50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131d54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131D54u;
    SET_GPR_U32(ctx, 31, 0x131D5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131D54u, 0x131D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D5Cu;
label_131d5c:
    // 0x131d5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d60: 0xc05cd10  jal         func_173440
    ctx->pc = 0x131D60u;
    SET_GPR_U32(ctx, 31, 0x131D68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x131D60u, 0x131D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D68u;
label_131d68:
    // 0x131d68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131d70: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x131D70u;
    SET_GPR_U32(ctx, 31, 0x131D78u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131D70u, 0x131D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D78u;
label_131d78:
    // 0x131d78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x131D7Cu;
    SET_GPR_U32(ctx, 31, 0x131D84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x131D7Cu, 0x131D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D84u;
label_131d84:
    // 0x131d84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d88: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131d8c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x131D8Cu;
    {
        const bool branch_taken_0x131d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d8c) {
            ctx->pc = 0x131DD0u;
            return;
        }
    }
    ctx->pc = 0x131D94u;
    // 0x131d94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131da0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131da8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x131da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131dac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131db0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x131db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131db4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131db8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x131db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131dbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131dc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x131dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131dc4: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131dc8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131DC8u;
    {
        const bool branch_taken_0x131dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dc8) {
            ctx->pc = 0x131DD0u;
            return;
        }
    }
    ctx->pc = 0x131DD0u;
}
