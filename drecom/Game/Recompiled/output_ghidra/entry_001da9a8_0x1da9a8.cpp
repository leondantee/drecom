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

// Function: entry_001da9a8
// Address: 0x1da9a8 - 0x1daac4
void entry_001da9a8_0x1da9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da9a8_0x1da9a8");
#endif

    switch (ctx->pc) {
        case 0x1daa44u: goto label_1daa44;
        default: break;
    }

    ctx->pc = 0x1da9a8u;

    // 0x1da9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da9ac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1da9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1da9b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1da9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da9b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1da9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1da9b8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1da9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1da9bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1da9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1da9c0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1da9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1da9c4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1da9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x1da9c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1da9cc: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1da9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1da9d0: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1da9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1da9d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1da9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1da9d8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1da9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1da9dc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x1da9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x1da9e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1da9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1da9e4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1da9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1da9e8: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1da9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1da9ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1da9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1da9f0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1da9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1da9f4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1da9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1da9f8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1da9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1da9fc: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x1da9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x1daa00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1daa04: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1daa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1daa08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1daa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1daa0c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1daa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1daa10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1daa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1daa14: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1daa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1daa18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1daa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1daa1c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1daa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1daa20: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1daa24: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1daa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1daa28: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1daa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1daa2c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1daa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1daa30: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x1daa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1daa34: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1daa34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1daa38: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1daa38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1daa3c: 0xc076ab4  jal         func_1DAAD0
    ctx->pc = 0x1DAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DAA44u);
    ctx->pc = 0x1DAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAAD0u, 0x1DAA3Cu, 0x1DAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA44u;
label_1daa44:
    // 0x1daa44: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1daa44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1daa48: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1daa48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1daa4c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1daa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1daa50: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1daa50u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daa54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daa58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daa5c: 0x1c40ff56  bgtz        $v0, . + 4 + (-0xAA << 2)
    ctx->pc = 0x1DAA5Cu;
    {
        const bool branch_taken_0x1daa5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1daa5c) {
            ctx->pc = 0x1DA7B8u;
            return;
        }
    }
    ctx->pc = 0x1DAA64u;
    // 0x1daa64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1daa68: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1daa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1daa6c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1daa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1daa70: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1daa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1daa74: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1daa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1daa78: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1daa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1daa7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1daa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1daa80: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1daa80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1daa84: 0x1440fead  bnez        $v0, . + 4 + (-0x153 << 2)
    ctx->pc = 0x1DAA84u;
    {
        const bool branch_taken_0x1daa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa84) {
            ctx->pc = 0x1DA53Cu;
            return;
        }
    }
    ctx->pc = 0x1DAA8Cu;
    // 0x1daa8c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1daa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1daa90: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1daa90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1daa94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1daa94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1daa98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1daa98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1daa9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1daa9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1daaa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1daaa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1daaa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1daaa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1daaa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1daaa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1daaac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1daaacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1daab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1daab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daab8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1daab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1daabc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAAC4u;
}
