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

// Function: Em19_light_control
// Address: 0x2e79e0 - 0x2e7fcc
void Em19_light_control_0x2e79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_light_control_0x2e79e0");
#endif

    switch (ctx->pc) {
        case 0x2e7a44u: goto label_2e7a44;
        case 0x2e7a54u: goto label_2e7a54;
        case 0x2e7bf4u: goto label_2e7bf4;
        case 0x2e7c24u: goto label_2e7c24;
        case 0x2e7c2cu: goto label_2e7c2c;
        case 0x2e7c78u: goto label_2e7c78;
        case 0x2e7c9cu: goto label_2e7c9c;
        case 0x2e7cc0u: goto label_2e7cc0;
        case 0x2e7ce4u: goto label_2e7ce4;
        case 0x2e7d04u: goto label_2e7d04;
        case 0x2e7d4cu: goto label_2e7d4c;
        case 0x2e7d7cu: goto label_2e7d7c;
        case 0x2e7d84u: goto label_2e7d84;
        case 0x2e7dd0u: goto label_2e7dd0;
        case 0x2e7df4u: goto label_2e7df4;
        case 0x2e7e18u: goto label_2e7e18;
        case 0x2e7e3cu: goto label_2e7e3c;
        case 0x2e7e5cu: goto label_2e7e5c;
        default: break;
    }

    ctx->pc = 0x2e79e0u;

    // 0x2e79e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e79e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e79e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e79e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e79ec: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2e79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2e79f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e79f4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e79f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e79f8: 0x920300ea  lbu         $v1, 0xEA($s0)
    ctx->pc = 0x2e79f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x2e79fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e79fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e7a00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7a04: 0x108300ce  beq         $a0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x2E7A04u;
    {
        const bool branch_taken_0x2e7a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7a04) {
            ctx->pc = 0x2E7D40u;
            goto label_2e7d40;
        }
    }
    ctx->pc = 0x2E7A0Cu;
    // 0x2e7a0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7a10: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2E7A10u;
    {
        const bool branch_taken_0x2e7a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7a10) {
            ctx->pc = 0x2E7B98u;
            goto label_2e7b98;
        }
    }
    ctx->pc = 0x2E7A18u;
    // 0x2e7a18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7a1c: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E7A1Cu;
    {
        const bool branch_taken_0x2e7a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7a1c) {
            ctx->pc = 0x2E7A5Cu;
            goto label_2e7a5c;
        }
    }
    ctx->pc = 0x2E7A24u;
    // 0x2e7a24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7A24u;
    {
        const bool branch_taken_0x2e7a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a24) {
            ctx->pc = 0x2E7A34u;
            goto label_2e7a34;
        }
    }
    ctx->pc = 0x2E7A2Cu;
    // 0x2e7a2c: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x2E7A2Cu;
    {
        const bool branch_taken_0x2e7a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a2c) {
            ctx->pc = 0x2E7FB8u;
            goto label_2e7fb8;
        }
    }
    ctx->pc = 0x2E7A34u;
label_2e7a34:
    // 0x2e7a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e7a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7a38: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7a3c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A44u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7A3Cu, 0x2E7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A44u;
label_2e7a44:
    // 0x2e7a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e7a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7a48: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7a4c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E7A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A54u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E7A4Cu, 0x2E7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A54u;
label_2e7a54:
    // 0x2e7a54: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x2E7A54u;
    {
        const bool branch_taken_0x2e7a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a54) {
            ctx->pc = 0x2E7FB8u;
            goto label_2e7fb8;
        }
    }
    ctx->pc = 0x2E7A5Cu;
label_2e7a5c:
    // 0x2e7a5c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2e7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e7a60: 0xa60200e8  sh          $v0, 0xE8($s0)
    ctx->pc = 0x2e7a60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7a64: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e7a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7a6c: 0x0  nop
    ctx->pc = 0x2e7a6cu;
    // NOP
    // 0x2e7a70: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x2e7a74: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e7a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7a7c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7a80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7a88: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7a8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7a90: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7a98: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2e7a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2e7a9c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e7aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7aa4: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7aa8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ab0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7ab4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ab8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ac0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2e7ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2e7ac4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e7ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7acc: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7ad0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ad8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7adc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ae0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ae8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2e7ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2e7aec: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e7af0: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e7af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e7af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7af8: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7afc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b08: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b0c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b14: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2e7b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2e7b18: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e7b1c: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e7b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e7b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7b24: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7b28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b30: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b38: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b40: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2e7b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2e7b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7b4c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7b50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b60: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b68: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x2e7b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x2e7b6c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7b70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b80: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b88: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2e7b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2e7b8c: 0x920200ea  lbu         $v0, 0xEA($s0)
    ctx->pc = 0x2e7b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x2e7b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7b94: 0xa20200ea  sb          $v0, 0xEA($s0)
    ctx->pc = 0x2e7b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 234), (uint8_t)GPR_U32(ctx, 2));
