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

// Function: entry_002790a8
// Address: 0x2790a8 - 0x279118
void entry_002790a8_0x2790a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002790a8_0x2790a8");
#endif

    switch (ctx->pc) {
        case 0x2790c0u: goto label_2790c0;
        default: break;
    }

    ctx->pc = 0x2790a8u;

    // 0x2790a8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2790a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2790ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2790acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2790b0: 0x2442ef10  addiu       $v0, $v0, -0x10F0
    ctx->pc = 0x2790b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962960));
    // 0x2790b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2790b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2790b8: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x2790B8u;
    SET_GPR_U32(ctx, 31, 0x2790C0u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x2790B8u, 0x2790C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790C0u;
label_2790c0:
    // 0x2790c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2790c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2790c4: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2790C4u;
    {
        const bool branch_taken_0x2790c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2790c4) {
            ctx->pc = 0x27914Cu;
            return;
        }
    }
    ctx->pc = 0x2790CCu;
    // 0x2790cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2790ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2790d0: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x2790d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x2790d4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2790d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB48u));
    // 0x2790d8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2790dc: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x2790dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2790e0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2790e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2790e4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2790e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2790e8: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x2790e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2790ec: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x2790ecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB50u));
    // 0x2790f0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2790f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2790f4: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x2790f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2790f8: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x2790f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB54u));
    // 0x2790fc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2790fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x279100: 0xa602127e  sh          $v0, 0x127E($s0)
    ctx->pc = 0x279100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x279104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27910c: 0xa022d5f1  sb          $v0, -0x2A0F($at)
    ctx->pc = 0x27910cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x279110: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x279110u;
    {
        const bool branch_taken_0x279110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279110) {
            ctx->pc = 0x27914Cu;
            return;
        }
    }
    ctx->pc = 0x279118u;
}
