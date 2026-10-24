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

// Function: caseD_8
// Address: 0x12c660 - 0x12c6ac
void caseD_8_0x12c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x12c660");
#endif

    switch (ctx->pc) {
        case 0x12c684u: goto label_12c684;
        default: break;
    }

    ctx->pc = 0x12c660u;

    // 0x12c660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c664: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c668: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12c66c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x12c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c674: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x12c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12c678: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x12c678u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c67c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12C67Cu;
    SET_GPR_U32(ctx, 31, 0x12C684u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C67Cu, 0x12C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C684u;
label_12c684:
    // 0x12c684: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c688: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x12c688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c690: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12c694: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c698: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x12c698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c69c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c6a0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12c6a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x12c6a4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c6a8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x12c6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12c6acu;
}
