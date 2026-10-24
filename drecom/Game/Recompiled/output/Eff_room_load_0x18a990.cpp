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

// Function: Eff_room_load
// Address: 0x18a990 - 0x18aa7c
void Eff_room_load_0x18a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_room_load_0x18a990");
#endif

    switch (ctx->pc) {
        case 0x18aa28u: goto label_18aa28;
        case 0x18aa58u: goto label_18aa58;
        default: break;
    }

    ctx->pc = 0x18a990u;

    // 0x18a990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18a994: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x18a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x18a998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a99c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x18a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x18a9a0: 0x246372c0  addiu       $v1, $v1, 0x72C0
    ctx->pc = 0x18a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29376));
    // 0x18a9a4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x18a9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18a9a8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x18a9a8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x3872C0u));
    // 0x18a9ac: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x18a9acu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3872D0u));
    // 0x18a9b0: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x18a9b0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3872E0u));
    // 0x18a9b4: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x18a9b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3872F0u));
    // 0x18a9b8: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x18a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x18a9bc: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x18a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x18a9c0: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x18a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x18a9c4: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x18a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x18a9c8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a9cc: 0x2470a630  addiu       $s0, $v1, -0x59D0
    ctx->pc = 0x18a9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x18a9d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a9d4: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x18a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x18a9d8: 0x2464007f  addiu       $a0, $v1, 0x7F
    ctx->pc = 0x18a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x18a9dc: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x18a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18a9e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18a9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18a9e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a9e8: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x18a9e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x18a9ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a9f0: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x18a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x18a9f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a9f8: 0xac23ac50  sw          $v1, -0x53B0($at)
    ctx->pc = 0x18a9f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    // 0x18a9fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa00: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x18aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x18aa04: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x18aa08: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AA08u;
    {
        const bool branch_taken_0x18aa08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa08) {
            ctx->pc = 0x18AA28u;
            goto label_18aa28;
        }
    }
    ctx->pc = 0x18AA10u;
    // 0x18aa10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa14: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x18aa18: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x18aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18aa1c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18aa20: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x18AA20u;
    SET_GPR_U32(ctx, 31, 0x18AA28u);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x18AA20u, 0x18AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA28u;
label_18aa28:
    // 0x18aa28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa2c: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x18aa30: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x18aa34: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AA34u;
    {
        const bool branch_taken_0x18aa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa34) {
            ctx->pc = 0x18AA58u;
            goto label_18aa58;
        }
    }
    ctx->pc = 0x18AA3Cu;
    // 0x18aa3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa40: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x18aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x18aa44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x18aa44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18aa48: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x18aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18aa4c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x18aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18aa50: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18AA50u;
    SET_GPR_U32(ctx, 31, 0x18AA58u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18AA50u, 0x18AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA58u;
label_18aa58:
    // 0x18aa58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa5c: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18aa60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa64: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x18aa64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x18aa68: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x18aa68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aa6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18aa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aa70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x18AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AA7Cu;
}
