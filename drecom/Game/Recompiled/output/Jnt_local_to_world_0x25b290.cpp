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

// Function: Jnt_local_to_world
// Address: 0x25b290 - 0x25b320
void Jnt_local_to_world_0x25b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Jnt_local_to_world_0x25b290");
#endif

    switch (ctx->pc) {
        case 0x25b2e0u: goto label_25b2e0;
        default: break;
    }

    ctx->pc = 0x25b290u;

    // 0x25b290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b294: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x25b294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x25b298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25b298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25b29c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x25b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x25b2a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b2a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25b2a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b2ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b2b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b2b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b2b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25b2bc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x25b2c0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b2c4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b2c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25b2cc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x25b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x25b2d0: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x25b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x25b2d4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x25b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b2d8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25B2D8u;
    SET_GPR_U32(ctx, 31, 0x25B2E0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25B2E0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B2E0u) { return; }
    ctx->pc = 0x25B2E0u;
label_25b2e0:
    // 0x25b2e0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b2e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25b2e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25b2ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b2f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25b2f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25b2f8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25b2fc: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25b300: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25b300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b304: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x25b304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x25b308: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x25b308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x25b30c: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x25b30cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25b310: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25b310u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b314: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25b314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b318: 0x3e00008  jr          $ra
    ctx->pc = 0x25B318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B320u;
}
