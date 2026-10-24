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

// Function: entry_0036077c
// Address: 0x36077c - 0x3607cc
void entry_0036077c_0x36077c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036077c_0x36077c");
#endif

    switch (ctx->pc) {
        case 0x36079cu: goto label_36079c;
        default: break;
    }

    ctx->pc = 0x36077cu;

    // 0x36077c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360784: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360788: 0x24060a05  addiu       $a2, $zero, 0xA05
    ctx->pc = 0x360788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2565));
    // 0x36078c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36078cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360790: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360794: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360794u;
    SET_GPR_U32(ctx, 31, 0x36079Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360794u, 0x36079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36079Cu;
label_36079c:
    // 0x36079c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3607a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3607a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607a4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x3607a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x3607a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607ac: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x3607acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x3607b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3607b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3607b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3607b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3607b8: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x3607b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x3607bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3607bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607c0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3607c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3607c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3607c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3607c8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3607c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3607ccu;
}
