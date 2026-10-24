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

// Function: Scr_first_env_def_set
// Address: 0x13cfe0 - 0x13d034
void Scr_first_env_def_set_0x13cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_first_env_def_set_0x13cfe0");
#endif

    ctx->pc = 0x13cfe0u;

    // 0x13cfe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cfe4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x13cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x13cfe8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13cfec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13cfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13cff0: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x13cff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13cff4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13cff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13cff8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cffc: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13d000: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x13d000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13d004: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d008: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x13d008u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x13d00c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13d00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13d010: 0xdc24cc80  ld          $a0, -0x3380($at)
    ctx->pc = 0x13d010u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47CC80u));
    // 0x13d014: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13d014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d018: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x13d018u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x13d01c: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x13d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x13d020: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d024: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x13d024u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x13d028: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13d02c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D034u;
}
