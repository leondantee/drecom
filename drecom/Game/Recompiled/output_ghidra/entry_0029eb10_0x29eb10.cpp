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

// Function: entry_0029eb10
// Address: 0x29eb10 - 0x29eb98
void entry_0029eb10_0x29eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029eb10_0x29eb10");
#endif

    switch (ctx->pc) {
        case 0x29eb34u: goto label_29eb34;
        case 0x29eb3cu: goto label_29eb3c;
        default: break;
    }

    ctx->pc = 0x29eb10u;

    // 0x29eb10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb14: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x29eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29eb18: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29eb18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29eb1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb20: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x29eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x29eb24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29eb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eb28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29eb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29eb2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29EB2Cu;
    SET_GPR_U32(ctx, 31, 0x29EB34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29EB2Cu, 0x29EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB34u;
label_29eb34:
    // 0x29eb34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EB34u;
    SET_GPR_U32(ctx, 31, 0x29EB3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EB34u, 0x29EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB3Cu;
label_29eb3c:
    // 0x29eb3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eb40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x29eb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x29eb44: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x29eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x29eb48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29eb4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29eb4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29eb50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29eb54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29eb58: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29eb5c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29eb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29eb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eb64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29eb6c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x29eb70: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29eb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29eb74: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x29eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29eb78: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EB78u;
    {
        const bool branch_taken_0x29eb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29eb78) {
            ctx->pc = 0x29EB98u;
            return;
        }
    }
    ctx->pc = 0x29EB80u;
    // 0x29eb80: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x29eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x29eb84: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29eb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29eb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29eb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eb8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29eb94: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29eb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x29eb98u;
}
