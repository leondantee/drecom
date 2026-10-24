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

// Function: Md_parts_env_zbuff
// Address: 0x258f40 - 0x258f98
void Md_parts_env_zbuff_0x258f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_zbuff_0x258f40");
#endif

    ctx->pc = 0x258f40u;

    // 0x258f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258f44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258f48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x258f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x258f4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x258f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258f50: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x258f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x258f54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x258f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258f58: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258f5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x258f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x258f60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258f64: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x258f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x258f68: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x258f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x258f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258f70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x258f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x258f74: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x258f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258f78: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x258f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x258f7c: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x258f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x258f80: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x258f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x258f84: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x258f84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x258f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258f8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258f90: 0x3e00008  jr          $ra
    ctx->pc = 0x258F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258F98u;
}
