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

// Function: entry_0033779c
// Address: 0x33779c - 0x3377fc
void entry_0033779c_0x33779c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033779c_0x33779c");
#endif

    ctx->pc = 0x33779cu;

    // 0x33779c: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x33779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x3377a0: 0x9063008d  lbu         $v1, 0x8D($v1)
    ctx->pc = 0x3377a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x3377a4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3377a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3377a8: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x3377a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3377ac: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x3377ACu;
    {
        const bool branch_taken_0x3377ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3377ac) {
            ctx->pc = 0x33781Cu;
            return;
        }
    }
    ctx->pc = 0x3377B4u;
    // 0x3377b4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3377b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3377b8: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3377b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x3377bc: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x3377bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x3377c0: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x3377c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x3377c4: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3377c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x3377c8: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x3377c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x3377cc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3377ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x3377d0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3377d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x3377d4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x3377d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3377d8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3377d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3377dc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3377dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3377e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3377E0u;
    {
        const bool branch_taken_0x3377e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3377e0) {
            ctx->pc = 0x3377FCu;
            return;
        }
    }
    ctx->pc = 0x3377E8u;
    // 0x3377e8: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x3377e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3377ec: 0x8cc3020c  lw          $v1, 0x20C($a2)
    ctx->pc = 0x3377ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    // 0x3377f0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3377f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3377f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3377f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3377f8: 0xacc2020c  sw          $v0, 0x20C($a2)
    ctx->pc = 0x3377f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 524), GPR_U32(ctx, 2));
    ctx->pc = 0x3377fcu;
}
