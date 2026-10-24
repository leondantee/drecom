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

// Function: Coat_md_set
// Address: 0x144440 - 0x1444c4
void Coat_md_set_0x144440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Coat_md_set_0x144440");
#endif

    switch (ctx->pc) {
        case 0x14446cu: goto label_14446c;
        case 0x14447cu: goto label_14447c;
        case 0x14448cu: goto label_14448c;
        case 0x1444a0u: goto label_1444a0;
        case 0x1444b0u: goto label_1444b0;
        default: break;
    }

    ctx->pc = 0x144440u;

    // 0x144440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144444: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x144444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x144448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14444c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x14444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x144450: 0x2450a530  addiu       $s0, $v0, -0x5AD0
    ctx->pc = 0x144450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x144454: 0x8e021320  lw          $v0, 0x1320($s0)
    ctx->pc = 0x144454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB850u));
    // 0x144458: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x144458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FA570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FA570u, _value); } while (0);
    // 0x14445c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x14445cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5FA570u));
    // 0x144460: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x144460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144464: 0xc0951c0  jal         func_254700
    ctx->pc = 0x144464u;
    SET_GPR_U32(ctx, 31, 0x14446Cu);
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x144464u, 0x14446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14446Cu;
label_14446c:
    // 0x14446c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x14446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x144470: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x144470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144474: 0xc096558  jal         func_259560
    ctx->pc = 0x144474u;
    SET_GPR_U32(ctx, 31, 0x14447Cu);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x144474u, 0x14447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14447Cu;
label_14447c:
    // 0x14447c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14447cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144480: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x144480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x144484: 0xc05be64  jal         func_16F990
    ctx->pc = 0x144484u;
    SET_GPR_U32(ctx, 31, 0x14448Cu);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x144484u, 0x14448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14448Cu;
label_14448c:
    // 0x14448c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x14448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x144490: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x144490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x144494: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x144494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x144498: 0xc095384  jal         func_254E10
    ctx->pc = 0x144498u;
    SET_GPR_U32(ctx, 31, 0x1444A0u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x144498u, 0x1444A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444A0u;
label_1444a0:
    // 0x1444a0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1444a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1444a4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1444a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1444a8: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x1444A8u;
    SET_GPR_U32(ctx, 31, 0x1444B0u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x1444A8u, 0x1444B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444B0u;
label_1444b0:
    // 0x1444b0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1444b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1444b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1444b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1444b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1444b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1444bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1444BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1444BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1444C4u;
}
