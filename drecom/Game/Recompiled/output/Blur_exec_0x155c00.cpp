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

// Function: Blur_exec
// Address: 0x155c00 - 0x155d00
void Blur_exec_0x155c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Blur_exec_0x155c00");
#endif

    switch (ctx->pc) {
        case 0x155c38u: goto label_155c38;
        case 0x155c44u: goto label_155c44;
        default: break;
    }

    ctx->pc = 0x155c00u;

    // 0x155c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x155c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x155c04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x155c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x155c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155c10: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x155c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x155c14: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x155c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x155c18: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x155c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x155c1c: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x155c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x155c20: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x155c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x155c24: 0xafa90068  sw          $t1, 0x68($sp)
    ctx->pc = 0x155c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 9));
    // 0x155c28: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x155c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x155c2c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x155c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x155c30: 0xc0557dc  jal         func_155F70
    ctx->pc = 0x155C30u;
    SET_GPR_U32(ctx, 31, 0x155C38u);
    ctx->pc = 0x155F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F70u, 0x155C30u, 0x155C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C38u;
label_155c38:
    // 0x155c38: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x155c38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155c3c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x155C3Cu;
    {
        const bool branch_taken_0x155c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c3c) {
            ctx->pc = 0x155CD8u;
            goto label_155cd8;
        }
    }
    ctx->pc = 0x155C44u;
label_155c44:
    // 0x155c44: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155c48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155c4c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155c50: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155c54: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155c58: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155c5c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155c60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155c64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155c68: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x155C68u;
    {
        const bool branch_taken_0x155c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155c68) {
            ctx->pc = 0x155CD0u;
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155C70u;
    // 0x155c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c74: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x155c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x155c78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155c7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155c80: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x155c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x155c84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155c88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155c8c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x155c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x155c90: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x155c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155c94: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155c98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155c98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155c9c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x155c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x155ca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x155ca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ca8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x155ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x155cac: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x155cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155cb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155cb4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x155cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x155cb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x155cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x155cbc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155cc0: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x155cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x155cc4: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x155cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x155cc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155CC8u;
    {
        const bool branch_taken_0x155cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155cc8) {
            ctx->pc = 0x155CE8u;
            goto label_155ce8;
        }
    }
    ctx->pc = 0x155CD0u;
label_155cd0:
    // 0x155cd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155cd4: 0x0  nop
    ctx->pc = 0x155cd4u;
    // NOP
label_155cd8:
    // 0x155cd8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x155cdc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x155cdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155ce0: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x155CE0u;
    {
        const bool branch_taken_0x155ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155ce0) {
            ctx->pc = 0x155C44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155c44;
        }
    }
    ctx->pc = 0x155CE8u;
label_155ce8:
    // 0x155ce8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x155ce8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155cf4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x155cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x155cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x155CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D00u;
}
