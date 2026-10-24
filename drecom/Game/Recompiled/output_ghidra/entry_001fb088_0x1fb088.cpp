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

// Function: entry_001fb088
// Address: 0x1fb088 - 0x1fb0d8
void entry_001fb088_0x1fb088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb088_0x1fb088");
#endif

    ctx->pc = 0x1fb088u;

    // 0x1fb088: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fb088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fb08c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fb08cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb090: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb098: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fb098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fb09c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FB09Cu;
    {
        const bool branch_taken_0x1fb09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb09c) {
            ctx->pc = 0x1FB024u;
            return;
        }
    }
    ctx->pc = 0x1FB0A4u;
    // 0x1fb0a4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1fb0a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fb0a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1fb0a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fb0ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fb0acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fb0b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fb0b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb0b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fb0b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb0b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fb0b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb0bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fb0bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb0c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb0cc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1fb0ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1fb0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0D8u;
}
