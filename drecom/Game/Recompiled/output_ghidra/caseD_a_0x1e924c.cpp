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

// Function: caseD_a
// Address: 0x1e924c - 0x1e92bc
void caseD_a_0x1e924c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1e924c");
#endif

    switch (ctx->pc) {
        case 0x1e929cu: goto label_1e929c;
        default: break;
    }

    ctx->pc = 0x1e924cu;

    // 0x1e924c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9250: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9254: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1e9254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e9258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e925c: 0x8fb10198  lw          $s1, 0x198($sp)
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9260: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1e9260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e9264: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9268: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1e9268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e926c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9270: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1e9270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9274: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9278: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e9278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e927c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9280: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x1e9280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9284: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9288: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x1e9288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x1e928c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9290: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1e9290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e9294: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E9294u, 0x1E929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E929Cu;
label_1e929c:
    // 0x1e929c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1e929cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e92a0: 0x30850007  andi        $a1, $a0, 0x7
    ctx->pc = 0x1e92a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1e92a4: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1e92a8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e92a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e92ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e92acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1e92b0: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e92b4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1e92b8: 0xa465005e  sh          $a1, 0x5E($v1)
    ctx->pc = 0x1e92b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1e92bcu;
}
