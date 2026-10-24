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

// Function: entry_002c6a3c
// Address: 0x2c6a3c - 0x2c6b48
void entry_002c6a3c_0x2c6a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6a3c_0x2c6a3c");
#endif

    switch (ctx->pc) {
        case 0x2c6abcu: goto label_2c6abc;
        case 0x2c6b04u: goto label_2c6b04;
        default: break;
    }

    ctx->pc = 0x2c6a3cu;

    // 0x2c6a3c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a40: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2c6a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2c6a44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c6a48: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2c6a48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6a4c: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C6A4Cu;
    {
        const bool branch_taken_0x2c6a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6a4c) {
            ctx->pc = 0x2C6B48u;
            return;
        }
    }
    ctx->pc = 0x2C6A54u;
    // 0x2c6a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6a58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c6a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6a60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a64: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c6a64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a6c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a74: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2c6a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c6a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a7c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2c6a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2c6a80: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x2c6a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x2c6a84: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2c6a84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6a88: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x2c6a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a8c: 0xe4e011e0  swc1        $f0, 0x11E0($a3)
    ctx->pc = 0x2c6a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4576), bits); }
    // 0x2c6a90: 0x3c0841f0  lui         $t0, 0x41F0
    ctx->pc = 0x2c6a90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16880 << 16));
    // 0x2c6a94: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2c6a94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6a98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6aa0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c6aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c6aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6aa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6aac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6ab0: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c6ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c6ab4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6AB4u;
    SET_GPR_U32(ctx, 31, 0x2C6ABCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6AB4u, 0x2C6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6ABCu;
label_2c6abc:
    // 0x2c6abc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c6abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6ac0: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2c6ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2c6ac4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C6AC4u;
    {
        const bool branch_taken_0x2c6ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ac4) {
            ctx->pc = 0x2C6B48u;
            return;
        }
    }
    ctx->pc = 0x2C6ACCu;
    // 0x2c6acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6ad4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2c6ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c6ad8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6adc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6ae0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c6ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6ae4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6ae8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6af0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6af4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6af8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c6afc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6AFCu;
    SET_GPR_U32(ctx, 31, 0x2C6B04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6AFCu, 0x2C6B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B04u;
label_2c6b04:
    // 0x2c6b04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c6b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6b08: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c6b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c6b0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6b10: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6B10u;
    {
        const bool branch_taken_0x2c6b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6b10) {
            ctx->pc = 0x2C6B48u;
            return;
        }
    }
    ctx->pc = 0x2C6B18u;
    // 0x2c6b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6b1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c6b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6b24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6b28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c6b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6b30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6b38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c6b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6b40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c6b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c6b48u;
}
