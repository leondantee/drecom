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

// Function: caseD_6
// Address: 0x1b7770 - 0x1b77bc
void caseD_6_0x1b7770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1b7770");
#endif

    switch (ctx->pc) {
        case 0x1b7790u: goto label_1b7790;
        default: break;
    }

    ctx->pc = 0x1b7770u;

    // 0x1b7770: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7774: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7778: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b777c: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1b777cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1b7780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7784: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b7788: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B7788u;
    SET_GPR_U32(ctx, 31, 0x1B7790u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7788u, 0x1B7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7790u;
label_1b7790:
    // 0x1b7790: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1b7794: 0x34433334  ori         $v1, $v0, 0x3334
    ctx->pc = 0x1b7794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1b7798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b779c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b77a0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b77a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1b77a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b77a8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1b77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1b77ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b77acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b77b0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b77b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1b77b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b77b8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b77b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b77bcu;
}
