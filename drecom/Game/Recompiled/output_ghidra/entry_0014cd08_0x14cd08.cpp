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

// Function: entry_0014cd08
// Address: 0x14cd08 - 0x14cd70
void entry_0014cd08_0x14cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd08_0x14cd08");
#endif

    switch (ctx->pc) {
        case 0x14cd28u: goto label_14cd28;
        case 0x14cd4cu: goto label_14cd4c;
        case 0x14cd60u: goto label_14cd60;
        default: break;
    }

    ctx->pc = 0x14cd08u;

    // 0x14cd08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14cd14: 0x24060a43  addiu       $a2, $zero, 0xA43
    ctx->pc = 0x14cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2627));
    // 0x14cd18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cd1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14cd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14cd20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CD20u;
    SET_GPR_U32(ctx, 31, 0x14CD28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CD20u, 0x14CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD28u;
label_14cd28:
    // 0x14cd28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14cd2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd30: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14cd34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd38: 0xac4013fc  sw          $zero, 0x13FC($v0)
    ctx->pc = 0x14cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5116), GPR_U32(ctx, 0));
    // 0x14cd3c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14cd40: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x14cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x14cd44: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CD44u;
    SET_GPR_U32(ctx, 31, 0x14CD4Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CD44u, 0x14CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD4Cu;
label_14cd4c:
    // 0x14cd4c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x14cd50: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14cd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x14cd54: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x14cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x14cd58: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CD58u;
    SET_GPR_U32(ctx, 31, 0x14CD60u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CD58u, 0x14CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD60u;
label_14cd60:
    // 0x14cd60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14cd64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14cd68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cd6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14cd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14cd70u;
}
