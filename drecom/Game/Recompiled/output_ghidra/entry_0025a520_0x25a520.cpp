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

// Function: entry_0025a520
// Address: 0x25a520 - 0x25a570
void entry_0025a520_0x25a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a520_0x25a520");
#endif

    ctx->pc = 0x25a520u;

    // 0x25a520: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a524: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a528: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a52c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x25a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x25a530: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a534: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x25a534u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a538: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a53c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a544: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25a548: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A548u;
    {
        const bool branch_taken_0x25a548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a548) {
            ctx->pc = 0x25A570u;
            return;
        }
    }
    ctx->pc = 0x25A550u;
    // 0x25a550: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a554: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x25a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25a558: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a55c: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x25a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x25a560: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x25a560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25a564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a568: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a56c: 0xac641a24  sw          $a0, 0x1A24($v1)
    ctx->pc = 0x25a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6692), GPR_U32(ctx, 4));
    ctx->pc = 0x25a570u;
}
