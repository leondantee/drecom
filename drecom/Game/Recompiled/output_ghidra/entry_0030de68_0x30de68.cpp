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

// Function: entry_0030de68
// Address: 0x30de68 - 0x30debc
void entry_0030de68_0x30de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030de68_0x30de68");
#endif

    switch (ctx->pc) {
        case 0x30de88u: goto label_30de88;
        default: break;
    }

    ctx->pc = 0x30de68u;

    // 0x30de68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30de70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30de74: 0x24063210  addiu       $a2, $zero, 0x3210
    ctx->pc = 0x30de74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x30de78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30de78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30de7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30de7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30de80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30DE80u;
    SET_GPR_U32(ctx, 31, 0x30DE88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30DE80u, 0x30DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DE88u;
label_30de88:
    // 0x30de88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de8c: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30de90: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30de94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30de98: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30de98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30de9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dea0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30dea0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30dea4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dea8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30dea8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30deac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30deb0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30deb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30deb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30deb8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30debcu;
}
