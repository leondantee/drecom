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

// Function: SdrBgmMasterVol
// Address: 0x3391f0 - 0x3392c0
void SdrBgmMasterVol_0x3391f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrBgmMasterVol_0x3391f0");
#endif

    switch (ctx->pc) {
        case 0x339230u: goto label_339230;
        default: break;
    }

    ctx->pc = 0x3391f0u;

    // 0x3391f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3391f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3391f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3391f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3391f8: 0xa7a40018  sh          $a0, 0x18($sp)
    ctx->pc = 0x3391f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x3391fc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3391fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339200: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339200u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339204: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339208: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33920c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339218: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339218u;
    {
        const bool branch_taken_0x339218 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339218) {
            ctx->pc = 0x33923Cu;
            goto label_33923c;
        }
    }
    ctx->pc = 0x339220u;
    // 0x339220: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339224: 0x24442410  addiu       $a0, $v0, 0x2410
    ctx->pc = 0x339224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9232));
    // 0x339228: 0xc046760  jal         func_119D80
    ctx->pc = 0x339228u;
    SET_GPR_U32(ctx, 31, 0x339230u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339230u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339230u) { return; }
    ctx->pc = 0x339230u;
label_339230:
    // 0x339230: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339234: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x339234u;
    {
        const bool branch_taken_0x339234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339234) {
            ctx->pc = 0x3392B0u;
            goto label_3392b0;
        }
    }
    ctx->pc = 0x33923Cu;
label_33923c:
    // 0x33923c: 0x97a20018  lhu         $v0, 0x18($sp)
    ctx->pc = 0x33923cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339240: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339244: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x339244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339248: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x33924c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x33924cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339250: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x339250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x339254: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339258: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33925c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33925cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339260: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339264: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339268: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33926c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339270: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339274: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339278: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33927c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339280: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339284: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339288: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33928c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x33928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339290: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339290u;
    {
        const bool branch_taken_0x339290 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339290) {
            ctx->pc = 0x3392A4u;
            goto label_3392a4;
        }
    }
    ctx->pc = 0x339298u;
    // 0x339298: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339298u;
    {
        const bool branch_taken_0x339298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339298) {
            ctx->pc = 0x3392A4u;
            goto label_3392a4;
        }
    }
    ctx->pc = 0x3392A0u;
    // 0x3392a0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3392a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_3392a4:
    // 0x3392a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3392a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3392a8: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x3392a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3392ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3392acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3392b0:
    // 0x3392b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3392b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3392b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3392b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3392b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3392B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3392B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3392C0u;
}
