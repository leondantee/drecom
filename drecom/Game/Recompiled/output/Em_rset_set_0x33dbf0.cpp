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

// Function: Em_rset_set
// Address: 0x33dbf0 - 0x33dcd4
void Em_rset_set_0x33dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_rset_set_0x33dbf0");
#endif

    switch (ctx->pc) {
        case 0x33dcb4u: goto label_33dcb4;
        default: break;
    }

    ctx->pc = 0x33dbf0u;

    // 0x33dbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33dbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33dbf4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33dbf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33dbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33dbfc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x33dc00: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33dc04: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33dc04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33dc08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33dc0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc10: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x33dc10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x33dc14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33dc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dc18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc1c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x33dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x33dc20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33dc20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dc24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc28: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x33dc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x33dc2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33dc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dc30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc34: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x33dc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x33dc38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x33dc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33dc40: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x33dc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x33dc44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc48: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x33dc48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x33dc4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33dc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33dc50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc54: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x33dc54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33dc58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33dc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33dc5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc60: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33dc60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33dc64: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33dc64u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x89545Eu));
    // 0x33dc68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33dc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33dc6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33dc6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33dc70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33dc74: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33dc78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33dc7c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33dc80: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x33dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33dc84: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x33dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x33dc88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33dc8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc90: 0xa0431308  sb          $v1, 0x1308($v0)
    ctx->pc = 0x33dc90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4872), (uint8_t)GPR_U32(ctx, 3));
    // 0x33dc94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x33dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dc98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33dc9c: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x33dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x33dca0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33dca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33dca4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x33dca8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x33dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dcac: 0xc05bdcc  jal         func_16F730
    ctx->pc = 0x33DCACu;
    SET_GPR_U32(ctx, 31, 0x33DCB4u);
    ctx->pc = 0x16F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F730u, 0x33DCACu, 0x33DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCB4u;
label_33dcb4:
    // 0x33dcb4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x33dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33dcb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x33dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33dcbc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x33dcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x33dcc0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33dcc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33dcc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33dcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33dcc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33dcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33dccc: 0x3e00008  jr          $ra
    ctx->pc = 0x33DCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DCD4u;
}
