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

// Function: entry_001824c0
// Address: 0x1824c0 - 0x182568
void entry_001824c0_0x1824c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001824c0_0x1824c0");
#endif

    switch (ctx->pc) {
        case 0x18253cu: goto label_18253c;
        case 0x182548u: goto label_182548;
        default: break;
    }

    ctx->pc = 0x1824c0u;

    // 0x1824c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1824c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1824c4: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1824c4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1824c8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1824c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1824cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1824ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1824d0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1824d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1824d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1824d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1824d8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1824d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1824dc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1824dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1824e0: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1824e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1824e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1824e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1824e8: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1824e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1824ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1824ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1824f0: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1824f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1824f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1824f8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1824f8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1824fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1824fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182500: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182504: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18250c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18250cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182510: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182514: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182518: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x182518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18251c: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x18251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x182520: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x182520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x182524: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x182528: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18252c: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x18252cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x182530: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x182530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182534: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x182534u;
    SET_GPR_U32(ctx, 31, 0x18253Cu);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x182534u, 0x18253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18253Cu;
label_18253c:
    // 0x18253c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x18253cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182540: 0xc06095c  jal         func_182570
    ctx->pc = 0x182540u;
    SET_GPR_U32(ctx, 31, 0x182548u);
    ctx->pc = 0x182570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182570u, 0x182540u, 0x182548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182548u;
label_182548:
    // 0x182548: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x182548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x18254c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x18254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182550: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x182550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x182554: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x182554u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18255c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182560: 0x3e00008  jr          $ra
    ctx->pc = 0x182560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182568u;
}
