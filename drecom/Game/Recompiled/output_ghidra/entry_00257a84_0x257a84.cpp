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

// Function: entry_00257a84
// Address: 0x257a84 - 0x257aec
void entry_00257a84_0x257a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257a84_0x257a84");
#endif

    ctx->pc = 0x257a84u;

    // 0x257a84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a88: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a8c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x257a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x257a90: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x257a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257a94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257a9c: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x257a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x257aa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257aa4: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x257aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x257aa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257aac: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257aacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257ab0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x257ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x257ab4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x257ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257abc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257ac0: 0x8c640138  lw          $a0, 0x138($v1)
    ctx->pc = 0x257ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x257ac4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257ac8: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x257ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
    // 0x257acc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x257accu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257ad0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x257ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257ae0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x257ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x257AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257AECu;
}
