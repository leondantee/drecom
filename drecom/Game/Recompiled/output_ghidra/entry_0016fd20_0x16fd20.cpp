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

// Function: entry_0016fd20
// Address: 0x16fd20 - 0x16fd94
void entry_0016fd20_0x16fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fd20_0x16fd20");
#endif

    ctx->pc = 0x16fd20u;

    // 0x16fd20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16fd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16fd24: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fd28: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x16fd2c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x16fd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16fd30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16fd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16fd34: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x16fd34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16fd38: 0x1460ff2c  bnez        $v1, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x16FD38u;
    {
        const bool branch_taken_0x16fd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fd38) {
            ctx->pc = 0x16F9ECu;
            return;
        }
    }
    ctx->pc = 0x16FD40u;
    // 0x16fd40: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fd44: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x16fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x16fd48: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x16fd48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16fd4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16fd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16fd50: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16fd54: 0x27c40a68  addiu       $a0, $fp, 0xA68
    ctx->pc = 0x16fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2664));
    // 0x16fd58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fd5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16fd60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16fd64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16fd64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16fd68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16fd68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16fd6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16fd6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16fd70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16fd70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16fd74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16fd74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16fd78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16fd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fd7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16fd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fd80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fd84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16fd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fd88: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD94u;
}
