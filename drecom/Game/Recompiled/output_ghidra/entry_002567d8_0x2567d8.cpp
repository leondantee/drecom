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

// Function: entry_002567d8
// Address: 0x2567d8 - 0x256844
void entry_002567d8_0x2567d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002567d8_0x2567d8");
#endif

    ctx->pc = 0x2567d8u;

    // 0x2567d8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2567d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2567dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2567dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2567e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2567e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2567e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2567e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2567e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2567e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2567ec: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x2567ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2567f0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2567f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2567f4: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x2567f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2567f8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x2567f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2567fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2567fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256800: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x256800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x256804: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x256804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x256808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x256808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25680c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256810: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x256814: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x256814u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x256818: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25681c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x25681cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x256820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256828: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256828u;
    {
        const bool branch_taken_0x256828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256828) {
            ctx->pc = 0x256844u;
            return;
        }
    }
    ctx->pc = 0x256830u;
    // 0x256830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x256830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256834: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256838: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x256838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x25683c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25683Cu;
    {
        const bool branch_taken_0x25683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25683c) {
            ctx->pc = 0x256878u;
            return;
        }
    }
    ctx->pc = 0x256844u;
}
