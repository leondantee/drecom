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

// Function: caseD_4
// Address: 0x1302fc - 0x13033c
void caseD_4_0x1302fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1302fc");
#endif

    switch (ctx->pc) {
        case 0x130320u: goto label_130320;
        default: break;
    }

    ctx->pc = 0x1302fcu;

    // 0x1302fc: 0x24100047  addiu       $s0, $zero, 0x47
    ctx->pc = 0x1302fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x130300: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130304: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130308: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13030c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x13030cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x130310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130314: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x130318: 0xc0965d0  jal         func_259740
    ctx->pc = 0x130318u;
    SET_GPR_U32(ctx, 31, 0x130320u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130318u, 0x130320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130320u;
label_130320:
    // 0x130320: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x130320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x130324: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130328: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x130328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13032c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130330: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x130330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130338: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x130338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13033cu;
}
