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

// Function: entry_0013ff80
// Address: 0x13ff80 - 0x140008
void entry_0013ff80_0x13ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff80_0x13ff80");
#endif

    ctx->pc = 0x13ff80u;

    // 0x13ff80: 0x8fa31664  lw          $v1, 0x1664($sp)
    ctx->pc = 0x13ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5732)));
    // 0x13ff84: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x13ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13ff88: 0xafa21664  sw          $v0, 0x1664($sp)
    ctx->pc = 0x13ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5732), GPR_U32(ctx, 2));
    // 0x13ff8c: 0x1440fa64  bnez        $v0, . + 4 + (-0x59C << 2)
    ctx->pc = 0x13FF8Cu;
    {
        const bool branch_taken_0x13ff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff8c) {
            ctx->pc = 0x13E920u;
            return;
        }
    }
    ctx->pc = 0x13FF94u;
    // 0x13ff94: 0x8fa21674  lw          $v0, 0x1674($sp)
    ctx->pc = 0x13ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13ff98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13FF98u;
    {
        const bool branch_taken_0x13ff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff98) {
            ctx->pc = 0x140008u;
            return;
        }
    }
    ctx->pc = 0x13FFA0u;
    // 0x13ffa0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ffa4: 0x8fa61670  lw          $a2, 0x1670($sp)
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x13ffa8: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13ffac: 0xe44023  subu        $t0, $a3, $a0
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13ffb0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13ffb4: 0x82902  srl         $a1, $t0, 4
    ctx->pc = 0x13ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x13ffb8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13ffb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13ffbc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x13ffbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x13ffc0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x13ffc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x13ffc4: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x13ffc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13ffc8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ffcc: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x13ffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13ffd0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13ffd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13ffd4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x13ffd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13ffd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13ffd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13ffdc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x13ffdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ffe0: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x13ffe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x13ffe4: 0x8fa41670  lw          $a0, 0x1670($sp)
    ctx->pc = 0x13ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x13ffe8: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x13ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x13ffec: 0x8fa91674  lw          $t1, 0x1674($sp)
    ctx->pc = 0x13ffecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13fff0: 0xdd250000  ld          $a1, 0x0($t1)
    ctx->pc = 0x13fff0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13fff4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13fff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13fff8: 0x8fa61674  lw          $a2, 0x1674($sp)
    ctx->pc = 0x13fff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13fffc: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x13fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x140000: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140000u;
    {
        const bool branch_taken_0x140000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140000) {
            ctx->pc = 0x140018u;
            return;
        }
    }
    ctx->pc = 0x140008u;
}
