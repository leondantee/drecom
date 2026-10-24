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

// Function: Em0b_R1_mv0f
// Address: 0x1f2b70 - 0x1f3044
void Em0b_R1_mv0f_0x1f2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv0f_0x1f2b70");
#endif

    switch (ctx->pc) {
        case 0x1f2c18u: goto label_1f2c18;
        case 0x1f2c9cu: goto label_1f2c9c;
        case 0x1f2cd0u: goto label_1f2cd0;
        case 0x1f2ce8u: goto label_1f2ce8;
        case 0x1f2cf4u: goto label_1f2cf4;
        case 0x1f2dbcu: goto label_1f2dbc;
        case 0x1f2df0u: goto label_1f2df0;
        case 0x1f2e08u: goto label_1f2e08;
        case 0x1f2e14u: goto label_1f2e14;
        case 0x1f2e64u: goto label_1f2e64;
        case 0x1f2e88u: goto label_1f2e88;
        default: break;
    }

    ctx->pc = 0x1f2b70u;

    // 0x1f2b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2b74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1f2b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f2b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f2b7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1f2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1f2b80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2b84: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x1f2b84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1f2b88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2b8c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f2b8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f2b90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f2b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f2b94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2b98: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1F2B98u;
    {
        const bool branch_taken_0x1f2b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f2b98) {
            ctx->pc = 0x1F2D80u;
            goto label_1f2d80;
        }
    }
    ctx->pc = 0x1F2BA0u;
    // 0x1f2ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2ba4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F2BA4u;
    {
        const bool branch_taken_0x1f2ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f2ba4) {
            ctx->pc = 0x1F2C60u;
            goto label_1f2c60;
        }
    }
    ctx->pc = 0x1F2BACu;
    // 0x1f2bac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2BACu;
    {
        const bool branch_taken_0x1f2bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2bac) {
            ctx->pc = 0x1F2BBCu;
            goto label_1f2bbc;
        }
    }
    ctx->pc = 0x1F2BB4u;
    // 0x1f2bb4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1F2BB4u;
    {
        const bool branch_taken_0x1f2bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2bb4) {
            ctx->pc = 0x1F2F30u;
            goto label_1f2f30;
        }
    }
    ctx->pc = 0x1F2BBCu;
label_1f2bbc:
    // 0x1f2bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2bc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bc4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f2bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2bc8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1f2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1f2bcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f2bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2bd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bd8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2bdc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f2bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f2be0: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f2be4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f2be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2bf4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f2bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f2bf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f2c04: 0x24067805  addiu       $a2, $zero, 0x7805
    ctx->pc = 0x1f2c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30725));
    // 0x1f2c08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f2c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2c0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f2c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f2c10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F2C10u;
    SET_GPR_U32(ctx, 31, 0x1F2C18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F2C10u, 0x1F2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C18u;
label_1f2c18:
    // 0x1f2c18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c1c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c20: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2c24: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x1f2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x1f2c28: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f2c2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f2c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2c34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c38: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c3c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1f2c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1f2c40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f2c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2c48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c50: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1f2c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1f2c54: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1f2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f2c58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c5c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f2c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1f2c60:
    // 0x1f2c60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c68: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2c6c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f2c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f2c70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2C70u;
    {
        const bool branch_taken_0x1f2c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c70) {
            ctx->pc = 0x1F2CACu;
            goto label_1f2cac;
        }
    }
    ctx->pc = 0x1F2C78u;
    // 0x1f2c78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c7c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f2c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2c80: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f2c84: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f2c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2c8c: 0x0  nop
    ctx->pc = 0x1f2c8cu;
    // NOP
    // 0x1f2c90: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f2c90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2c94: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F2C94u;
    SET_GPR_U32(ctx, 31, 0x1F2C9Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F2C94u, 0x1F2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C9Cu;
label_1f2c9c:
    // 0x1f2c9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ca0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f2ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f2ca4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F2CA4u;
    {
        const bool branch_taken_0x1f2ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2ca4) {
            ctx->pc = 0x1F2CD8u;
            goto label_1f2cd8;
        }
    }
    ctx->pc = 0x1F2CACu;
