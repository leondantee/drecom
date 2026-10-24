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

// Function: entry_0030fd44
// Address: 0x30fd44 - 0x30fd88
void entry_0030fd44_0x30fd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fd44_0x30fd44");
#endif

    switch (ctx->pc) {
        case 0x30fd64u: goto label_30fd64;
        default: break;
    }

    ctx->pc = 0x30fd44u;

    // 0x30fd44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd48: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x30fd48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x30fd4c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd50: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30fd54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fd58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30fd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fd5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30FD5Cu;
    SET_GPR_U32(ctx, 31, 0x30FD64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30FD5Cu, 0x30FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD64u;
label_30fd64:
    // 0x30fd64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd68: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30fd68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fd6c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30fd70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd74: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x30fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fd78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd7c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30fd7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fd80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fd84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30fd84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30fd88u;
}
