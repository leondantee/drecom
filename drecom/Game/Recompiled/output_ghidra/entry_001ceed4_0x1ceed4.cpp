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

// Function: entry_001ceed4
// Address: 0x1ceed4 - 0x1cef44
void entry_001ceed4_0x1ceed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceed4_0x1ceed4");
#endif

    switch (ctx->pc) {
        case 0x1ceef8u: goto label_1ceef8;
        default: break;
    }

    ctx->pc = 0x1ceed4u;

    // 0x1ceed4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceed8: 0x906409da  lbu         $a0, 0x9DA($v1)
    ctx->pc = 0x1ceed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x1ceedc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ceedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ceee0: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x1ceee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ceee4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1ceee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ceee8: 0x14a60016  bne         $a1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CEEE8u;
    {
        const bool branch_taken_0x1ceee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ceee8) {
            ctx->pc = 0x1CEF44u;
            return;
        }
    }
    ctx->pc = 0x1CEEF0u;
    // 0x1ceef0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CEEF0u;
    SET_GPR_U32(ctx, 31, 0x1CEEF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CEEF0u, 0x1CEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEEF8u;
label_1ceef8:
    // 0x1ceef8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1ceef8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ceefc: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1ceefcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cef00: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x1cef00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1cef04: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1cef04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cef08: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cef08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cef0c: 0x24649228  addiu       $a0, $v1, -0x6DD8
    ctx->pc = 0x1cef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939176));
    // 0x1cef10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1cef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cef14: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x1cef14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cef18: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1cef18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1cef1c: 0x3c08469c  lui         $t0, 0x469C
    ctx->pc = 0x1cef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18076 << 16));
    // 0x1cef20: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x1cef20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x1cef24: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1cef24u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cef28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cef2c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cef30: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cef30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cef34: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cef38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cef38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cef3c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CEF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF44u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CEF3Cu, 0x1CEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF44u;
}
