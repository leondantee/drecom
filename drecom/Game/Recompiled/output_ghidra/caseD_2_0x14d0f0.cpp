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

// Function: caseD_2
// Address: 0x14d0f0 - 0x14d138
void caseD_2_0x14d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14d0f0");
#endif

    switch (ctx->pc) {
        case 0x14d110u: goto label_14d110;
        default: break;
    }

    ctx->pc = 0x14d0f0u;

    // 0x14d0f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d0f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d0f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14d0fc: 0x24060536  addiu       $a2, $zero, 0x536
    ctx->pc = 0x14d0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1334));
    // 0x14d100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d104: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d108: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D108u;
    SET_GPR_U32(ctx, 31, 0x14D110u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D108u, 0x14D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D110u;
label_14d110:
    // 0x14d110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d114: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d118: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14d118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x14d11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d124: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x14d124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x14d128: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d12c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d134: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d138u;
}
