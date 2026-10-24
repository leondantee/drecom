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

// Function: R10f_event0
// Address: 0x27b0d0 - 0x27b158
void R10f_event0_0x27b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_event0_0x27b0d0");
#endif

    switch (ctx->pc) {
        case 0x27b13cu: goto label_27b13c;
        case 0x27b144u: goto label_27b144;
        default: break;
    }

    ctx->pc = 0x27b0d0u;

    // 0x27b0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b0d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27b0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b0dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27b0e0: 0x24501ac0  addiu       $s0, $v0, 0x1AC0
    ctx->pc = 0x27b0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27b0e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b0e8: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27b0ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27b0f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27b0f4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27B0F4u;
    {
        const bool branch_taken_0x27b0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b0f4) {
            ctx->pc = 0x27B13Cu;
            goto label_27b13c;
        }
    }
    ctx->pc = 0x27B0FCu;
    // 0x27b0fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b104: 0xa022d4b1  sb          $v0, -0x2B4F($at)
    ctx->pc = 0x27b104u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x27b108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b10c: 0xac20d4bc  sw          $zero, -0x2B44($at)
    ctx->pc = 0x27b10cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD4BCu, _value); } while (0);
    // 0x27b110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b114: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27b114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27b118: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27b118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27b11c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b120: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b124: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x27b124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x27b128: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x27b128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27b12c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27b130: 0x2445ae20  addiu       $a1, $v0, -0x51E0
    ctx->pc = 0x27b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946336));
    // 0x27b134: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27B134u;
    SET_GPR_U32(ctx, 31, 0x27B13Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27B134u, 0x27B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B13Cu;
label_27b13c:
    // 0x27b13c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27B13Cu;
    SET_GPR_U32(ctx, 31, 0x27B144u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27B13Cu, 0x27B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B144u;
label_27b144:
    // 0x27b144: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27b144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b14c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27b14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27b150: 0x3e00008  jr          $ra
    ctx->pc = 0x27B150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B158u;
}