label_2e7b98:
    // 0x2e7b98: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7b9c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e7ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7ba4: 0x0  nop
    ctx->pc = 0x2e7ba4u;
    // NOP
    // 0x2e7ba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7bac: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x2e7bb0: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7bb4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e7bb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e7bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e7bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7bc0: 0x0  nop
    ctx->pc = 0x2e7bc0u;
    // NOP
    // 0x2e7bc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e7bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7bc8: 0x0  nop
    ctx->pc = 0x2e7bc8u;
    // NOP
    // 0x2e7bcc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7BCCu;
    {
        const bool branch_taken_0x2e7bcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7bcc) {
            ctx->pc = 0x2E7BE8u;
            goto label_2e7be8;
        }
    }
    ctx->pc = 0x2E7BD4u;
    // 0x2e7bd4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e7bd8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e7bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e7bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7be0: 0x0  nop
    ctx->pc = 0x2e7be0u;
    // NOP
    // 0x2e7be4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_2e7be8:
    // 0x2e7be8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7bec: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E7BECu;
    SET_GPR_U32(ctx, 31, 0x2E7BF4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E7BECu, 0x2E7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BF4u;
label_2e7bf4:
    // 0x2e7bf4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e7bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7bf8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e7bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7c00: 0x0  nop
    ctx->pc = 0x2e7c00u;
    // NOP
    // 0x2e7c04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7c08: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e7c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e7c0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e7c10: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7c14: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e7c18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e7c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7c1c: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C24u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E7C1Cu, 0x2E7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C24u;
label_2e7c24:
    // 0x2e7c24: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E7C24u;
    SET_GPR_U32(ctx, 31, 0x2E7C2Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7C24u, 0x2E7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C2Cu;
label_2e7c2c:
    // 0x2e7c2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7c30: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e7c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e7c34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7c38: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E7C38u;
    {
        const bool branch_taken_0x2e7c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c38) {
            ctx->pc = 0x2E7CC8u;
            goto label_2e7cc8;
        }
    }
    ctx->pc = 0x2E7C40u;
    // 0x2e7c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7c44: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7C44u;
    {
        const bool branch_taken_0x2e7c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c44) {
            ctx->pc = 0x2E7CA4u;
            goto label_2e7ca4;
        }
    }
    ctx->pc = 0x2E7C4Cu;
    // 0x2e7c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7c50: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7C50u;
    {
        const bool branch_taken_0x2e7c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c50) {
            ctx->pc = 0x2E7C80u;
            goto label_2e7c80;
        }
    }
    ctx->pc = 0x2E7C58u;
    // 0x2e7c58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7C58u;
    {
        const bool branch_taken_0x2e7c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c58) {
            ctx->pc = 0x2E7C68u;
            goto label_2e7c68;
        }
    }
    ctx->pc = 0x2E7C60u;
    // 0x2e7c60: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7C60u;
    {
        const bool branch_taken_0x2e7c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c60) {
            ctx->pc = 0x2E7C68u;
            goto label_2e7c68;
        }
    }
    ctx->pc = 0x2E7C68u;
