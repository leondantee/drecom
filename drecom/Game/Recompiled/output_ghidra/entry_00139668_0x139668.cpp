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

// Function: entry_00139668
// Address: 0x139668 - 0x1396bc
void entry_00139668_0x139668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139668_0x139668");
#endif

    switch (ctx->pc) {
        case 0x139688u: goto label_139688;
        default: break;
    }

    ctx->pc = 0x139668u;

    // 0x139668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13966c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139670: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x139674: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x139674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x139678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13967c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13967cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139680: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139680u;
    SET_GPR_U32(ctx, 31, 0x139688u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139680u, 0x139688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139688u;
label_139688:
    // 0x139688: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13968c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x139690: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x139690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x139694: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x139698: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13969c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x13969cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1396a0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1396a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1396a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1396a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396a8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1396a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1396ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1396acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1396b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1396b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1396b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1396b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1396b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1396bcu;
}
