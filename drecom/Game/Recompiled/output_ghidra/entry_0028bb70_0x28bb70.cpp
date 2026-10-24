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

// Function: entry_0028bb70
// Address: 0x28bb70 - 0x28bbd0
void entry_0028bb70_0x28bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bb70_0x28bb70");
#endif

    switch (ctx->pc) {
        case 0x28bba0u: goto label_28bba0;
        default: break;
    }

    ctx->pc = 0x28bb70u;

    // 0x28bb70: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28bb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28bb74: 0x9022c774  lbu         $v0, -0x388C($at)
    ctx->pc = 0x28bb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C774u));
    // 0x28bb78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb80: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28BB80u;
    {
        const bool branch_taken_0x28bb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bb80) {
            ctx->pc = 0x28BBD0u;
            return;
        }
    }
    ctx->pc = 0x28BB88u;
    // 0x28bb88: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x28bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x28bb8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28bb90: 0x2445e910  addiu       $a1, $v0, -0x16F0
    ctx->pc = 0x28bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x28bb94: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28bb98: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28BB98u;
    SET_GPR_U32(ctx, 31, 0x28BBA0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28BBA0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28BBA0u) { return; }
    ctx->pc = 0x28BBA0u;
label_28bba0:
    // 0x28bba0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28bba4: 0x2442615c  addiu       $v0, $v0, 0x615C
    ctx->pc = 0x28bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24924));
    // 0x28bba8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28bbac: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x28bbacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bbb0: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x28bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28bbb4: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x28bbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bbb8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x28bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28bbbc: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x28bbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bbc0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x28bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x28bbc4: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x28bbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bbc8: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28BBC8u;
    SET_GPR_U32(ctx, 31, 0x28BBD0u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28BBC8u, 0x28BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBD0u;
}
