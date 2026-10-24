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

// Function: entry_002593d0
// Address: 0x2593d0 - 0x25942c
void entry_002593d0_0x2593d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002593d0_0x2593d0");
#endif

    ctx->pc = 0x2593d0u;

    // 0x2593d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2593d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2593d4: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x2593d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2593d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2593d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2593dc: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x2593dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x2593e0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2593E0u;
    {
        const bool branch_taken_0x2593e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593e0) {
            ctx->pc = 0x25949Cu;
            return;
        }
    }
    ctx->pc = 0x2593E8u;
    // 0x2593e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2593e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2593ec: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x2593ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2593f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2593f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2593f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2593f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2593f8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2593F8u;
    {
        const bool branch_taken_0x2593f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593f8) {
            ctx->pc = 0x25944Cu;
            return;
        }
    }
    ctx->pc = 0x259400u;
    // 0x259400: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x259400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259404: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259408: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x259408u;
    {
        const bool branch_taken_0x259408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259408) {
            ctx->pc = 0x25942Cu;
            return;
        }
    }
    ctx->pc = 0x259410u;
    // 0x259410: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x259410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259414: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259418: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x259418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x25941c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x259420: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x259420u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x259424: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x259424u;
    {
        const bool branch_taken_0x259424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259424) {
            ctx->pc = 0x2594F0u;
            return;
        }
    }
    ctx->pc = 0x25942Cu;
}
