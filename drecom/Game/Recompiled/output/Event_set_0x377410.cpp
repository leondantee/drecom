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

// Function: Event_set
// Address: 0x377410 - 0x3774a4
void Event_set_0x377410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_set_0x377410");
#endif

    switch (ctx->pc) {
        case 0x377478u: goto label_377478;
        case 0x37748cu: goto label_37748c;
        default: break;
    }

    ctx->pc = 0x377410u;

    // 0x377410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377414: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x377414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x377418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37741c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377420: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x377420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x377424: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x377424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x377428: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x377428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x37742c: 0x8e221a14  lw          $v0, 0x1A14($s1)
    ctx->pc = 0x37742cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x377430: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x377430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x377434: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x377434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x377438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x377438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37743c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x37743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x377440: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x377440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x377444: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x377444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x377448: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x377448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x37744c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377450: 0xac220390  sw          $v0, 0x390($at)
    ctx->pc = 0x377450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0390u, _value); } while (0);
    // 0x377454: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377458: 0xa0200397  sb          $zero, 0x397($at)
    ctx->pc = 0x377458u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0397u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0397u, _value); } while (0);
    // 0x37745c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x377460: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x377460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x377464: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x377464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x377468: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x377468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x37746c: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x37746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x377470: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x377470u;
    SET_GPR_U32(ctx, 31, 0x377478u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x377478u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x377478u) { return; }
    ctx->pc = 0x377478u;
label_377478:
    // 0x377478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x377478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37747c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x37747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x377480: 0x24457190  addiu       $a1, $v0, 0x7190
    ctx->pc = 0x377480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29072));
    // 0x377484: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x377484u;
    SET_GPR_U32(ctx, 31, 0x37748Cu);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x377484u, 0x37748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37748Cu;
label_37748c:
    // 0x37748c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x37748cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377498: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x377498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37749c: 0x3e00008  jr          $ra
    ctx->pc = 0x37749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3774A4u;
}
