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

// Function: entry_001219b0
// Address: 0x1219b0 - 0x121a14
void entry_001219b0_0x1219b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001219b0_0x1219b0");
#endif

    switch (ctx->pc) {
        case 0x1219d4u: goto label_1219d4;
        default: break;
    }

    ctx->pc = 0x1219b0u;

    // 0x1219b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1219b4: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x1219b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1219b8: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1219b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x1219bc: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1219bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1219c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1219c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1219c4: 0x0  nop
    ctx->pc = 0x1219c4u;
    // NOP
    // 0x1219c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1219c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1219cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1219CCu;
    SET_GPR_U32(ctx, 31, 0x1219D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1219CCu, 0x1219D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219D4u;
label_1219d4:
    // 0x1219d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1219d8: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x1219d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x1219dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1219dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1219e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1219e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1219e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1219e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1219e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1219ec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1219ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1219f0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1219f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1219f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1219f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1219f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1219fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1219fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121a00: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121a00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121a04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121a08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x121a0c: 0x100004c8  b           . + 4 + (0x4C8 << 2)
    ctx->pc = 0x121A0Cu;
    {
        const bool branch_taken_0x121a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121a0c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121A14u;
}
