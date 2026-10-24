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

// Function: entry_00232a08
// Address: 0x232a08 - 0x232a58
void entry_00232a08_0x232a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232a08_0x232a08");
#endif

    switch (ctx->pc) {
        case 0x232a14u: goto label_232a14;
        case 0x232a30u: goto label_232a30;
        default: break;
    }

    ctx->pc = 0x232a08u;

    // 0x232a08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a0c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x232A0Cu;
    SET_GPR_U32(ctx, 31, 0x232A14u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x232A0Cu, 0x232A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A14u;
label_232a14:
    // 0x232a14: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x232a18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x232a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x232a1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232a20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232a28: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x232A28u;
    SET_GPR_U32(ctx, 31, 0x232A30u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232A28u, 0x232A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A30u;
label_232a30:
    // 0x232a30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a34: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x232a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232a38: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232a40: 0x0  nop
    ctx->pc = 0x232a40u;
    // NOP
    // 0x232a44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x232A44u;
    {
        const bool branch_taken_0x232a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232a44) {
            ctx->pc = 0x232A58u;
            return;
        }
    }
    ctx->pc = 0x232A4Cu;
    // 0x232a4c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232a50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a54: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x232a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x232a58u;
}
