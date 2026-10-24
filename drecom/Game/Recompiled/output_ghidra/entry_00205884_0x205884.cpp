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

// Function: entry_00205884
// Address: 0x205884 - 0x2058c4
void entry_00205884_0x205884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205884_0x205884");
#endif

    switch (ctx->pc) {
        case 0x2058a4u: goto label_2058a4;
        default: break;
    }

    ctx->pc = 0x205884u;

    // 0x205884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205888: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20588c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20588cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x205890: 0x24065a1c  addiu       $a2, $zero, 0x5A1C
    ctx->pc = 0x205890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23068));
    // 0x205894: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205898: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x205898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20589c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20589Cu;
    SET_GPR_U32(ctx, 31, 0x2058A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20589Cu, 0x2058A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058A4u;
label_2058a4:
    // 0x2058a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2058a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058a8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x2058a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2058ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058b0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2058b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2058b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2058b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2058b8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2058b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2058bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2058BCu;
    {
        const bool branch_taken_0x2058bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058bc) {
            ctx->pc = 0x2058FCu;
            return;
        }
    }
    ctx->pc = 0x2058C4u;
}
