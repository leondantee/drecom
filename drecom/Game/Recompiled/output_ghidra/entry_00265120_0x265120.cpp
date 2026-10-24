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

// Function: entry_00265120
// Address: 0x265120 - 0x265184
void entry_00265120_0x265120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265120_0x265120");
#endif

    ctx->pc = 0x265120u;

    // 0x265120: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x265120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x265124: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x265124u;
    {
        const bool branch_taken_0x265124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265124) {
            ctx->pc = 0x265070u;
            return;
        }
    }
    ctx->pc = 0x26512Cu;
    // 0x26512c: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x26512cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x265130: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265134: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x265134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x265138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26513c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265140: 0xa023e653  sb          $v1, -0x19AD($at)
    ctx->pc = 0x265140u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E653u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E653u, _value); } while (0);
    // 0x265144: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265148: 0x9024e650  lbu         $a0, -0x19B0($at)
    ctx->pc = 0x265148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x61E650u));
    // 0x26514c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26514cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265150: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x265150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x265154: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x265154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265158: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26515c: 0xa023e650  sb          $v1, -0x19B0($at)
    ctx->pc = 0x26515cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    // 0x265160: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x265160u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265164: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x265164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26516c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26516cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265178: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x265178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26517c: 0x3e00008  jr          $ra
    ctx->pc = 0x26517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26517Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265184u;
}
