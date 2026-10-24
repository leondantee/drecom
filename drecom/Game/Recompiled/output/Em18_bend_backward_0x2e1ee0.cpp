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

// Function: Em18_bend_backward
// Address: 0x2e1ee0 - 0x2e2440
void Em18_bend_backward_0x2e1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_bend_backward_0x2e1ee0");
#endif

    switch (ctx->pc) {
        case 0x2e1f48u: goto label_2e1f48;
        default: break;
    }

    ctx->pc = 0x2e1ee0u;

    // 0x2e1ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1ee4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e1ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e1ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1eec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e1ef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1ef4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e1ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e1ef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1efc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e1efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e1f00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e1f04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e1f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e1f08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1F08u;
    {
        const bool branch_taken_0x2e1f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f08) {
            ctx->pc = 0x2E1F1Cu;
            goto label_2e1f1c;
        }
    }
    ctx->pc = 0x2E1F10u;
    // 0x2e1f10: 0xa20000d3  sb          $zero, 0xD3($s0)
    ctx->pc = 0x2e1f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 211), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1f14: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x2E1F14u;
    {
        const bool branch_taken_0x2e1f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f14) {
            ctx->pc = 0x2E242Cu;
            goto label_2e242c;
        }
    }
    ctx->pc = 0x2E1F1Cu;
label_2e1f1c:
    // 0x2e1f1c: 0x920300d3  lbu         $v1, 0xD3($s0)
    ctx->pc = 0x2e1f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
    // 0x2e1f20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e1f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1f24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1f28: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2E1F28u;
    {
        const bool branch_taken_0x2e1f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1f28) {
            ctx->pc = 0x2E2094u;
            goto label_2e2094;
        }
    }
    ctx->pc = 0x2E1F30u;
    // 0x2e1f30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1F30u;
    {
        const bool branch_taken_0x2e1f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f30) {
            ctx->pc = 0x2E1F40u;
            goto label_2e1f40;
        }
    }
    ctx->pc = 0x2E1F38u;
    // 0x2e1f38: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2E1F38u;
    {
        const bool branch_taken_0x2e1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f38) {
            ctx->pc = 0x2E242Cu;
            goto label_2e242c;
        }
    }
    ctx->pc = 0x2E1F40u;
label_2e1f40:
    // 0x2e1f40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E1F40u;
    SET_GPR_U32(ctx, 31, 0x2E1F48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E1F40u, 0x2E1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F48u;
label_2e1f48:
    // 0x2e1f48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1f4c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e1f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e1f50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e1f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1f54: 0xa20300d4  sb          $v1, 0xD4($s0)
    ctx->pc = 0x2e1f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1f58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1f5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f60: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f64: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e1f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e1f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1f6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f70: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f74: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e1f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e1f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1f7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f80: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f84: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x2e1f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x2e1f88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f8c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f90: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x2e1f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2e1f94: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e1f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e1f98: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x2e1f98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1f9c: 0x920300d4  lbu         $v1, 0xD4($s0)
    ctx->pc = 0x2e1f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e1fa0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e1fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1fa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1fa8: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E1FA8u;
    {
        const bool branch_taken_0x2e1fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1fa8) {
            ctx->pc = 0x2E2050u;
            goto label_2e2050;
        }
    }
    ctx->pc = 0x2E1FB0u;
    // 0x2e1fb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1fb4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1FB4u;
    {
        const bool branch_taken_0x2e1fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1fb4) {
            ctx->pc = 0x2E2018u;
            goto label_2e2018;
        }
    }
    ctx->pc = 0x2E1FBCu;
    // 0x2e1fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1fc0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E1FC0u;
    {
        const bool branch_taken_0x2e1fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1fc0) {
            ctx->pc = 0x2E1FF8u;
            goto label_2e1ff8;
        }
    }
    ctx->pc = 0x2E1FC8u;
    // 0x2e1fc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1FC8u;
    {
        const bool branch_taken_0x2e1fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fc8) {
            ctx->pc = 0x2E1FD8u;
            goto label_2e1fd8;
        }
    }
    ctx->pc = 0x2E1FD0u;
    // 0x2e1fd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E1FD0u;
    {
        const bool branch_taken_0x2e1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fd0) {
            ctx->pc = 0x2E2080u;
            goto label_2e2080;
        }
    }
    ctx->pc = 0x2E1FD8u;
