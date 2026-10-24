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

// Function: Em18_lv_set
// Address: 0x2e2520 - 0x2e25d8
void Em18_lv_set_0x2e2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_lv_set_0x2e2520");
#endif

    ctx->pc = 0x2e2520u;

    // 0x2e2520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2528: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e2528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2e252c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2530: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e2530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e2534: 0xa20000db  sb          $zero, 0xDB($s0)
    ctx->pc = 0x2e2534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2538: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e2538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e253c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e253cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e2540: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e2544: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2544u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2548: 0x286102bd  slti        $at, $v1, 0x2BD
    ctx->pc = 0x2e2548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)701) ? 1 : 0);
    // 0x2e254c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E254Cu;
    {
        const bool branch_taken_0x2e254c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e254c) {
            ctx->pc = 0x2E255Cu;
            goto label_2e255c;
        }
    }
    ctx->pc = 0x2E2554u;
    // 0x2e2554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2558: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2e2558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
label_2e255c:
    // 0x2e255c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2560: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e2560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e2564: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e2568: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e256c: 0x286101f5  slti        $at, $v1, 0x1F5
    ctx->pc = 0x2e256cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x2e2570: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2570u;
    {
        const bool branch_taken_0x2e2570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2570) {
            ctx->pc = 0x2E2580u;
            goto label_2e2580;
        }
    }
    ctx->pc = 0x2E2578u;
    // 0x2e2578: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e257c: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2e257cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
label_2e2580:
    // 0x2e2580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e2580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2584: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e2584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e2588: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e258c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e258cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2590: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x2e2590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x2e2594: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2594u;
    {
        const bool branch_taken_0x2e2594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2594) {
            ctx->pc = 0x2E25A4u;
            goto label_2e25a4;
        }
    }
    ctx->pc = 0x2E259Cu;
    // 0x2e259c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e25a0: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2e25a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
label_2e25a4:
    // 0x2e25a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2e25a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e25a8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e25a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e25ac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e25acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e25b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e25b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e25b4: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2e25b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2e25b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E25B8u;
    {
        const bool branch_taken_0x2e25b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25b8) {
            ctx->pc = 0x2E25C8u;
            goto label_2e25c8;
        }
    }
    ctx->pc = 0x2E25C0u;
    // 0x2e25c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e25c4: 0xa20300db  sb          $v1, 0xDB($s0)
    ctx->pc = 0x2e25c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 3));
label_2e25c8:
    // 0x2e25c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e25c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e25cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e25ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e25d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E25D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E25D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E25D8u;
}
