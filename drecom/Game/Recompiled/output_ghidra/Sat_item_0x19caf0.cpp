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

// Function: Sat_item
// Address: 0x19caf0 - 0x19cb54
void Sat_item_0x19caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_item_0x19caf0");
#endif

    ctx->pc = 0x19caf0u;

    // 0x19caf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19caf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19caf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19caf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19cafc: 0x8fb00018  lw          $s0, 0x18($sp)
    ctx->pc = 0x19cafcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19cb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb04: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x19cb08: 0xa022c775  sb          $v0, -0x388B($at)
    ctx->pc = 0x19cb08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C775u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62C775u, _value); } while (0);
    // 0x19cb0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cb10: 0x8c22d388  lw          $v0, -0x2C78($at)
    ctx->pc = 0x19cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CD388u));
    // 0x19cb14: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x19cb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x19cb18: 0xac22c778  sw          $v0, -0x3888($at)
    ctx->pc = 0x19cb18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62C778u, _value); } while (0);
    // 0x19cb1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cb20: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x19cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x19cb24: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x19cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x19cb28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19cb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19cb2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cb30: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x19cb30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x19cb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cb3c: 0xa022fe13  sb          $v0, -0x1ED($at)
    ctx->pc = 0x19cb3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFE13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CFE13u, _value); } while (0);
    // 0x19cb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19cb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CB54u;
}
