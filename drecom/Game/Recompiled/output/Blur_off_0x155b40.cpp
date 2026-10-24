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

// Function: Blur_off
// Address: 0x155b40 - 0x155c00
void Blur_off_0x155b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Blur_off_0x155b40");
#endif

    switch (ctx->pc) {
        case 0x155b64u: goto label_155b64;
        case 0x155b70u: goto label_155b70;
        default: break;
    }

    ctx->pc = 0x155b40u;

    // 0x155b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x155b44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x155b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x155b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155b50: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x155b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x155b54: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x155b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x155b58: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x155b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x155b5c: 0xc0557dc  jal         func_155F70
    ctx->pc = 0x155B5Cu;
    SET_GPR_U32(ctx, 31, 0x155B64u);
    ctx->pc = 0x155F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F70u, 0x155B5Cu, 0x155B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B64u;
label_155b64:
    // 0x155b64: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x155b64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155b68: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x155B68u;
    {
        const bool branch_taken_0x155b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b68) {
            ctx->pc = 0x155BD8u;
            goto label_155bd8;
        }
    }
    ctx->pc = 0x155B70u;
label_155b70:
    // 0x155b70: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155b74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155b78: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155b7c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155b80: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155b84: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155b88: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155b8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155b90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155b94: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x155B94u;
    {
        const bool branch_taken_0x155b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b94) {
            ctx->pc = 0x155BD0u;
            goto label_155bd0;
        }
    }
    ctx->pc = 0x155B9Cu;
    // 0x155b9c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x155b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155ba0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155ba8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155BA8u;
    {
        const bool branch_taken_0x155ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x155ba8) {
            ctx->pc = 0x155BD0u;
            goto label_155bd0;
        }
    }
    ctx->pc = 0x155BB0u;
    // 0x155bb0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x155bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bb4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x155bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bb8: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x155bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x155bbc: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x155bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x155bc0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x155bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bc4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x155bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x155bc8: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x155bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x155bcc: 0x0  nop
    ctx->pc = 0x155bccu;
    // NOP
label_155bd0:
    // 0x155bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155bd4: 0x0  nop
    ctx->pc = 0x155bd4u;
    // NOP
label_155bd8:
    // 0x155bd8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x155bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x155bdc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x155bdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155be0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x155BE0u;
    {
        const bool branch_taken_0x155be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155be0) {
            ctx->pc = 0x155B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155b70;
        }
    }
    ctx->pc = 0x155BE8u;
    // 0x155be8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x155be8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155bf4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x155bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x155BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C00u;
}
