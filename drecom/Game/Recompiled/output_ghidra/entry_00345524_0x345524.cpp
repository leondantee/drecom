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

// Function: entry_00345524
// Address: 0x345524 - 0x345584
void entry_00345524_0x345524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345524_0x345524");
#endif

    switch (ctx->pc) {
        case 0x345560u: goto label_345560;
        case 0x34557cu: goto label_34557c;
        default: break;
    }

    ctx->pc = 0x345524u;

    // 0x345524: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345528: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x345528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x34552c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34552Cu;
    {
        const bool branch_taken_0x34552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34552c) {
            ctx->pc = 0x345584u;
            return;
        }
    }
    ctx->pc = 0x345534u;
    // 0x345534: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x345534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x345538: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x345538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34553c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34553cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345540: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x345540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345544: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345548: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x345548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34554c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345550: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345554: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x345554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x345558: 0xc05c848  jal         func_172120
    ctx->pc = 0x345558u;
    SET_GPR_U32(ctx, 31, 0x345560u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x345558u, 0x345560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345560u;
label_345560:
    // 0x345560: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x345560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x345564: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345568: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x345568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34556c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345570: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x345570u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345574: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x345574u;
    SET_GPR_U32(ctx, 31, 0x34557Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x345574u, 0x34557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34557Cu;
label_34557c:
    // 0x34557c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345580: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x345580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x345584u;
}