label_2e7c68:
    // 0x2e7c68: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7c6c: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x2e7c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7c70: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7C70u;
    SET_GPR_U32(ctx, 31, 0x2E7C78u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7C70u, 0x2E7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C78u;
label_2e7c78:
    // 0x2e7c78: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7C78u;
    {
        const bool branch_taken_0x2e7c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c78) {
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7C80u;
label_2e7c80:
    // 0x2e7c80: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2e7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2e7c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7c88: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7c8c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7c8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7c90: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7c94: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7C94u;
    SET_GPR_U32(ctx, 31, 0x2E7C9Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7C94u, 0x2E7C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C9Cu;
label_2e7c9c:
    // 0x2e7c9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7C9Cu;
    {
        const bool branch_taken_0x2e7c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c9c) {
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7CA4u;
label_2e7ca4:
    // 0x2e7ca4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e7ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7cac: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7cb0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7cb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7cb4: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7cb8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7CB8u;
    SET_GPR_U32(ctx, 31, 0x2E7CC0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7CB8u, 0x2E7CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CC0u;
label_2e7cc0:
    // 0x2e7cc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7CC0u;
    {
        const bool branch_taken_0x2e7cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7cc0) {
            ctx->pc = 0x2E7CE4u;
            goto label_2e7ce4;
        }
    }
    ctx->pc = 0x2E7CC8u;
label_2e7cc8:
    // 0x2e7cc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7cd0: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7cd4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7cd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7cd8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7cdc: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7CDCu;
    SET_GPR_U32(ctx, 31, 0x2E7CE4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7CDCu, 0x2E7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CE4u;
label_2e7ce4:
    // 0x2e7ce4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7ce8: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e7cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7cf0: 0x0  nop
    ctx->pc = 0x2e7cf0u;
    // NOP
    // 0x2e7cf4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e7cf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e7cf8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7cfc: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E7CFCu;
    SET_GPR_U32(ctx, 31, 0x2E7D04u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E7CFCu, 0x2E7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D04u;
label_2e7d04:
    // 0x2e7d04: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7d08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D08u;
    {
        const bool branch_taken_0x2e7d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d08) {
            ctx->pc = 0x2E7D24u;
            goto label_2e7d24;
        }
    }
    ctx->pc = 0x2E7D10u;
    // 0x2e7d10: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7d14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e7d18: 0xa60300e8  sh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7d1c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2E7D1Cu;
    {
        const bool branch_taken_0x2e7d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d1c) {
            ctx->pc = 0x2E7FB8u;
            goto label_2e7fb8;
        }
    }
    ctx->pc = 0x2E7D24u;
label_2e7d24:
    // 0x2e7d24: 0x920300ea  lbu         $v1, 0xEA($s0)
    ctx->pc = 0x2e7d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x2e7d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e7d2c: 0xa20300ea  sb          $v1, 0xEA($s0)
    ctx->pc = 0x2e7d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 234), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7d30: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e7d34: 0xa60300e8  sh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7d38: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2E7D38u;
    {
        const bool branch_taken_0x2e7d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d38) {
            ctx->pc = 0x2E7FB8u;
            goto label_2e7fb8;
        }
    }
    ctx->pc = 0x2E7D40u;
label_2e7d40:
    // 0x2e7d40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7d44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E7D44u;
    SET_GPR_U32(ctx, 31, 0x2E7D4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E7D44u, 0x2E7D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D4Cu;
label_2e7d4c:
    // 0x2e7d4c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d50: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e7d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7d58: 0x0  nop
    ctx->pc = 0x2e7d58u;
    // NOP
    // 0x2e7d5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7d60: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e7d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e7d64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e7d68: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7d6c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e7d70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e7d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7d74: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E7D74u;
    SET_GPR_U32(ctx, 31, 0x2E7D7Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E7D74u, 0x2E7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D7Cu;
label_2e7d7c:
    // 0x2e7d7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E7D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7D7Cu, 0x2E7D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D84u;
label_2e7d84:
    // 0x2e7d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7d88: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e7d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e7d8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7d90: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E7D90u;
    {
        const bool branch_taken_0x2e7d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7d90) {
            ctx->pc = 0x2E7E20u;
            goto label_2e7e20;
        }
    }
    ctx->pc = 0x2E7D98u;
    // 0x2e7d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7d9c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7D9Cu;
    {
        const bool branch_taken_0x2e7d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7d9c) {
            ctx->pc = 0x2E7DFCu;
            goto label_2e7dfc;
        }
    }
    ctx->pc = 0x2E7DA4u;
    // 0x2e7da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7da8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7DA8u;
    {
        const bool branch_taken_0x2e7da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7da8) {
            ctx->pc = 0x2E7DD8u;
            goto label_2e7dd8;
        }
    }
    ctx->pc = 0x2E7DB0u;
    // 0x2e7db0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7DB0u;
    {
        const bool branch_taken_0x2e7db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7db0) {
            ctx->pc = 0x2E7DC0u;
            goto label_2e7dc0;
        }
    }
    ctx->pc = 0x2E7DB8u;
    // 0x2e7db8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7DB8u;
    {
        const bool branch_taken_0x2e7db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7db8) {
            ctx->pc = 0x2E7DC0u;
            goto label_2e7dc0;
        }
    }
    ctx->pc = 0x2E7DC0u;
