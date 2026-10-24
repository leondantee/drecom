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

// Function: entry_00161328
// Address: 0x161328 - 0x161380
void entry_00161328_0x161328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161328_0x161328");
#endif

    ctx->pc = 0x161328u;

label_161328:
    // 0x161328: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x161328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16132c:
    // 0x16132c: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x16132cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
label_161330:
    // 0x161330: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x161330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_161334:
    // 0x161334: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x161334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_161338:
    // 0x161338: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x161338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_16133c:
    // 0x16133c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_161340:
    // 0x161340: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_161344:
    // 0x161344: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x161344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_161348:
    // 0x161348: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x161348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16134c:
    // 0x16134c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x16134cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_161350:
    // 0x161350: 0x920313b4  lbu         $v1, 0x13B4($s0)
    ctx->pc = 0x161350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5044)));
label_161354:
    // 0x161354: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x161354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_161358:
    // 0x161358: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x161358u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_16135c:
    // 0x16135c: 0x102000fc  beqz        $at, . + 4 + (0xFC << 2)
label_161360:
    if (ctx->pc == 0x161360u) {
        ctx->pc = 0x161364u;
        goto label_161364;
    }
    ctx->pc = 0x16135Cu;
    {
        const bool branch_taken_0x16135c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16135c) {
            ctx->pc = 0x161750u;
            return;
        }
    }
    ctx->pc = 0x161364u;
label_161364:
    // 0x161364: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x161364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_161368:
    // 0x161368: 0x2464ea20  addiu       $a0, $v1, -0x15E0
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961696));
label_16136c:
    // 0x16136c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16136cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_161370:
    // 0x161370: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_161374:
    // 0x161374: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x161374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_161378:
    // 0x161378: 0x600008  jr          $v1
label_16137c:
    if (ctx->pc == 0x16137Cu) {
        ctx->pc = 0x161380u;
        goto label_fallthrough_0x161378;
    }
    ctx->pc = 0x161378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161378u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x161378:
    ctx->pc = 0x161380u;
}