label_1f2cac:
    // 0x1f2cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cb0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2cb4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f2cb8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f2cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f2cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2cc0: 0x0  nop
    ctx->pc = 0x1f2cc0u;
    // NOP
    // 0x1f2cc4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1f2cc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2cc8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F2CC8u;
    SET_GPR_U32(ctx, 31, 0x1F2CD0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F2CC8u, 0x1F2CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CD0u;
label_1f2cd0:
    // 0x1f2cd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cd4: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f2cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_1f2cd8:
    // 0x1f2cd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cdc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f2cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2ce0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F2CE0u;
    SET_GPR_U32(ctx, 31, 0x1F2CE8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F2CE0u, 0x1F2CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CE8u;
label_1f2ce8:
    // 0x1f2ce8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2CECu;
    SET_GPR_U32(ctx, 31, 0x1F2CF4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2CECu, 0x1F2CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CF4u;
label_1f2cf4:
    // 0x1f2cf4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1f2cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cf8: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x1f2cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x1f2cfc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f2cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f2d00: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x1f2d00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2d04: 0x1480008a  bnez        $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1F2D04u;
    {
        const bool branch_taken_0x1f2d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d04) {
            ctx->pc = 0x1F2F30u;
            goto label_1f2f30;
        }
    }
    ctx->pc = 0x1F2D0Cu;
    // 0x1f2d0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2d10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d14: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f2d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2d18: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x1f2d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d28: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f2d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d34: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2d38: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1f2d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f2d3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2D3Cu;
    {
        const bool branch_taken_0x1f2d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d3c) {
            ctx->pc = 0x1F2D58u;
            goto label_1f2d58;
        }
    }
    ctx->pc = 0x1F2D44u;
    // 0x1f2d44: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x1f2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x1f2d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d54: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_1f2d58:
    // 0x1f2d58: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f2d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2d60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d68: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f2d6c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x1f2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1f2d70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d74: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1f2d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2d78: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1F2D78u;
    {
        const bool branch_taken_0x1f2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d78) {
            ctx->pc = 0x1F2F30u;
            goto label_1f2f30;
        }
    }
    ctx->pc = 0x1F2D80u;
label_1f2d80:
    // 0x1f2d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2d88: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2d8c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f2d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f2d90: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2D90u;
    {
        const bool branch_taken_0x1f2d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d90) {
            ctx->pc = 0x1F2DCCu;
            goto label_1f2dcc;
        }
    }
    ctx->pc = 0x1F2D98u;
    // 0x1f2d98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d9c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2da0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f2da4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f2da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f2da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2dac: 0x0  nop
    ctx->pc = 0x1f2dacu;
    // NOP
    // 0x1f2db0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f2db0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2db4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F2DB4u;
    SET_GPR_U32(ctx, 31, 0x1F2DBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F2DB4u, 0x1F2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DBCu;
label_1f2dbc:
    // 0x1f2dbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2dc0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f2dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f2dc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F2DC4u;
    {
        const bool branch_taken_0x1f2dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2dc4) {
            ctx->pc = 0x1F2DF8u;
            goto label_1f2df8;
        }
    }
    ctx->pc = 0x1F2DCCu;
label_1f2dcc:
    // 0x1f2dcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2dd0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f2dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2dd4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f2dd8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f2dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f2ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2de0: 0x0  nop
    ctx->pc = 0x1f2de0u;
    // NOP
    // 0x1f2de4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1f2de4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2de8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F2DE8u;
    SET_GPR_U32(ctx, 31, 0x1F2DF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F2DE8u, 0x1F2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DF0u;
label_1f2df0:
    // 0x1f2df0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2df4: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f2df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_1f2df8:
    // 0x1f2df8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2dfc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f2dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2e00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F2E00u;
    SET_GPR_U32(ctx, 31, 0x1F2E08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F2E00u, 0x1F2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E08u;
label_1f2e08:
    // 0x1f2e08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e0c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2E0Cu, 0x1F2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E14u;
label_1f2e14:
    // 0x1f2e14: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e18: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x1f2e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x1f2e1c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f2e20: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x1f2e20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2e24: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F2E24u;
    {
        const bool branch_taken_0x1f2e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2e24) {
            ctx->pc = 0x1F2F30u;
            goto label_1f2f30;
        }
    }
    ctx->pc = 0x1F2E2Cu;
    // 0x1f2e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2e30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f2e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2e38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2e3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e40: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f2e40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2e44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f2e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2e4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f2e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2e54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f2e5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2E5Cu, 0x1F2E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E64u;
label_1f2e64:
    // 0x1f2e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f2e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2e68: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f2e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f2e6c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f2e70: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f2e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f2e74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f2e74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f2e78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e7c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f2e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2e80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2E80u;
    SET_GPR_U32(ctx, 31, 0x1F2E88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2E80u, 0x1F2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E88u;
label_1f2e88:
    // 0x1f2e88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f2e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2e8c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f2e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f2e90: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1f2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1f2e94: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f2e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f2e98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f2e98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f2e9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ea0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2ea4: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f2ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2eac: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2eb0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f2eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f2eb4: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x1f2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1f2eb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2ebc: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f2ec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ec4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2ecc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f2ed0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f2ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2edc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2ee0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f2ee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ee8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2eec: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2ef0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1f2ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f2ef4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2EF4u;
    {
        const bool branch_taken_0x1f2ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2ef4) {
            ctx->pc = 0x1F2F18u;
            goto label_1f2f18;
        }
    }
    ctx->pc = 0x1F2EFCu;
    // 0x1f2efc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f04: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f2f08: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1f2f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1f2f0c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1f2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1f2f10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2F10u;
    {
        const bool branch_taken_0x1f2f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f10) {
            ctx->pc = 0x1F2F30u;
            goto label_1f2f30;
        }
    }
    ctx->pc = 0x1F2F18u;
