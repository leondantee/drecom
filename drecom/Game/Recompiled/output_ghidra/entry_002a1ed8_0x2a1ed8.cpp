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

// Function: entry_002a1ed8
// Address: 0x2a1ed8 - 0x2a1f3c
void entry_002a1ed8_0x2a1ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1ed8_0x2a1ed8");
#endif

    switch (ctx->pc) {
        case 0x2a1ee0u: goto label_2a1ee0;
        default: break;
    }

    ctx->pc = 0x2a1ed8u;

    // 0x2a1ed8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1ED8u;
    SET_GPR_U32(ctx, 31, 0x2A1EE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1ED8u, 0x2A1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EE0u;
label_2a1ee0:
    // 0x2a1ee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1ee4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2a1ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2a1ee8: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2a1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2a1eec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2a1eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a1ef0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1ef0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a1ef4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ef8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2a1ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1efc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a1f00: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f10: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a1f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a1f14: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2a1f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2a1f18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1f1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1F1Cu;
    {
        const bool branch_taken_0x2a1f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1f1c) {
            ctx->pc = 0x2A1F3Cu;
            return;
        }
    }
    ctx->pc = 0x2A1F24u;
    // 0x2a1f24: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2a1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2a1f28: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f38: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a1f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x2a1f3cu;
}
