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

// Function: entry_00308f84
// Address: 0x308f84 - 0x308ff4
void entry_00308f84_0x308f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308f84_0x308f84");
#endif

    switch (ctx->pc) {
        case 0x308fb4u: goto label_308fb4;
        default: break;
    }

    ctx->pc = 0x308f84u;

    // 0x308f84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f88: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x308f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308f8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f90: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x308f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x308f94: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x308f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x308f98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308f9c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x308f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x308fa0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x308fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308fa4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x308fa8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x308fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308fac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308FACu;
    SET_GPR_U32(ctx, 31, 0x308FB4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308FACu, 0x308FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FB4u;
label_308fb4:
    // 0x308fb4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x308FB4u;
    {
        const bool branch_taken_0x308fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308fb4) {
            ctx->pc = 0x308FF4u;
            return;
        }
    }
    ctx->pc = 0x308FBCu;
    // 0x308fbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308fc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308fc8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x308fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308fcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fd0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308fd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308fdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fe0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308fe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fe8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308fec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x308FECu;
    {
        const bool branch_taken_0x308fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308fec) {
            ctx->pc = 0x30905Cu;
            return;
        }
    }
    ctx->pc = 0x308FF4u;
}
