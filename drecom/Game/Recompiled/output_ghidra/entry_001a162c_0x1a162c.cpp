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

// Function: entry_001a162c
// Address: 0x1a162c - 0x1a1694
void entry_001a162c_0x1a162c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a162c_0x1a162c");
#endif

    ctx->pc = 0x1a162cu;

    // 0x1a162c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1630: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a1630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1638: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a1638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a163c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A163Cu;
    {
        const bool branch_taken_0x1a163c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a163c) {
            ctx->pc = 0x1A16C8u;
            return;
        }
    }
    ctx->pc = 0x1A1644u;
    // 0x1a1644: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1648: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1a1648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a164c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A164Cu;
    {
        const bool branch_taken_0x1a164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a164c) {
            ctx->pc = 0x1A1694u;
            return;
        }
    }
    ctx->pc = 0x1A1654u;
    // 0x1a1654: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1658: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1a1658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a165c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1660: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1a1660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a1664: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a1664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a1668: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1a1668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a166c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1670: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1a1670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a1674: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1a1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a1678: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a1678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a167c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1680: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a1680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a1684: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x1a1684u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1a1688: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a1688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a168c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1690: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a1690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a1694u;
}
