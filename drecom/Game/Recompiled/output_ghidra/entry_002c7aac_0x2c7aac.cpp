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

// Function: entry_002c7aac
// Address: 0x2c7aac - 0x2c7ba0
void entry_002c7aac_0x2c7aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7aac_0x2c7aac");
#endif

    switch (ctx->pc) {
        case 0x2c7b10u: goto label_2c7b10;
        case 0x2c7b5cu: goto label_2c7b5c;
        default: break;
    }

    ctx->pc = 0x2c7aacu;

    // 0x2c7aac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ab0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c7ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7ab4: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C7AB4u;
    {
        const bool branch_taken_0x2c7ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ab4) {
            ctx->pc = 0x2C7BA0u;
            return;
        }
    }
    ctx->pc = 0x2C7ABCu;
    // 0x2c7abc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c7ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7ac4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ac8: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c7ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c7acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7ad0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ad4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c7ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7ad8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7adc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c7adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ae4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c7ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7ae8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7aec: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c7aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7af0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7af4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c7af8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2c7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c7afc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7b04: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c7b04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7b08: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7B08u;
    SET_GPR_U32(ctx, 31, 0x2C7B10u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7B08u, 0x2C7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B10u;
label_2c7b10:
    // 0x2c7b10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c7b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7b14: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c7b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c7b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7b1c: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C7B1Cu;
    {
        const bool branch_taken_0x2c7b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c7b1c) {
            ctx->pc = 0x2C7BA0u;
            return;
        }
    }
    ctx->pc = 0x2C7B24u;
    // 0x2c7b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b2c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c7b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7b30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7b34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b38: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c7b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7b3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b40: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c7b40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b48: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c7b48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c7b54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7B54u;
    SET_GPR_U32(ctx, 31, 0x2C7B5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7B54u, 0x2C7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B5Cu;
label_2c7b5c:
    // 0x2c7b5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c7b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7b60: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c7b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c7b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7b68: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C7B68u;
    {
        const bool branch_taken_0x2c7b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c7b68) {
            ctx->pc = 0x2C7BA0u;
            return;
        }
    }
    ctx->pc = 0x2C7B70u;
    // 0x2c7b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7b74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c7b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7b7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7b80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c7b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c7b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c7b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c7ba0u;
}
