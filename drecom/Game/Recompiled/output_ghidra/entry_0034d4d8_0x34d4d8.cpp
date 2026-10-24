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

// Function: entry_0034d4d8
// Address: 0x34d4d8 - 0x34d548
void entry_0034d4d8_0x34d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d4d8_0x34d4d8");
#endif

    switch (ctx->pc) {
        case 0x34d524u: goto label_34d524;
        case 0x34d540u: goto label_34d540;
        default: break;
    }

    ctx->pc = 0x34d4d8u;

    // 0x34d4d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d4dc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x34d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d4e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d4e4: 0x0  nop
    ctx->pc = 0x34d4e4u;
    // NOP
    // 0x34d4e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34d4e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d4ec: 0x0  nop
    ctx->pc = 0x34d4ecu;
    // NOP
    // 0x34d4f0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x34D4F0u;
    {
        const bool branch_taken_0x34d4f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d4f0) {
            ctx->pc = 0x34D548u;
            return;
        }
    }
    ctx->pc = 0x34D4F8u;
    // 0x34d4f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d4fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d500: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x34d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x34d504: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34d508: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34d508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d50c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34d510: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34d514: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34d518: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34d51c: 0xc05c848  jal         func_172120
    ctx->pc = 0x34D51Cu;
    SET_GPR_U32(ctx, 31, 0x34D524u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34D51Cu, 0x34D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D524u;
label_34d524:
    // 0x34d524: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34d524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34d528: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d52c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d530: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x34d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d534: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34d534u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34d538: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34D538u;
    SET_GPR_U32(ctx, 31, 0x34D540u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34D538u, 0x34D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D540u;
label_34d540:
    // 0x34d540: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d544: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x34d548u;
}