label_2e1fd8:
    // 0x2e1fd8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2e1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2e1fdc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e1fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e1fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1fe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1fe8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1fec: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e1fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e1ff0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E1FF0u;
    {
        const bool branch_taken_0x2e1ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ff0) {
            ctx->pc = 0x2E2080u;
            goto label_2e2080;
        }
    }
    ctx->pc = 0x2E1FF8u;
label_2e1ff8:
    // 0x2e1ff8: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2e1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2e1ffc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e1ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2004: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2008: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e200c: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e2010: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E2010u;
    {
        const bool branch_taken_0x2e2010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2010) {
            ctx->pc = 0x2E2080u;
            goto label_2e2080;
        }
    }
    ctx->pc = 0x2E2018u;
label_2e2018:
    // 0x2e2018: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2e2018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2e201c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e201cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2024: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2028: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e202c: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e2030: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2e2030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2e2034: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e2034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e203c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2040: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2044: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e2044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e2048: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2048u;
    {
        const bool branch_taken_0x2e2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2048) {
            ctx->pc = 0x2E2080u;
            goto label_2e2080;
        }
    }
    ctx->pc = 0x2E2050u;
label_2e2050:
    // 0x2e2050: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2e2050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2e2054: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e2054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e205c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2060: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2064: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e2064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e2068: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2e2068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2e206c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e206cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2074: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2078: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e207c: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
label_2e2080:
    // 0x2e2080: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2e2080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e2084: 0xa60300c6  sh          $v1, 0xC6($s0)
    ctx->pc = 0x2e2084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2088: 0x920300d3  lbu         $v1, 0xD3($s0)
    ctx->pc = 0x2e2088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
    // 0x2e208c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e2090: 0xa20300d3  sb          $v1, 0xD3($s0)
    ctx->pc = 0x2e2090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 211), (uint8_t)GPR_U32(ctx, 3));
label_2e2094:
    // 0x2e2094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2098: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e209c: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x2e209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e20a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e20a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20a4: 0x0  nop
    ctx->pc = 0x2e20a4u;
    // NOP
    // 0x2e20a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e20a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e20ac: 0x0  nop
    ctx->pc = 0x2e20acu;
    // NOP
    // 0x2e20b0: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2E20B0u;
    {
        const bool branch_taken_0x2e20b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e20b0) {
            ctx->pc = 0x2E2128u;
            goto label_2e2128;
        }
    }
    ctx->pc = 0x2E20B8u;
    // 0x2e20b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e20bc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e20c0: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x2e20c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e20c4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e20c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e20c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e20cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e20ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20d0: 0x0  nop
    ctx->pc = 0x2e20d0u;
    // NOP
    // 0x2e20d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e20d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e20d8: 0x0  nop
    ctx->pc = 0x2e20d8u;
    // NOP
    // 0x2e20dc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E20DCu;
    {
        const bool branch_taken_0x2e20dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e20dc) {
            ctx->pc = 0x2E2110u;
            goto label_2e2110;
        }
    }
    ctx->pc = 0x2E20E4u;
    // 0x2e20e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e20e8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e20e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e20ec: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x2e20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e20f0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e20f4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e20f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e20f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e20f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20fc: 0x0  nop
    ctx->pc = 0x2e20fcu;
    // NOP
    // 0x2e2100: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2104: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x2e2104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x2e2108: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E2108u;
    {
        const bool branch_taken_0x2e2108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2108) {
            ctx->pc = 0x2E2190u;
            goto label_2e2190;
        }
    }
    ctx->pc = 0x2E2110u;
label_2e2110:
    // 0x2e2110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2114: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2118: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e211c: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e2120: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E2120u;
    {
        const bool branch_taken_0x2e2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2120) {
            ctx->pc = 0x2E2190u;
            goto label_2e2190;
        }
    }
    ctx->pc = 0x2E2128u;
label_2e2128:
    // 0x2e2128: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e212c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2130: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x2e2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2134: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2e2134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2e2138: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e213c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e213cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2140: 0x0  nop
    ctx->pc = 0x2e2140u;
    // NOP
    // 0x2e2144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2148: 0x0  nop
    ctx->pc = 0x2e2148u;
    // NOP
    // 0x2e214c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E214Cu;
    {
        const bool branch_taken_0x2e214c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e214c) {
            ctx->pc = 0x2E2180u;
            goto label_2e2180;
        }
    }
    ctx->pc = 0x2E2154u;
    // 0x2e2154: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2158: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e215c: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x2e215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2160: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e2160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2164: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e216c: 0x0  nop
    ctx->pc = 0x2e216cu;
    // NOP
    // 0x2e2170: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2174: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x2e2174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x2e2178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2178u;
    {
        const bool branch_taken_0x2e2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2178) {
            ctx->pc = 0x2E2190u;
            goto label_2e2190;
        }
    }
    ctx->pc = 0x2E2180u;
