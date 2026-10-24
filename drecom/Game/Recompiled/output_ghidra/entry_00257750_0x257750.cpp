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

// Function: entry_00257750
// Address: 0x257750 - 0x2577b8
void entry_00257750_0x257750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257750_0x257750");
#endif

    ctx->pc = 0x257750u;

    // 0x257750: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257754: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257758: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25775c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x25775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257760: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257764: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257768: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25776c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25776Cu;
    {
        const bool branch_taken_0x25776c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25776c) {
            ctx->pc = 0x2576F4u;
            return;
        }
    }
    ctx->pc = 0x257774u;
    // 0x257774: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x257774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257778: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25777c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25777cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257780: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x257780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257788: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x257788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x25778c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x25778cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257790: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x257790u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257794: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x257794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257798: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x257798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25779c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25779cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2577a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2577a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2577a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2577a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2577a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2577a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2577ac: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2577acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2577b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2577B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2577B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2577B8u;
}
