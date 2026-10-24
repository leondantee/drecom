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

// Function: entry_00130024
// Address: 0x130024 - 0x130060
void entry_00130024_0x130024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130024_0x130024");
#endif

    switch (ctx->pc) {
        case 0x130044u: goto label_130044;
        default: break;
    }

    ctx->pc = 0x130024u;

    // 0x130024: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130028: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13002c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x13002cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130030: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x130030u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x130034: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130038: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13003c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13003Cu;
    SET_GPR_U32(ctx, 31, 0x130044u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13003Cu, 0x130044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130044u;
label_130044:
    // 0x130044: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x130044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130048: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13004c: 0xa4441278  sh          $a0, 0x1278($v0)
    ctx->pc = 0x13004cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x130050: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130054: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x130054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x130058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13005c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x13005cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x130060u;
}
