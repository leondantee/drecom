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

// Function: entry_0022adf8
// Address: 0x22adf8 - 0x22ae58
void entry_0022adf8_0x22adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022adf8_0x22adf8");
#endif

    switch (ctx->pc) {
        case 0x22ae34u: goto label_22ae34;
        case 0x22ae50u: goto label_22ae50;
        default: break;
    }

    ctx->pc = 0x22adf8u;

    // 0x22adf8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22adfc: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x22adfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x22ae00: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22AE00u;
    {
        const bool branch_taken_0x22ae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ae00) {
            ctx->pc = 0x22AE58u;
            return;
        }
    }
    ctx->pc = 0x22AE08u;
    // 0x22ae08: 0x3c103d8e  lui         $s0, 0x3D8E
    ctx->pc = 0x22ae08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15758 << 16));
    // 0x22ae0c: 0x3602fa35  ori         $v0, $s0, 0xFA35
    ctx->pc = 0x22ae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64053);
    // 0x22ae10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22ae10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22ae14: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae1c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x22ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22ae20: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x22ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ae24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22ae28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22ae2c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22AE2Cu;
    SET_GPR_U32(ctx, 31, 0x22AE34u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22AE2Cu, 0x22AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE34u;
label_22ae34:
    // 0x22ae34: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x22ae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x22ae38: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae3c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ae40: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x22ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ae44: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22ae44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ae48: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22AE48u;
    SET_GPR_U32(ctx, 31, 0x22AE50u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22AE48u, 0x22AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE50u;
label_22ae50:
    // 0x22ae50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae54: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x22ae58u;
}
