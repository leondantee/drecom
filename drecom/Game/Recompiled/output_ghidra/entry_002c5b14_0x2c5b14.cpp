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

// Function: entry_002c5b14
// Address: 0x2c5b14 - 0x2c5b9c
void entry_002c5b14_0x2c5b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5b14_0x2c5b14");
#endif

    switch (ctx->pc) {
        case 0x2c5b1cu: goto label_2c5b1c;
        case 0x2c5b40u: goto label_2c5b40;
        case 0x2c5b80u: goto label_2c5b80;
        default: break;
    }

    ctx->pc = 0x2c5b14u;

    // 0x2c5b14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5B14u;
    SET_GPR_U32(ctx, 31, 0x2C5B1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5B14u, 0x2C5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B1Cu;
label_2c5b1c:
    // 0x2c5b1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5b20: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2c5b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c5b24: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x2c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2c5b28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c5b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5b2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c5b2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c5b30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b34: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2c5b34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5b38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5B38u;
    SET_GPR_U32(ctx, 31, 0x2C5B40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5B38u, 0x2C5B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B40u;
label_2c5b40:
    // 0x2c5b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5b44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c5b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c5b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5b4c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c5b50: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5b54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5b5c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c5b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c5b60: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2c5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2c5b64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c5b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5b6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5b74: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c5b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c5b78: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C5B78u;
    SET_GPR_U32(ctx, 31, 0x2C5B80u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C5B78u, 0x2C5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B80u;
label_2c5b80:
    // 0x2c5b80: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2c5b84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5b88: 0x0  nop
    ctx->pc = 0x2c5b88u;
    // NOP
    // 0x2c5b8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c5b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5b90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5b98: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2c5b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->pc = 0x2c5b9cu;
}
