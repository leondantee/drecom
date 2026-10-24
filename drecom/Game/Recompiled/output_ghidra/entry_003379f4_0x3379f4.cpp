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

// Function: entry_003379f4
// Address: 0x3379f4 - 0x337a6c
void entry_003379f4_0x3379f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003379f4_0x3379f4");
#endif

    ctx->pc = 0x3379f4u;

    // 0x3379f4: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3379f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x3379f8: 0x90420088  lbu         $v0, 0x88($v0)
    ctx->pc = 0x3379f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3379fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3379fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337a00: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a04: 0xac224e40  sw          $v0, 0x4E40($at)
    ctx->pc = 0x337a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E40u, _value); } while (0);
    // 0x337a08: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x337a0c: 0x90430089  lbu         $v1, 0x89($v0)
    ctx->pc = 0x337a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
    // 0x337a10: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x337a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x337a14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a18: 0xac224e48  sw          $v0, 0x4E48($at)
    ctx->pc = 0x337a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E48u, _value); } while (0);
    // 0x337a1c: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x337a20: 0x9042008a  lbu         $v0, 0x8A($v0)
    ctx->pc = 0x337a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 138)));
    // 0x337a24: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x337a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337a28: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a2c: 0xac244e50  sw          $a0, 0x4E50($at)
    ctx->pc = 0x337a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x894E50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E50u, _value); } while (0);
    // 0x337a30: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a34: 0x8c234e40  lw          $v1, 0x4E40($at)
    ctx->pc = 0x337a34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E40u));
    // 0x337a38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337a3c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x337A3Cu;
    {
        const bool branch_taken_0x337a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337a3c) {
            ctx->pc = 0x337A6Cu;
            return;
        }
    }
    ctx->pc = 0x337A44u;
    // 0x337a44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337a48: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337a48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E48u));
    // 0x337a4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x337a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x337a50: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337A50u;
    {
        const bool branch_taken_0x337a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337a50) {
            ctx->pc = 0x337A6Cu;
            return;
        }
    }
    ctx->pc = 0x337A58u;
    // 0x337a58: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x337a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x337a5c: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x337a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x337a60: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x337a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x337a64: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x337A64u;
    {
        const bool branch_taken_0x337a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337a64) {
            ctx->pc = 0x337B94u;
            return;
        }
    }
    ctx->pc = 0x337A6Cu;
}
