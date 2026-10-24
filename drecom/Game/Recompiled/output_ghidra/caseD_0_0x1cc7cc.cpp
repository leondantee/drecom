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

// Function: caseD_0
// Address: 0x1cc7cc - 0x1cc848
void caseD_0_0x1cc7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1cc7cc");
#endif

    switch (ctx->pc) {
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc81cu: goto label_1cc81c;
        default: break;
    }

    ctx->pc = 0x1cc7ccu;

    // 0x1cc7cc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cc7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc7d0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1cc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cc7d4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x1cc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x1cc7d8: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x1cc7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cc7dc: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1cc7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1cc7e0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1cc7e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc7ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cc7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cc7f0: 0x24061e84  addiu       $a2, $zero, 0x1E84
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7812));
    // 0x1cc7f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc7f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cc7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cc7fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CC7FCu;
    SET_GPR_U32(ctx, 31, 0x1CC804u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CC7FCu, 0x1CC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC804u;
label_1cc804:
    // 0x1cc804: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc808: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x1cc808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1cc80c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cc80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cc810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc814: 0xc0c5064  jal         func_314190
    ctx->pc = 0x1CC814u;
    SET_GPR_U32(ctx, 31, 0x1CC81Cu);
    ctx->pc = 0x314190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314190u, 0x1CC814u, 0x1CC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC81Cu;
label_1cc81c:
    // 0x1cc81c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc820: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x1cc820u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cc824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc828: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc82c: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1cc82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    // 0x1cc830: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc834: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1cc834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1cc838: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cc838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc83c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1cc83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cc840: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1cc840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cc844: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1cc844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1cc848u;
}