label_2e2180:
    // 0x2e2180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2184: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2188: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e218c: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e218cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
label_2e2190:
    // 0x2e2190: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2194: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2198: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x2e2198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e219c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e219cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e21a0: 0x0  nop
    ctx->pc = 0x2e21a0u;
    // NOP
    // 0x2e21a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e21a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e21a8: 0x0  nop
    ctx->pc = 0x2e21a8u;
    // NOP
    // 0x2e21ac: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2E21ACu;
    {
        const bool branch_taken_0x2e21ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e21ac) {
            ctx->pc = 0x2E2224u;
            goto label_2e2224;
        }
    }
    ctx->pc = 0x2E21B4u;
    // 0x2e21b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e21b8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e21bc: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x2e21bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e21c0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e21c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e21c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e21c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e21c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e21cc: 0x0  nop
    ctx->pc = 0x2e21ccu;
    // NOP
    // 0x2e21d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e21d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e21d4: 0x0  nop
    ctx->pc = 0x2e21d4u;
    // NOP
    // 0x2e21d8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E21D8u;
    {
        const bool branch_taken_0x2e21d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e21d8) {
            ctx->pc = 0x2E220Cu;
            goto label_2e220c;
        }
    }
    ctx->pc = 0x2E21E0u;
    // 0x2e21e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e21e4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e21e8: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x2e21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e21ec: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e21f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e21f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e21f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e21f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e21f8: 0x0  nop
    ctx->pc = 0x2e21f8u;
    // NOP
    // 0x2e21fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e21fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2200: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x2e2200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x2e2204: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E2204u;
    {
        const bool branch_taken_0x2e2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2204) {
            ctx->pc = 0x2E228Cu;
            goto label_2e228c;
        }
    }
    ctx->pc = 0x2E220Cu;
label_2e220c:
    // 0x2e220c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e220cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2214: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2218: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e2218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e221c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E221Cu;
    {
        const bool branch_taken_0x2e221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e221c) {
            ctx->pc = 0x2E228Cu;
            goto label_2e228c;
        }
    }
    ctx->pc = 0x2E2224u;
label_2e2224:
    // 0x2e2224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2228: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e222c: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x2e222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2230: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2e2230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2e2234: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e223c: 0x0  nop
    ctx->pc = 0x2e223cu;
    // NOP
    // 0x2e2240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2244: 0x0  nop
    ctx->pc = 0x2e2244u;
    // NOP
    // 0x2e2248: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E2248u;
    {
        const bool branch_taken_0x2e2248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2248) {
            ctx->pc = 0x2E227Cu;
            goto label_2e227c;
        }
    }
    ctx->pc = 0x2E2250u;
    // 0x2e2250: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2254: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2258: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x2e2258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e225c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e225cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2260: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2268: 0x0  nop
    ctx->pc = 0x2e2268u;
    // NOP
    // 0x2e226c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e226cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2270: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x2e2270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x2e2274: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2274u;
    {
        const bool branch_taken_0x2e2274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2274) {
            ctx->pc = 0x2E228Cu;
            goto label_2e228c;
        }
    }
    ctx->pc = 0x2E227Cu;
label_2e227c:
    // 0x2e227c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e227cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2280: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2284: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2288: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e2288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
label_2e228c:
    // 0x2e228c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2290: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2294: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x2e2294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e229c: 0x0  nop
    ctx->pc = 0x2e229cu;
    // NOP
    // 0x2e22a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e22a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e22a4: 0x0  nop
    ctx->pc = 0x2e22a4u;
    // NOP
    // 0x2e22a8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2E22A8u;
    {
        const bool branch_taken_0x2e22a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e22a8) {
            ctx->pc = 0x2E2320u;
            goto label_2e2320;
        }
    }
    ctx->pc = 0x2E22B0u;
    // 0x2e22b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e22b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e22b8: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x2e22b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e22bc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e22c0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e22c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e22c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e22c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e22c8: 0x0  nop
    ctx->pc = 0x2e22c8u;
    // NOP
    // 0x2e22cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e22ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e22d0: 0x0  nop
    ctx->pc = 0x2e22d0u;
    // NOP
    // 0x2e22d4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E22D4u;
    {
        const bool branch_taken_0x2e22d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e22d4) {
            ctx->pc = 0x2E2308u;
            goto label_2e2308;
        }
    }
    ctx->pc = 0x2E22DCu;
    // 0x2e22dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e22e0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e22e4: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x2e22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e22e8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e22ec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e22ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e22f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e22f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e22f4: 0x0  nop
    ctx->pc = 0x2e22f4u;
    // NOP
    // 0x2e22f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e22f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e22fc: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x2e22fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x2e2300: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E2300u;
    {
        const bool branch_taken_0x2e2300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2300) {
            ctx->pc = 0x2E2388u;
            goto label_2e2388;
        }
    }
    ctx->pc = 0x2E2308u;
