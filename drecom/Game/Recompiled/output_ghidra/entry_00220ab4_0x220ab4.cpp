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

// Function: entry_00220ab4
// Address: 0x220ab4 - 0x220bd4
void entry_00220ab4_0x220ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220ab4_0x220ab4");
#endif

    switch (ctx->pc) {
        case 0x220af4u: goto label_220af4;
        default: break;
    }

    ctx->pc = 0x220ab4u;

    // 0x220ab4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ab8: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x220ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x220abc: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x220abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x220ac0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x220ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x220ac4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x220ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x220ac8: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x220ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x220acc: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x220accu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
    // 0x220ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x220ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220ad4: 0x0  nop
    ctx->pc = 0x220ad4u;
    // NOP
    // 0x220ad8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x220ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x220adc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220ae0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x220ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x220ae4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x220ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x220ae8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x220ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x220aec: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x220AECu;
    SET_GPR_U32(ctx, 31, 0x220AF4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x220AECu, 0x220AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AF4u;
label_220af4:
    // 0x220af4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x220af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x220af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x220af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220afc: 0x0  nop
    ctx->pc = 0x220afcu;
    // NOP
    // 0x220b00: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x220b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x220b04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x220b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x220b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220b0c: 0x0  nop
    ctx->pc = 0x220b0cu;
    // NOP
    // 0x220b10: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x220b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x220b14: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220b18: 0x948511f4  lhu         $a1, 0x11F4($a0)
    ctx->pc = 0x220b18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
    // 0x220b1c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x220b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x220b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220b24: 0x14830127  bne         $a0, $v1, . + 4 + (0x127 << 2)
    ctx->pc = 0x220B24u;
    {
        const bool branch_taken_0x220b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220b24) {
            ctx->pc = 0x220FC4u;
            return;
        }
    }
    ctx->pc = 0x220B2Cu;
    // 0x220b2c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220b30: 0xa0a011ee  sb          $zero, 0x11EE($a1)
    ctx->pc = 0x220b30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x220b34: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x220b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220b38: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220b3c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x220b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x220b40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x220b44: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x220b44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x220b48: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x220b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x220b4c: 0x14800104  bnez        $a0, . + 4 + (0x104 << 2)
    ctx->pc = 0x220B4Cu;
    {
        const bool branch_taken_0x220b4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x220b4c) {
            ctx->pc = 0x220F60u;
            return;
        }
    }
    ctx->pc = 0x220B54u;
    // 0x220b54: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220b58: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x220b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x220b5c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x220b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x220b60: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x220b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x220b64: 0x10a300da  beq         $a1, $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x220B64u;
    {
        const bool branch_taken_0x220b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220b64) {
            ctx->pc = 0x220ED0u;
            return;
        }
    }
    ctx->pc = 0x220B6Cu;
    // 0x220b6c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x220b70: 0x10a400d7  beq         $a1, $a0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x220B70u;
    {
        const bool branch_taken_0x220b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x220b70) {
            ctx->pc = 0x220ED0u;
            return;
        }
    }
    ctx->pc = 0x220B78u;
    // 0x220b78: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x220b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x220b7c: 0x10a3007d  beq         $a1, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x220B7Cu;
    {
        const bool branch_taken_0x220b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220b7c) {
            ctx->pc = 0x220D74u;
            return;
        }
    }
    ctx->pc = 0x220B84u;
    // 0x220b84: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x220b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x220b88: 0x10a3002a  beq         $a1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x220B88u;
    {
        const bool branch_taken_0x220b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220b88) {
            ctx->pc = 0x220C34u;
            return;
        }
    }
    ctx->pc = 0x220B90u;
    // 0x220b90: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x220b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x220b94: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x220B94u;
    {
        const bool branch_taken_0x220b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220b94) {
            ctx->pc = 0x220C34u;
            return;
        }
    }
    ctx->pc = 0x220B9Cu;
    // 0x220b9c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x220b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x220ba0: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x220BA0u;
    {
        const bool branch_taken_0x220ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220ba0) {
            ctx->pc = 0x220C34u;
            return;
        }
    }
    ctx->pc = 0x220BA8u;
    // 0x220ba8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x220bac: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x220BACu;
    {
        const bool branch_taken_0x220bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bac) {
            ctx->pc = 0x220C34u;
            return;
        }
    }
    ctx->pc = 0x220BB4u;
    // 0x220bb4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x220bb8: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x220BB8u;
    {
        const bool branch_taken_0x220bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bb8) {
            ctx->pc = 0x220C34u;
            return;
        }
    }
    ctx->pc = 0x220BC0u;
    // 0x220bc0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x220bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220bc4: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x220BC4u;
    {
        const bool branch_taken_0x220bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bc4) {
            ctx->pc = 0x220C34u;
            return;
        }
    }
    ctx->pc = 0x220BCCu;
    // 0x220bcc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x220BCCu;
    {
        const bool branch_taken_0x220bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220bcc) {
            ctx->pc = 0x220BD4u;
            return;
        }
    }
    ctx->pc = 0x220BD4u;
}
