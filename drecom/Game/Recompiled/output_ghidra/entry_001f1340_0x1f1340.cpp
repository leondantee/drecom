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

// Function: entry_001f1340
// Address: 0x1f1340 - 0x1f1384
void entry_001f1340_0x1f1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1340_0x1f1340");
#endif

    switch (ctx->pc) {
        case 0x1f1380u: goto label_1f1380;
        default: break;
    }

    ctx->pc = 0x1f1340u;

    // 0x1f1340: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1344: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1348: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f1348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f134c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f1350: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f1350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1358: 0x0  nop
    ctx->pc = 0x1f1358u;
    // NOP
    // 0x1f135c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f135cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1360: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1364: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1368: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f136c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1370: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1374: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f1374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f1378: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F1378u;
    SET_GPR_U32(ctx, 31, 0x1F1380u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F1378u, 0x1F1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1380u;
label_1f1380:
    // 0x1f1380: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f1380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x1f1384u;
}
