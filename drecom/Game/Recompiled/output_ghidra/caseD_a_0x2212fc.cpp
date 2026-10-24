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
// Address: 0x2212fc - 0x221370
void caseD_a_0x2212fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x2212fc");
#endif

    switch (ctx->pc) {
        case 0x22134cu: goto label_22134c;
        default: break;
    }

    ctx->pc = 0x2212fcu;

    // 0x2212fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2212fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221300: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221304: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x221304u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x221308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22130c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x22130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221310: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x221310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x221314: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221318: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x221318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22131c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x22131cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221320: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x221320u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x221324: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221328: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x221328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22132c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x22132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221330: 0xa08011ee  sb          $zero, 0x11EE($a0)
    ctx->pc = 0x221330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x221334: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221338: 0x90a411ef  lbu         $a0, 0x11EF($a1)
    ctx->pc = 0x221338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4591)));
    // 0x22133c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221340: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x221340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x221344: 0xc067694  jal         func_19DA50
    ctx->pc = 0x221344u;
    SET_GPR_U32(ctx, 31, 0x22134Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x221344u, 0x22134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22134Cu;
label_22134c:
    // 0x22134c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22134cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221350: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x221350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x221354: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x221354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x221358: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x221358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x22135c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22135cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x221360: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x221360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x221364: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221368: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x221368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22136c: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x22136cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x221370u;
}
