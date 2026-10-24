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

// Function: Mk_index_gif_tag
// Address: 0x1dfcf0 - 0x1dfd74
void Mk_index_gif_tag_0x1dfcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_index_gif_tag_0x1dfcf0");
#endif

    ctx->pc = 0x1dfcf0u;

    // 0x1dfcf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfcf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dfcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dfcf8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1dfcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1dfcfc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfd00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dfd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dfd04: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dfd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dfd08: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1dfd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1dfd0c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1dfd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1dfd10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dfd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dfd14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dfd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dfd18: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1dfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1dfd1c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1dfd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1dfd20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dfd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dfd24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dfd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dfd28: 0x3c029000  lui         $v0, 0x9000
    ctx->pc = 0x1dfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36864 << 16));
    // 0x1dfd2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dfd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dfd30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dfd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dfd34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd38: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dfd38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dfd3c: 0x3c021251  lui         $v0, 0x1251
    ctx->pc = 0x1dfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4689 << 16));
    // 0x1dfd40: 0x34432512  ori         $v1, $v0, 0x2512
    ctx->pc = 0x1dfd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9490);
    // 0x1dfd44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd48: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1dfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dfd4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dfd50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd54: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dfd54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dfd58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfd60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dfd64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dfd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD74u;
}
