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

// Function: Em0a_eye_r0_land_wait
// Address: 0x368f20 - 0x36900c
void Em0a_eye_r0_land_wait_0x368f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_land_wait_0x368f20");
#endif

    switch (ctx->pc) {
        case 0x369008u: goto label_369008;
        default: break;
    }

    ctx->pc = 0x368f20u;

    // 0x368f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x368f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x368f24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x368f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x368f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368f30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x368f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x368f34: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x368f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x368f38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x368f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368f3c: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368f40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368f44: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368f48: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x368f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368f4c: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x368f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x368f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368f54: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x368f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368f58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x368f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368f5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x368f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x368f60: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x368f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x368f64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x368f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x368f68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x368f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x368f6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368f70: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x368f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x368f74: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x368f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368f78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x368f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368f7c: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368f80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368f84: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368f88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x368f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368f8c: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x368f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x368f90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368f94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368f98: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x368f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x368f9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368fa0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368fa4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x368fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368fa8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x368fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x368fac: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x368facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368fb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x368fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368fb4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x368fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x368fb8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x368fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368fc0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x368FC0u;
    {
        const bool branch_taken_0x368fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x368fc0) {
            ctx->pc = 0x368FF4u;
            goto label_368ff4;
        }
    }
    ctx->pc = 0x368FC8u;
    // 0x368fc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368FC8u;
    {
        const bool branch_taken_0x368fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368fc8) {
            ctx->pc = 0x368FD8u;
            goto label_368fd8;
        }
    }
    ctx->pc = 0x368FD0u;
    // 0x368fd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x368FD0u;
    {
        const bool branch_taken_0x368fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368fd0) {
            ctx->pc = 0x368FF4u;
            goto label_368ff4;
        }
    }
    ctx->pc = 0x368FD8u;
label_368fd8:
    // 0x368fd8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x368fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x368fdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x368fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368fe0: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x368fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x368fe4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x368fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368fe8: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x368fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x368fec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x368fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x368ff0: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x368ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
label_368ff4:
    // 0x368ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369000: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x369000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x369004: 0x3e00008  jr          $ra
label_369008:
    if (ctx->pc == 0x369008u) {
        ctx->pc = 0x36900Cu;
        goto label_fallthrough_0x369004;
    }
    ctx->pc = 0x369004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x369004:
    ctx->pc = 0x36900Cu;
}
