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

// Function: entry_0022e858
// Address: 0x22e858 - 0x22e8a8
void entry_0022e858_0x22e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e858_0x22e858");
#endif

    switch (ctx->pc) {
        case 0x22e89cu: goto label_22e89c;
        default: break;
    }

    ctx->pc = 0x22e858u;

    // 0x22e858: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e85c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e860: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x22e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22e864: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x22e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x22e868: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E868u;
    {
        const bool branch_taken_0x22e868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e868) {
            ctx->pc = 0x22E8A8u;
            return;
        }
    }
    ctx->pc = 0x22E870u;
    // 0x22e870: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e874: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x22e874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e87c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e880: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22e884: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22e888: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22e888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22e88c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22e890: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22e894: 0xc05c848  jal         func_172120
    ctx->pc = 0x22E894u;
    SET_GPR_U32(ctx, 31, 0x22E89Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22E894u, 0x22E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E89Cu;
label_22e89c:
    // 0x22e89c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22e8a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22E8A0u;
    {
        const bool branch_taken_0x22e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8a0) {
            ctx->pc = 0x22E8ECu;
            return;
        }
    }
    ctx->pc = 0x22E8A8u;
}