label_2e7dc0:
    // 0x2e7dc0: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7dc4: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x2e7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7dc8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7DC8u;
    SET_GPR_U32(ctx, 31, 0x2E7DD0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7DC8u, 0x2E7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DD0u;
label_2e7dd0:
    // 0x2e7dd0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7DD0u;
    {
        const bool branch_taken_0x2e7dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7dd0) {
            ctx->pc = 0x2E7E3Cu;
            goto label_2e7e3c;
        }
    }
    ctx->pc = 0x2E7DD8u;
label_2e7dd8:
    // 0x2e7dd8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2e7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2e7ddc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7de0: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7de4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7de4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7de8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7dec: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7DECu;
    SET_GPR_U32(ctx, 31, 0x2E7DF4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7DECu, 0x2E7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DF4u;
label_2e7df4:
    // 0x2e7df4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7DF4u;
    {
        const bool branch_taken_0x2e7df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7df4) {
            ctx->pc = 0x2E7E3Cu;
            goto label_2e7e3c;
        }
    }
    ctx->pc = 0x2E7DFCu;
label_2e7dfc:
    // 0x2e7dfc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e7e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e04: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7e08: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7e08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7e0c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e10: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7E10u;
    SET_GPR_U32(ctx, 31, 0x2E7E18u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7E10u, 0x2E7E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E18u;
label_2e7e18:
    // 0x2e7e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7E18u;
    {
        const bool branch_taken_0x2e7e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e18) {
            ctx->pc = 0x2E7E3Cu;
            goto label_2e7e3c;
        }
    }
    ctx->pc = 0x2E7E20u;
label_2e7e20:
    // 0x2e7e20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e28: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7e2c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7e2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7e30: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e34: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7E34u;
    SET_GPR_U32(ctx, 31, 0x2E7E3Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7E34u, 0x2E7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E3Cu;
label_2e7e3c:
    // 0x2e7e3c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7e40: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e7e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7e48: 0x0  nop
    ctx->pc = 0x2e7e48u;
    // NOP
    // 0x2e7e4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e7e4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e7e50: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e54: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E7E54u;
    SET_GPR_U32(ctx, 31, 0x2E7E5Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E7E54u, 0x2E7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E5Cu;
label_2e7e5c:
    // 0x2e7e5c: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7e5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7e60: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E7E60u;
    {
        const bool branch_taken_0x2e7e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e60) {
            ctx->pc = 0x2E7FB4u;
            goto label_2e7fb4;
        }
    }
    ctx->pc = 0x2E7E68u;
    // 0x2e7e68: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7e6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e7e70: 0xa60300e8  sh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7e70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7e74: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7e80: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7e84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7e88: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7e8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7e90: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7e94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7e98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e9c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x2e7e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7ea4: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x2e7ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2e7ea8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7eac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7eb4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7eb8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ebc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7ec0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7ec4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7ec8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7ecc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7ed0: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x2e7ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7ed4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7ed8: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x2e7ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x2e7edc: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7ee0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7ee8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7eec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ef0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7ef4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7ef8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7efc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7f04: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x2e7f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7f0c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x2e7f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x2e7f10: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7f14: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7f20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7f24: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7f28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f2c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7f30: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7f38: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x2e7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7f40: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x2e7f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x2e7f44: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7f48: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7f4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f50: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7f54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7f58: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7f5c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f60: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7f64: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7f6c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x2e7f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7f70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7f74: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x2e7f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x2e7f78: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7f7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e7f80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7f88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e7f8c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x2e7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x2e7f90: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e7f94: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2e7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2e7f98: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e7f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e7f9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e7f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7fa0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x2e7fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7fa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7fa8: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x2e7fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x2e7fac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7FACu;
    {
        const bool branch_taken_0x2e7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fac) {
            ctx->pc = 0x2E7FB8u;
            goto label_2e7fb8;
        }
    }
    ctx->pc = 0x2E7FB4u;
label_2e7fb4:
    // 0x2e7fb4: 0xa20000ea  sb          $zero, 0xEA($s0)
    ctx->pc = 0x2e7fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 234), (uint8_t)GPR_U32(ctx, 0));
label_2e7fb8:
    // 0x2e7fb8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e7fb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7fc0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e7fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7FCCu;
}