label_1f2f18:
    // 0x1f2f18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f1c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f20: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f2f24: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1f2f28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2f2c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1f2f30:
    // 0x1f2f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f38: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f40: 0x0  nop
    ctx->pc = 0x1f2f40u;
    // NOP
    // 0x1f2f44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f2f44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2f48: 0x0  nop
    ctx->pc = 0x1f2f48u;
    // NOP
    // 0x1f2f4c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1F2F4Cu;
    {
        const bool branch_taken_0x1f2f4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2f4c) {
            ctx->pc = 0x1F3030u;
            goto label_1f3030;
        }
    }
    ctx->pc = 0x1F2F54u;
    // 0x1f2f54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f5c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f2f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f64: 0x0  nop
    ctx->pc = 0x1f2f64u;
    // NOP
    // 0x1f2f68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f2f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2f6c: 0x0  nop
    ctx->pc = 0x1f2f6cu;
    // NOP
    // 0x1f2f70: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F2F70u;
    {
        const bool branch_taken_0x1f2f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2f70) {
            ctx->pc = 0x1F2FD8u;
            goto label_1f2fd8;
        }
    }
    ctx->pc = 0x1F2F78u;
    // 0x1f2f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f7c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f80: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f2f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f84: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f2f88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f2f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f90: 0x0  nop
    ctx->pc = 0x1f2f90u;
    // NOP
    // 0x1f2f94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f2f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2f98: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1f2f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f2f9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2fa0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2fa4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f2fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2fac: 0x0  nop
    ctx->pc = 0x1f2facu;
    // NOP
    // 0x1f2fb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f2fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2fb4: 0x0  nop
    ctx->pc = 0x1f2fb4u;
    // NOP
    // 0x1f2fb8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1F2FB8u;
    {
        const bool branch_taken_0x1f2fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2fb8) {
            ctx->pc = 0x1F3030u;
            goto label_1f3030;
        }
    }
    ctx->pc = 0x1F2FC0u;
    // 0x1f2fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2fc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2fcc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f2fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f2fd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F2FD0u;
    {
        const bool branch_taken_0x1f2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2fd0) {
            ctx->pc = 0x1F3030u;
            goto label_1f3030;
        }
    }
    ctx->pc = 0x1F2FD8u;
label_1f2fd8:
    // 0x1f2fd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2fdc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2fe0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2fe4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f2fe8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f2fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f2fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ff0: 0x0  nop
    ctx->pc = 0x1f2ff0u;
    // NOP
    // 0x1f2ff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2ff8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1f2ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f2ffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3004: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f3004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f300c: 0x0  nop
    ctx->pc = 0x1f300cu;
    // NOP
    // 0x1f3010: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3014: 0x0  nop
    ctx->pc = 0x1f3014u;
    // NOP
    // 0x1f3018: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3018u;
    {
        const bool branch_taken_0x1f3018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3018) {
            ctx->pc = 0x1F3030u;
            goto label_1f3030;
        }
    }
    ctx->pc = 0x1F3020u;
    // 0x1f3020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3024: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3028: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f302c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f302cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1f3030:
    // 0x1f3030: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1f3030u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3038: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f3038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f303c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3044u;
}
