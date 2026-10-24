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

// Function: Em0a_eye_r0_time_bomb
// Address: 0x369fa0 - 0x36a098
void Em0a_eye_r0_time_bomb_0x369fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_time_bomb_0x369fa0");
#endif

    ctx->pc = 0x369fa0u;

    // 0x369fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369fa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369fb0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x369fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x369fb4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x369fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x369fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x369fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x369fbc: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x369fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x369fc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x369fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x369fc4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x369fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369fc8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x369fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369fcc: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x369fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x369fd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369fd4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x369fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369fd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x369fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369fdc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x369fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x369fe0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x369fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x369fe4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x369fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x369fe8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x369fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x369fec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x369fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x369ff0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x369ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x369ff4: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x369ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369ff8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x369ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x369ffc: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x369ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x36a000: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36a000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36a004: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x36a004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a008: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36a008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36a00c: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x36a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x36a010: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36a014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36a018: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x36a018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x36a01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36a020: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x36a020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36a024: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x36a024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a028: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36a02c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x36a02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36a030: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a034: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x36a034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x36a038: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36a038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36a03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a040: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x36A040u;
    {
        const bool branch_taken_0x36a040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a040) {
            ctx->pc = 0x36A080u;
            goto label_36a080;
        }
    }
    ctx->pc = 0x36A048u;
    // 0x36a048: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A048u;
    {
        const bool branch_taken_0x36a048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a048) {
            ctx->pc = 0x36A058u;
            goto label_36a058;
        }
    }
    ctx->pc = 0x36A050u;
    // 0x36a050: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36A050u;
    {
        const bool branch_taken_0x36a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a050) {
            ctx->pc = 0x36A080u;
            goto label_36a080;
        }
    }
    ctx->pc = 0x36A058u;
label_36a058:
    // 0x36a058: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x36a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x36a05c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a060: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x36a060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a064: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x36a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x36a068: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a06c: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x36a06cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x36a070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36a070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a074: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x36a074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x36a078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a07c: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x36a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
label_36a080:
    // 0x36a080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a08c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36a08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36a090: 0x3e00008  jr          $ra
    ctx->pc = 0x36A090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A098u;
}
