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

// Function: e2d_id2e_type03
// Address: 0x2b4af0 - 0x2b4b84
void e2d_id2e_type03_0x2b4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2e_type03_0x2b4af0");
#endif

    ctx->pc = 0x2b4af0u;

    // 0x2b4af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4af4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4af8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b4afc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4b00: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b4b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4b04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4b08: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4b08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4b0c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4b10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4b14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4b18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b4b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4b1c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b4b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b4b20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4b24: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4b28: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4b2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4b30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4b34: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b4b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b4b38: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b4b3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b4b40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4b44: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b4b44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b4b48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4b4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b4b50: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2b4b50u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b4b54: 0x0  nop
    ctx->pc = 0x2b4b54u;
    // NOP
    // 0x2b4b58: 0x0  nop
    ctx->pc = 0x2b4b58u;
    // NOP
    // 0x2b4b5c: 0x1810  mfhi        $v1
    ctx->pc = 0x2b4b5cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b4b60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4b64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4b68: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b4b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4b70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4b74: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b4b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4b78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4B84u;
}
