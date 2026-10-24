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

// Function: e2d_id93_type00
// Address: 0x2be750 - 0x2be7bc
void e2d_id93_type00_0x2be750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id93_type00_0x2be750");
#endif

    ctx->pc = 0x2be750u;

    // 0x2be750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be754: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2be754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2be758: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be75c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be75cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be760: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be764: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be76c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be770: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2be770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2be774: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be778: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be778u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be77c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be780: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be788: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2be788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2be78c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2be78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2be790: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2be790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2be794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be798: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2be798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2be79c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be7a0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be7a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2be7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be7a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be7ac: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2be7acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be7b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2be7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE7BCu;
}
