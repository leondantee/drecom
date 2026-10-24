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

// Function: SdrSeMasterVol
// Address: 0x339120 - 0x3391f0
void SdrSeMasterVol_0x339120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrSeMasterVol_0x339120");
#endif

    switch (ctx->pc) {
        case 0x339160u: goto label_339160;
        default: break;
    }

    ctx->pc = 0x339120u;

    // 0x339120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339124: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339128: 0xa7a40018  sh          $a0, 0x18($sp)
    ctx->pc = 0x339128u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x33912c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339130: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339130u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339134: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339138: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33913c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339148: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339148u;
    {
        const bool branch_taken_0x339148 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339148) {
            ctx->pc = 0x33916Cu;
            goto label_33916c;
        }
    }
    ctx->pc = 0x339150u;
    // 0x339150: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339154: 0x244423e0  addiu       $a0, $v0, 0x23E0
    ctx->pc = 0x339154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9184));
    // 0x339158: 0xc046760  jal         func_119D80
    ctx->pc = 0x339158u;
    SET_GPR_U32(ctx, 31, 0x339160u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339160u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339160u) { return; }
    ctx->pc = 0x339160u;
label_339160:
    // 0x339160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339164: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x339164u;
    {
        const bool branch_taken_0x339164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339164) {
            ctx->pc = 0x3391E0u;
            goto label_3391e0;
        }
    }
    ctx->pc = 0x33916Cu;
label_33916c:
    // 0x33916c: 0x97a20018  lhu         $v0, 0x18($sp)
    ctx->pc = 0x33916cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339170: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339174: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x339174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339178: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x33917c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x33917cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339180: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x339180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x339184: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339188: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33918c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33918cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339190: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339194: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339198: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33919c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3391a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3391a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3391a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3391a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3391a8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3391ac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3391acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3391b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3391b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3391b4: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3391b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3391b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3391b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3391bc: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3391bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3391c0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3391C0u;
    {
        const bool branch_taken_0x3391c0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3391c0) {
            ctx->pc = 0x3391D4u;
            goto label_3391d4;
        }
    }
    ctx->pc = 0x3391C8u;
    // 0x3391c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3391C8u;
    {
        const bool branch_taken_0x3391c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3391c8) {
            ctx->pc = 0x3391D4u;
            goto label_3391d4;
        }
    }
    ctx->pc = 0x3391D0u;
    // 0x3391d0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3391d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_3391d4:
    // 0x3391d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3391d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3391d8: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x3391d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3391dc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3391dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3391e0:
    // 0x3391e0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3391e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3391e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3391e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3391e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3391E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3391E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3391F0u;
}
