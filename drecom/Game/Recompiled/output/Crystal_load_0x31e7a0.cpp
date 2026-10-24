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

// Function: Crystal_load
// Address: 0x31e7a0 - 0x31e824
void Crystal_load_0x31e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Crystal_load_0x31e7a0");
#endif

    switch (ctx->pc) {
        case 0x31e7c8u: goto label_31e7c8;
        case 0x31e7d8u: goto label_31e7d8;
        default: break;
    }

    ctx->pc = 0x31e7a0u;

    // 0x31e7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31e7a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31e7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31e7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e7ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x31e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x31e7b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31e7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e7b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e7b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31e7bc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e7c0: 0xa422af66  sh          $v0, -0x509A($at)
    ctx->pc = 0x31e7c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF66u, _value); } while (0);
    // 0x31e7c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31e7c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31e7c8:
    // 0x31e7c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x31e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31e7cc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x31e7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e7d0: 0xc099794  jal         func_265E50
    ctx->pc = 0x31E7D0u;
    SET_GPR_U32(ctx, 31, 0x31E7D8u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x31E7D0u, 0x31E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7D8u;
label_31e7d8:
    // 0x31e7d8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e7dc: 0xac22af6c  sw          $v0, -0x5094($at)
    ctx->pc = 0x31e7dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF6Cu, _value); } while (0);
    // 0x31e7e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31e7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31e7e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e7e8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x31e7e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31e7ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x31E7ECu;
    {
        const bool branch_taken_0x31e7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e7ec) {
            ctx->pc = 0x31E7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e7c8;
        }
    }
    ctx->pc = 0x31E7F4u;
    // 0x31e7f4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e7f8: 0x8c24af6c  lw          $a0, -0x5094($at)
    ctx->pc = 0x31e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31e7fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e800: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31e804: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x31e804u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31e808: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e80c: 0xac23af6c  sw          $v1, -0x5094($at)
    ctx->pc = 0x31e80cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF6Cu, _value); } while (0);
    // 0x31e810: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31e810u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e818: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31e81c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E824u;
}
