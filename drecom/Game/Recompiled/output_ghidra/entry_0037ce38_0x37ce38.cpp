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

// Function: entry_0037ce38
// Address: 0x37ce38 - 0x37ce9c
void entry_0037ce38_0x37ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ce38_0x37ce38");
#endif

    ctx->pc = 0x37ce38u;

    // 0x37ce38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ce3c: 0x8c65128c  lw          $a1, 0x128C($v1)
    ctx->pc = 0x37ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x37ce40: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x37ce44: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce48: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x37ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37ce4c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ce54: 0x8c65128c  lw          $a1, 0x128C($v1)
    ctx->pc = 0x37ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x37ce58: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x37ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37ce5c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce60: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x37ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37ce64: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce68: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x37ce6c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce70: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37ce70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x37ce74: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce78: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x37ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37ce7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce80: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37ce80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x37ce84: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37ce88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ce8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37ce8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ce90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37ce94: 0x3e00008  jr          $ra
    ctx->pc = 0x37CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CE9Cu;
}
