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

// Function: Em0b_R1_dm01
// Address: 0x1f5b90 - 0x1f62b4
void Em0b_R1_dm01_0x1f5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_dm01_0x1f5b90");
#endif

    switch (ctx->pc) {
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c1cu: goto label_1f5c1c;
        case 0x1f5c50u: goto label_1f5c50;
        case 0x1f5c78u: goto label_1f5c78;
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5da4u: goto label_1f5da4;
        case 0x1f5df4u: goto label_1f5df4;
        case 0x1f5e00u: goto label_1f5e00;
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5f34u: goto label_1f5f34;
        default: break;
    }

    ctx->pc = 0x1f5b90u;

    // 0x1f5b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f5b94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1f5b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f5b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5b9c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1f5b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1f5ba0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f5ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f5ba4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x1f5ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1f5ba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5bac: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f5bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5bb0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f5bb4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1f5bb8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f5bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f5bbc: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f5bc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5bc4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f5bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f5bc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f5bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f5bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5bd0: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1F5BD0u;
    {
        const bool branch_taken_0x1f5bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f5bd0) {
            ctx->pc = 0x1F5DE4u;
            goto label_1f5de4;
        }
    }
    ctx->pc = 0x1F5BD8u;
    // 0x1f5bd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5BD8u;
    {
        const bool branch_taken_0x1f5bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5bd8) {
            ctx->pc = 0x1F5BE8u;
            goto label_1f5be8;
        }
    }
    ctx->pc = 0x1F5BE0u;
    // 0x1f5be0: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1F5BE0u;
    {
        const bool branch_taken_0x1f5be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5be0) {
            ctx->pc = 0x1F5F74u;
            goto label_1f5f74;
        }
    }
    ctx->pc = 0x1F5BE8u;
label_1f5be8:
    // 0x1f5be8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5bec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1f5becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f5bf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5bf4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f5bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5bf8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5BF8u;
    SET_GPR_U32(ctx, 31, 0x1F5C00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5BF8u, 0x1F5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C00u;
label_1f5c00:
    // 0x1f5c00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5c04: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x1f5c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f5c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5C0Cu;
    {
        const bool branch_taken_0x1f5c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f5c0c) {
            ctx->pc = 0x1F5C30u;
            goto label_1f5c30;
        }
    }
    ctx->pc = 0x1F5C14u;
    // 0x1f5c14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5C14u;
    SET_GPR_U32(ctx, 31, 0x1F5C1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5C14u, 0x1F5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C1Cu;
label_1f5c1c:
    // 0x1f5c1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5c20: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x1f5c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f5c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5c28: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5C28u;
    {
        const bool branch_taken_0x1f5c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5c28) {
            ctx->pc = 0x1F5C58u;
            goto label_1f5c58;
        }
    }
    ctx->pc = 0x1F5C30u;
label_1f5c30:
    // 0x1f5c30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c38: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f5c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f5c3c: 0x24060f0d  addiu       $a2, $zero, 0xF0D
    ctx->pc = 0x1f5c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3853));
    // 0x1f5c40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f5c48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F5C48u;
    SET_GPR_U32(ctx, 31, 0x1F5C50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F5C48u, 0x1F5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C50u;
label_1f5c50:
    // 0x1f5c50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5C50u;
    {
        const bool branch_taken_0x1f5c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c50) {
            ctx->pc = 0x1F5C78u;
            goto label_1f5c78;
        }
    }
    ctx->pc = 0x1F5C58u;
label_1f5c58:
    // 0x1f5c58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f5c64: 0x24061e0c  addiu       $a2, $zero, 0x1E0C
    ctx->pc = 0x1f5c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7692));
    // 0x1f5c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f5c70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F5C70u;
    SET_GPR_U32(ctx, 31, 0x1F5C78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F5C70u, 0x1F5C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C78u;
label_1f5c78:
    // 0x1f5c78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c7c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f5c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5c80: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f5c84: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f5c88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f5c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f5c8c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f5c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5c94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c98: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f5c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f5c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5ca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ca4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5ca8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f5ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f5cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5cb8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f5cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f5cbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f5cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cc8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5ccc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f5cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f5cd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f5cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5ce0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f5ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f5ce4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1f5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1f5ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5cf4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f5cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f5cf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cfc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5d00: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f5d04: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f5d08: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F5D08u;
    {
        const bool branch_taken_0x1f5d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d08) {
            ctx->pc = 0x1F5D48u;
            goto label_1f5d48;
        }
    }
    ctx->pc = 0x1F5D10u;
    // 0x1f5d10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f5d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d1c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5d20: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5d24: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5d28: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f5d2c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f5d30: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f5d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f5d34: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F5D34u;
    SET_GPR_U32(ctx, 31, 0x1F5D3Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F5D34u, 0x1F5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D3Cu;
label_1f5d3c:
    // 0x1f5d3c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f5d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f5d40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5D40u;
    {
        const bool branch_taken_0x1f5d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d40) {
            ctx->pc = 0x1F5D8Cu;
            goto label_1f5d8c;
        }
    }
    ctx->pc = 0x1F5D48u;
