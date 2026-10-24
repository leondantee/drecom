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

// Function: entry_00247b9c
// Address: 0x247b9c - 0x247c10
void entry_00247b9c_0x247b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247b9c_0x247b9c");
#endif

    switch (ctx->pc) {
        case 0x247ba4u: goto label_247ba4;
        default: break;
    }

    ctx->pc = 0x247b9cu;

    // 0x247b9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247B9Cu;
    SET_GPR_U32(ctx, 31, 0x247BA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247B9Cu, 0x247BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BA4u;
label_247ba4:
    // 0x247ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247ba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247bac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x247BACu;
    {
        const bool branch_taken_0x247bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247bac) {
            ctx->pc = 0x247C10u;
            return;
        }
    }
    ctx->pc = 0x247BB4u;
    // 0x247bb4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x247bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247bb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x247bbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x247bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x247bc0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x247bc0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247bc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247bc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247bcc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x247bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247bd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247bd4: 0x0  nop
    ctx->pc = 0x247bd4u;
    // NOP
    // 0x247bd8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x247BD8u;
    {
        const bool branch_taken_0x247bd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247bd8) {
            ctx->pc = 0x247C10u;
            return;
        }
    }
    ctx->pc = 0x247BE0u;
    // 0x247be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247be4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247be8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x247be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x247bec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x247becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x247bf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247bf4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247bf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247bfc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x247bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247c00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c04: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x247c10u;
}
