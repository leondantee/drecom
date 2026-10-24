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

// Function: entry_001e8a88
// Address: 0x1e8a88 - 0x1e8bb4
void entry_001e8a88_0x1e8a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8a88_0x1e8a88");
#endif

    switch (ctx->pc) {
        case 0x1e8ac8u: goto label_1e8ac8;
        default: break;
    }

    ctx->pc = 0x1e8a88u;

    // 0x1e8a88: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8a8c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1e8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1e8a90: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1e8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e8a94: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1e8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1e8a98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8a9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8aa0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1e8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1e8aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e8aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8aa8: 0x0  nop
    ctx->pc = 0x1e8aa8u;
    // NOP
    // 0x1e8aac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e8aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e8ab0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8ab4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1e8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1e8ab8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1e8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1e8abc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1e8ac0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1E8AC0u;
    SET_GPR_U32(ctx, 31, 0x1E8AC8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1E8AC0u, 0x1E8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AC8u;
label_1e8ac8:
    // 0x1e8ac8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e8ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e8acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e8accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8ad0: 0x0  nop
    ctx->pc = 0x1e8ad0u;
    // NOP
    // 0x1e8ad4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1e8ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e8ad8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e8ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8adc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e8adcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8ae0: 0x0  nop
    ctx->pc = 0x1e8ae0u;
    // NOP
    // 0x1e8ae4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e8ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e8ae8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8aec: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x1e8aecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x1e8af0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e8af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e8af4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8af8: 0x14830129  bne         $a0, $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x1E8AF8u;
    {
        const bool branch_taken_0x1e8af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e8af8) {
            ctx->pc = 0x1E8FA0u;
            return;
        }
    }
    ctx->pc = 0x1E8B00u;
    // 0x1e8b00: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8b04: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x1e8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8b08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e8b0c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8b10: 0xa0a310a8  sb          $v1, 0x10A8($a1)
    ctx->pc = 0x1e8b10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e8b14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e8b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e8b18: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1e8b1c: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x1e8b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e8b20: 0x14800107  bnez        $a0, . + 4 + (0x107 << 2)
    ctx->pc = 0x1E8B20u;
    {
        const bool branch_taken_0x1e8b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b20) {
            ctx->pc = 0x1E8F40u;
            return;
        }
    }
    ctx->pc = 0x1E8B28u;
    // 0x1e8b28: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8b2c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1e8b2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1e8b30: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1e8b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e8b34: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e8b38: 0x10c30119  beq         $a2, $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x1E8B38u;
    {
        const bool branch_taken_0x1e8b38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b38) {
            ctx->pc = 0x1E8FA0u;
            return;
        }
    }
    ctx->pc = 0x1E8B40u;
    // 0x1e8b40: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1e8b44: 0x10c300d9  beq         $a2, $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1E8B44u;
    {
        const bool branch_taken_0x1e8b44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b44) {
            ctx->pc = 0x1E8EACu;
            return;
        }
    }
    ctx->pc = 0x1E8B4Cu;
    // 0x1e8b4c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e8b50: 0x10c300d6  beq         $a2, $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x1E8B50u;
    {
        const bool branch_taken_0x1e8b50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b50) {
            ctx->pc = 0x1E8EACu;
            return;
        }
    }
    ctx->pc = 0x1E8B58u;
    // 0x1e8b58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e8b5c: 0x10c30080  beq         $a2, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1E8B5Cu;
    {
        const bool branch_taken_0x1e8b5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b5c) {
            ctx->pc = 0x1E8D60u;
            return;
        }
    }
    ctx->pc = 0x1E8B64u;
    // 0x1e8b64: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e8b68: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E8B68u;
    {
        const bool branch_taken_0x1e8b68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b68) {
            ctx->pc = 0x1E8C1Cu;
            return;
        }
    }
    ctx->pc = 0x1E8B70u;
    // 0x1e8b70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e8b74: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E8B74u;
    {
        const bool branch_taken_0x1e8b74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b74) {
            ctx->pc = 0x1E8C1Cu;
            return;
        }
    }
    ctx->pc = 0x1E8B7Cu;
    // 0x1e8b7c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1e8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8b80: 0x10c30026  beq         $a2, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E8B80u;
    {
        const bool branch_taken_0x1e8b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b80) {
            ctx->pc = 0x1E8C1Cu;
            return;
        }
    }
    ctx->pc = 0x1E8B88u;
    // 0x1e8b88: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8b8c: 0x10c30023  beq         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E8B8Cu;
    {
        const bool branch_taken_0x1e8b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b8c) {
            ctx->pc = 0x1E8C1Cu;
            return;
        }
    }
    ctx->pc = 0x1E8B94u;
    // 0x1e8b94: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1e8b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e8b98: 0x10c50020  beq         $a2, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E8B98u;
    {
        const bool branch_taken_0x1e8b98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e8b98) {
            ctx->pc = 0x1E8C1Cu;
            return;
        }
    }
    ctx->pc = 0x1E8BA0u;
    // 0x1e8ba0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e8ba4: 0x10c4001d  beq         $a2, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E8BA4u;
    {
        const bool branch_taken_0x1e8ba4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e8ba4) {
            ctx->pc = 0x1E8C1Cu;
            return;
        }
    }
    ctx->pc = 0x1E8BACu;
    // 0x1e8bac: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8BACu;
    {
        const bool branch_taken_0x1e8bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bac) {
            ctx->pc = 0x1E8BB4u;
            return;
        }
    }
    ctx->pc = 0x1E8BB4u;
}
