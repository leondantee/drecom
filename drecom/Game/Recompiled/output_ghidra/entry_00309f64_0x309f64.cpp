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

// Function: entry_00309f64
// Address: 0x309f64 - 0x309fa0
void entry_00309f64_0x309f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309f64_0x309f64");
#endif

    switch (ctx->pc) {
        case 0x309f84u: goto label_309f84;
        default: break;
    }

    ctx->pc = 0x309f64u;

    // 0x309f64: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f68: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f6c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x309f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x309f70: 0x2406283f  addiu       $a2, $zero, 0x283F
    ctx->pc = 0x309f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10303));
    // 0x309f74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309f78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309f7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309F7Cu;
    SET_GPR_U32(ctx, 31, 0x309F84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309F7Cu, 0x309F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F84u;
label_309f84:
    // 0x309f84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x309f84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x309f88: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x309f88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f8c: 0xa6401278  sh          $zero, 0x1278($s2)
    ctx->pc = 0x309f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309f90: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f94: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x309f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x309f98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309f9c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x309f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x309fa0u;
}
