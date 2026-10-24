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

// Function: e2d_id2e_type02
// Address: 0x2b4a50 - 0x2b4ae4
void e2d_id2e_type02_0x2b4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2e_type02_0x2b4a50");
#endif

    ctx->pc = 0x2b4a50u;

    // 0x2b4a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4a54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4a58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b4a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b4a5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4a60: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b4a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4a64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4a68: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4a6c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4a70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4a74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4a78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b4a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4a7c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b4a80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4a84: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4a88: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4a8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4a94: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b4a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b4a98: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b4a9c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b4aa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4aa4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b4aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b4aa8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4aac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b4ab0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2b4ab0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b4ab4: 0x0  nop
    ctx->pc = 0x2b4ab4u;
    // NOP
    // 0x2b4ab8: 0x0  nop
    ctx->pc = 0x2b4ab8u;
    // NOP
    // 0x2b4abc: 0x1810  mfhi        $v1
    ctx->pc = 0x2b4abcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b4ac0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4ac4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4ac8: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b4ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4acc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4ad0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4ad4: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b4ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4ad8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4adc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4AE4u;
}