label_2e2308:
    // 0x2e2308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e230c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2310: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2314: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x2e2314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x2e2318: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E2318u;
    {
        const bool branch_taken_0x2e2318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2318) {
            ctx->pc = 0x2E2388u;
            goto label_2e2388;
        }
    }
    ctx->pc = 0x2E2320u;
label_2e2320:
    // 0x2e2320: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2324: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2328: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x2e2328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e232c: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2e232cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2e2330: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2338: 0x0  nop
    ctx->pc = 0x2e2338u;
    // NOP
    // 0x2e233c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2340: 0x0  nop
    ctx->pc = 0x2e2340u;
    // NOP
    // 0x2e2344: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E2344u;
    {
        const bool branch_taken_0x2e2344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2344) {
            ctx->pc = 0x2E2378u;
            goto label_2e2378;
        }
    }
    ctx->pc = 0x2E234Cu;
    // 0x2e234c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2350: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2354: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x2e2354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2358: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e2358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e235c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e235cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2364: 0x0  nop
    ctx->pc = 0x2e2364u;
    // NOP
    // 0x2e2368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e236c: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x2e236cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x2e2370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2370u;
    {
        const bool branch_taken_0x2e2370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2370) {
            ctx->pc = 0x2E2388u;
            goto label_2e2388;
        }
    }
    ctx->pc = 0x2E2378u;
label_2e2378:
    // 0x2e2378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e237c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2380: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2384: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x2e2384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
label_2e2388:
    // 0x2e2388: 0x860300c6  lh          $v1, 0xC6($s0)
    ctx->pc = 0x2e2388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x2e238c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E238Cu;
    {
        const bool branch_taken_0x2e238c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e238c) {
            ctx->pc = 0x2E23A8u;
            goto label_2e23a8;
        }
    }
    ctx->pc = 0x2E2394u;
    // 0x2e2394: 0x860300c6  lh          $v1, 0xC6($s0)
    ctx->pc = 0x2e2394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x2e2398: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e239c: 0xa60300c6  sh          $v1, 0xC6($s0)
    ctx->pc = 0x2e239cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e23a0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E23A0u;
    {
        const bool branch_taken_0x2e23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23a0) {
            ctx->pc = 0x2E242Cu;
            goto label_2e242c;
        }
    }
    ctx->pc = 0x2E23A8u;
label_2e23a8:
    // 0x2e23a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e23a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e23acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e23b0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x2e23b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x2e23b4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x2e23b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x2e23b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e23bc: 0xa20000d3  sb          $zero, 0xD3($s0)
    ctx->pc = 0x2e23bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 211), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e23c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e23c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23c8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23cc: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e23ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e23d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e23d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23d8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23dc: 0xe4600c0c  swc1        $f0, 0xC0C($v1)
    ctx->pc = 0x2e23dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3084), bits); }
    // 0x2e23e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e23e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23e8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23ec: 0xe46016fc  swc1        $f0, 0x16FC($v1)
    ctx->pc = 0x2e23ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5884), bits); }
    // 0x2e23f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23f4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23f8: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x2e23f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2e23fc: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x2e23fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x2e2400: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x2e2400u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2404: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2408: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e240c: 0x94830c30  lhu         $v1, 0xC30($a0)
    ctx->pc = 0x2e240cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3120)));
    // 0x2e2410: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x2e2410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x2e2414: 0xa4830c30  sh          $v1, 0xC30($a0)
    ctx->pc = 0x2e2414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3120), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2418: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e241c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2420: 0x94831720  lhu         $v1, 0x1720($a0)
    ctx->pc = 0x2e2420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5920)));
    // 0x2e2424: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x2e2424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x2e2428: 0xa4831720  sh          $v1, 0x1720($a0)
    ctx->pc = 0x2e2428u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5920), (uint16_t)GPR_U32(ctx, 3));
label_2e242c:
    // 0x2e242c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e242cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2434: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e2434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e2438: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2440u;
}
