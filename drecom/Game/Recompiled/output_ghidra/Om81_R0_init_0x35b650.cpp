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

// Function: Om81_R0_init
// Address: 0x35b650 - 0x35b758
void Om81_R0_init_0x35b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_R0_init_0x35b650");
#endif

    switch (ctx->pc) {
        case 0x35b674u: goto label_35b674;
        case 0x35b6dcu: goto label_35b6dc;
        default: break;
    }

    ctx->pc = 0x35b650u;

    // 0x35b650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35b654: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35b654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35b658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35b660: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x35b660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x35b664: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b668: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x35b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x35b66c: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x35B66Cu;
    SET_GPR_U32(ctx, 31, 0x35B674u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x35B66Cu, 0x35B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B674u;
label_35b674:
    // 0x35b674: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b678: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x35b678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x35b67c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x35b67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x35b680: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x35b680u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x35b684: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35b684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35b688: 0x2464a9c0  addiu       $a0, $v1, -0x5640
    ctx->pc = 0x35b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945216));
    // 0x35b68c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b690: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x35b690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x35b694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b698: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b69c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x35b69cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x35b6a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x35b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x35b6a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b6a8: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x35b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x35b6ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b6b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b6b4: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x35b6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b6b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b6bc: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x35b6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b6c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35b6c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35b6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b6cc: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x35b6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x35b6d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35b6d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b6d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35B6D4u;
    {
        const bool branch_taken_0x35b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b6d4) {
            ctx->pc = 0x35B708u;
            goto label_35b708;
        }
    }
    ctx->pc = 0x35B6DCu;
label_35b6dc:
    // 0x35b6dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x35b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b6e0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x35b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x35b6e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35b6e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35b6ec: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x35b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x35b6f0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x35b6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b6f4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x35b6f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35b6f8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x35b6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x35b6fc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x35b6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35b700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35b704: 0x0  nop
    ctx->pc = 0x35b704u;
    // NOP
label_35b708:
    // 0x35b708: 0x2e030019  sltiu       $v1, $s0, 0x19
    ctx->pc = 0x35b708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35b70c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x35B70Cu;
    {
        const bool branch_taken_0x35b70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b70c) {
            ctx->pc = 0x35B6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b6dc;
        }
    }
    ctx->pc = 0x35B714u;
    // 0x35b714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b718: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b71c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b724: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b728: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b72c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b734: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b73c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b740: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35b740u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b74c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35b74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35b750: 0x3e00008  jr          $ra
    ctx->pc = 0x35B750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B758u;
}
