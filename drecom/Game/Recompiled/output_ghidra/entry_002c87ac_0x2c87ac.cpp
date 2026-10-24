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

// Function: entry_002c87ac
// Address: 0x2c87ac - 0x2c87fc
void entry_002c87ac_0x2c87ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c87ac_0x2c87ac");
#endif

    switch (ctx->pc) {
        case 0x2c87b4u: goto label_2c87b4;
        default: break;
    }

    ctx->pc = 0x2c87acu;

    // 0x2c87ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C87ACu;
    SET_GPR_U32(ctx, 31, 0x2C87B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C87ACu, 0x2C87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87B4u;
label_2c87b4:
    // 0x2c87b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c87b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c87b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c87b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c87bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c87c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c87c4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c87c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87d0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c87d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c87d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c87d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c87d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87e0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2c87e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2c87e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2c87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2c87e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c87ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c87ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c87f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87f8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c87f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    ctx->pc = 0x2c87fcu;
}
