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

// Function: e2d_id2e_type00
// Address: 0x2b4910 - 0x2b49b0
void e2d_id2e_type00_0x2b4910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2e_type00_0x2b4910");
#endif

    ctx->pc = 0x2b4910u;

    // 0x2b4910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4914: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4918: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b491c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b491cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4920: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b4920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4924: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4928: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b492c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b492cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4930: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4938: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b4938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b493c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b493cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b4940: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4944: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4948: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b494c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b494cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4954: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b4954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b4958: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b4958u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b495c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b4960: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4964: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b4964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b4968: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b496c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b4970: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2b4970u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b4974: 0x0  nop
    ctx->pc = 0x2b4974u;
    // NOP
    // 0x2b4978: 0x0  nop
    ctx->pc = 0x2b4978u;
    // NOP
    // 0x2b497c: 0x1810  mfhi        $v1
    ctx->pc = 0x2b497cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b4980: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4984: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4988: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b4988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b498c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4990: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4994: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b4994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b499c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b49a0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b49a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b49a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b49a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b49a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B49A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B49A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B49B0u;
}