label_1f5d48:
    // 0x1f5d48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d4c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f5d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5d50: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f5d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f5d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f5d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5d5c: 0x0  nop
    ctx->pc = 0x1f5d5cu;
    // NOP
    // 0x1f5d60: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f5d60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5d64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d6c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5d70: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5d74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f5d78: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f5d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f5d7c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f5d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f5d80: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F5D80u;
    SET_GPR_U32(ctx, 31, 0x1F5D88u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F5D80u, 0x1F5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D88u;
label_1f5d88:
    // 0x1f5d88: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f5d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1f5d8c:
    // 0x1f5d8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d90: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f5d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5d94: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5d98: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f5d98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5d9c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F5D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5DA4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F5D9Cu, 0x1F5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DA4u;
label_1f5da4:
    // 0x1f5da4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5da8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f5da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f5dac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5db0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5db4: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f5db8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f5dbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f5dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f5dc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5DC0u;
    {
        const bool branch_taken_0x1f5dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5dc0) {
            ctx->pc = 0x1F5DE4u;
            goto label_1f5de4;
        }
    }
    ctx->pc = 0x1F5DC8u;
    // 0x1f5dc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f5dcc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f5dd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f5dd4: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f5dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f5dd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f5ddc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f5de0: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f5de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1f5de4:
    // 0x1f5de4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5de8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5dec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F5DECu;
    SET_GPR_U32(ctx, 31, 0x1F5DF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F5DECu, 0x1F5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DF4u;
label_1f5df4:
    // 0x1f5df4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5df8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F5DF8u;
    SET_GPR_U32(ctx, 31, 0x1F5E00u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F5DF8u, 0x1F5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E00u;
label_1f5e00:
    // 0x1f5e00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f5e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f5e08: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F5E08u;
    {
        const bool branch_taken_0x1f5e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e08) {
            ctx->pc = 0x1F5F74u;
            goto label_1f5f74;
        }
    }
    ctx->pc = 0x1F5E10u;
    // 0x1f5e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5e14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e18: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f5e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5e20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e24: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f5e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5e28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e2c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f5e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5e30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e34: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f5e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5e38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f5e40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5E40u;
    SET_GPR_U32(ctx, 31, 0x1F5E48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5E40u, 0x1F5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E48u;
label_1f5e48:
    // 0x1f5e48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5e4c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f5e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f5e50: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5e54: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5e58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5e58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f5e5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e60: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f5e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5e64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5E64u;
    SET_GPR_U32(ctx, 31, 0x1F5E6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5E64u, 0x1F5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E6Cu;
label_1f5e6c:
    // 0x1f5e6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5e70: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f5e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f5e74: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5e78: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5e7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5e7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f5e80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5e88: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f5e88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5e8c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x1f5e90: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1f5e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1f5e94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f5e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f5e98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ea0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1f5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f5ea4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f5ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5ea8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1f5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1f5eac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1F5EACu;
    SET_GPR_U32(ctx, 31, 0x1F5EB4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1F5EACu, 0x1F5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EB4u;
label_1f5eb4:
    // 0x1f5eb4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F5EB4u;
    {
        const bool branch_taken_0x1f5eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5eb4) {
            ctx->pc = 0x1F5F74u;
            goto label_1f5f74;
        }
    }
    ctx->pc = 0x1F5EBCu;
    // 0x1f5ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ec0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f5ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5ec4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1f5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1f5ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f5ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5ecc: 0x0  nop
    ctx->pc = 0x1f5eccu;
    // NOP
    // 0x1f5ed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5ed4: 0x0  nop
    ctx->pc = 0x1f5ed4u;
    // NOP
    // 0x1f5ed8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1F5ED8u;
    {
        const bool branch_taken_0x1f5ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5ed8) {
            ctx->pc = 0x1F5F74u;
            goto label_1f5f74;
        }
    }
    ctx->pc = 0x1F5EE0u;
    // 0x1f5ee0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5EE0u;
    SET_GPR_U32(ctx, 31, 0x1F5EE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5EE0u, 0x1F5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EE8u;
label_1f5ee8:
    // 0x1f5ee8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f5ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5eec: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1f5eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f5ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5ef4: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F5EF4u;
    {
        const bool branch_taken_0x1f5ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5ef4) {
            ctx->pc = 0x1F5F74u;
            goto label_1f5f74;
        }
    }
    ctx->pc = 0x1F5EFCu;
    // 0x1f5efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5f00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f04: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f5f04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5f08: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1f5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5f0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f10: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f5f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f18: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f5f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f20: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f5f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f5f2c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5F2Cu, 0x1F5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F34u;
label_1f5f34:
    // 0x1f5f34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f5f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5f38: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1f5f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f5f3c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5F3Cu;
    {
        const bool branch_taken_0x1f5f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f3c) {
            ctx->pc = 0x1F5F74u;
            goto label_1f5f74;
        }
    }
    ctx->pc = 0x1F5F44u;
    // 0x1f5f44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5f48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f4c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f5f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5f50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f5f54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f58: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f5f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5f5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f60: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f5f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f5f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f5f74:
    // 0x1f5f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f78: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f5f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5f7c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1f5f80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f5f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5f84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5f88: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f5f88u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5f8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5f90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f5f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5f94: 0x0  nop
    ctx->pc = 0x1f5f94u;
    // NOP
    // 0x1f5f98: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5F98u;
    {
        const bool branch_taken_0x1f5f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5f98) {
            ctx->pc = 0x1F5FBCu;
            goto label_1f5fbc;
        }
    }
    ctx->pc = 0x1F5FA0u;
    // 0x1f5fa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5fa8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5fac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fb0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5fb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5fb8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1f5fbc:
    // 0x1f5fbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fc0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f5fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5fc4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f5fc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f5fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5fcc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5fd0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f5fd0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5fd8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f5fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5fdc: 0x0  nop
    ctx->pc = 0x1f5fdcu;
    // NOP
    // 0x1f5fe0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5FE0u;
    {
        const bool branch_taken_0x1f5fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5fe0) {
            ctx->pc = 0x1F6004u;
            goto label_1f6004;
        }
    }
    ctx->pc = 0x1F5FE8u;
    // 0x1f5fe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5ff0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f5ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5ff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ff8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5ffc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f5ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6000: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f6000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1f6004:
    // 0x1f6004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6008: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f6008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f600c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1f600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6010: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1f6010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1f6014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f6014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6018: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1f6018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f601c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f601cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6020: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1f6020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1f6024: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6028: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f602c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6030: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f6030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f6034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6038: 0x0  nop
    ctx->pc = 0x1f6038u;
    // NOP
    // 0x1f603c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f603cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6040: 0x0  nop
    ctx->pc = 0x1f6040u;
    // NOP
    // 0x1f6044: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6044u;
    {
        const bool branch_taken_0x1f6044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6044) {
            ctx->pc = 0x1F6060u;
            goto label_1f6060;
        }
    }
    ctx->pc = 0x1F604Cu;
    // 0x1f604c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f6050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6058: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f605c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f605cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_1f6060:
    // 0x1f6060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6064: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6068: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f6068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f606c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f606cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f6070: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F6070u;
    {
        const bool branch_taken_0x1f6070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6070) {
            ctx->pc = 0x1F62A0u;
            goto label_1f62a0;
        }
    }
    ctx->pc = 0x1F6078u;
    // 0x1f6078: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f607c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6080: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6084: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6088: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f608c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f608cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6090: 0x0  nop
    ctx->pc = 0x1f6090u;
    // NOP
    // 0x1f6094: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F6094u;
    {
        const bool branch_taken_0x1f6094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6094) {
            ctx->pc = 0x1F618Cu;
            goto label_1f618c;
        }
    }
    ctx->pc = 0x1F609Cu;
    // 0x1f609c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f60a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f60a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60ac: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f60b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f60b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f60b4: 0x0  nop
    ctx->pc = 0x1f60b4u;
    // NOP
    // 0x1f60b8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F60B8u;
    {
        const bool branch_taken_0x1f60b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f60b8) {
            ctx->pc = 0x1F6114u;
            goto label_1f6114;
        }
    }
    ctx->pc = 0x1F60C0u;
    // 0x1f60c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f60c8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f60c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f60cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60d0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f60d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f60d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f60d8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f60dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f60e4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f60e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f60e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60ec: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f60f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f60f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f60f4: 0x0  nop
    ctx->pc = 0x1f60f4u;
    // NOP
    // 0x1f60f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F60F8u;
    {
        const bool branch_taken_0x1f60f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f60f8) {
            ctx->pc = 0x1F6114u;
            goto label_1f6114;
        }
    }
    ctx->pc = 0x1F6100u;
    // 0x1f6100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6104: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6108: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f610c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6110: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f6114:
    // 0x1f6114: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6118: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f611c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6124: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f612c: 0x0  nop
    ctx->pc = 0x1f612cu;
    // NOP
    // 0x1f6130: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6130u;
    {
        const bool branch_taken_0x1f6130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6130) {
            ctx->pc = 0x1F618Cu;
            goto label_1f618c;
        }
    }
    ctx->pc = 0x1F6138u;
    // 0x1f6138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f613c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6140: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6148: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f614c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f614cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6150: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6154: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6158: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f615c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6160: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6164: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6168: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f616c: 0x0  nop
    ctx->pc = 0x1f616cu;
    // NOP
    // 0x1f6170: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6170u;
    {
        const bool branch_taken_0x1f6170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6170) {
            ctx->pc = 0x1F618Cu;
            goto label_1f618c;
        }
    }
    ctx->pc = 0x1F6178u;
    // 0x1f6178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f617c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6180: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6188: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f618c:
    // 0x1f618c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6190: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6194: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f619c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f61a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f61a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61a4: 0x0  nop
    ctx->pc = 0x1f61a4u;
    // NOP
    // 0x1f61a8: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F61A8u;
    {
        const bool branch_taken_0x1f61a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f61a8) {
            ctx->pc = 0x1F62A0u;
            goto label_1f62a0;
        }
    }
    ctx->pc = 0x1F61B0u;
    // 0x1f61b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f61b8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f61bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61c0: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f61c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f61c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f61c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61c8: 0x0  nop
    ctx->pc = 0x1f61c8u;
    // NOP
    // 0x1f61cc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F61CCu;
    {
        const bool branch_taken_0x1f61cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f61cc) {
            ctx->pc = 0x1F6228u;
            goto label_1f6228;
        }
    }
    ctx->pc = 0x1F61D4u;
    // 0x1f61d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f61dc: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1f61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f61e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61e4: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f61e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f61e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f61ec: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f61ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f61f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f61f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f61f8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f61f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f61fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6200: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6208: 0x0  nop
    ctx->pc = 0x1f6208u;
    // NOP
    // 0x1f620c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F620Cu;
    {
        const bool branch_taken_0x1f620c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f620c) {
            ctx->pc = 0x1F6228u;
            goto label_1f6228;
        }
    }
    ctx->pc = 0x1F6214u;
    // 0x1f6214: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6218: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f621c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6224: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1f6228:
    // 0x1f6228: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f622c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6230: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6238: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f623c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f623cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6240: 0x0  nop
    ctx->pc = 0x1f6240u;
    // NOP
    // 0x1f6244: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6244u;
    {
        const bool branch_taken_0x1f6244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6244) {
            ctx->pc = 0x1F62A0u;
            goto label_1f62a0;
        }
    }
    ctx->pc = 0x1F624Cu;
    // 0x1f624c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6250: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6254: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6258: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f625c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6260: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6264: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f6268: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f626c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6270: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6278: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f627c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f627cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6280: 0x0  nop
    ctx->pc = 0x1f6280u;
    // NOP
    // 0x1f6284: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6284u;
    {
        const bool branch_taken_0x1f6284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6284) {
            ctx->pc = 0x1F62A0u;
            goto label_1f62a0;
        }
    }
    ctx->pc = 0x1F628Cu;
    // 0x1f628c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6290: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6294: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f6294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6298: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f629c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1f62a0:
    // 0x1f62a0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1f62a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f62a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f62a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f62a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f62a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f62ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F62ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F62ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F62B4u;
}
