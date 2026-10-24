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

// Function: Md_obj_env_def_set
// Address: 0x256eb0 - 0x256f0c
void Md_obj_env_def_set_0x256eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_obj_env_def_set_0x256eb0");
#endif

    ctx->pc = 0x256eb0u;

    // 0x256eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x256eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x256eb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x256eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x256eb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x256eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x256ebc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x256ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x256ec0: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x256ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x256ec4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x256ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x256ec8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x256ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256ecc: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x256eccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x256ed0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x256ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x256ed4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x256ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256ed8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x256ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x256edc: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x256edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x256ee0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x256ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x256ee4: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x256ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x256ee8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x256ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x256eec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x256eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256ef0: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x256ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x256ef4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x256ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x256ef8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x256ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256efc: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x256efcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x256f00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x256f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x256f04: 0x3e00008  jr          $ra
    ctx->pc = 0x256F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256F0Cu;
}
