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

// Function: entry_002576f4
// Address: 0x2576f4 - 0x257750
void entry_002576f4_0x2576f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002576f4_0x2576f4");
#endif

    ctx->pc = 0x2576f4u;

    // 0x2576f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2576f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2576f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2576f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2576fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2576fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257700: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x257700u;
    {
        const bool branch_taken_0x257700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257700) {
            ctx->pc = 0x257750u;
            return;
        }
    }
    ctx->pc = 0x257708u;
    // 0x257708: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25770c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257710: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x257710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257714: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257714u;
    {
        const bool branch_taken_0x257714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257714) {
            ctx->pc = 0x257750u;
            return;
        }
    }
    ctx->pc = 0x25771Cu;
    // 0x25771c: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x25771cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257720: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257728: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25772c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x25772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x257730: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257734: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x257734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257738: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25773c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25773cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257740: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257744: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x257744u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x257748: 0x0  nop
    ctx->pc = 0x257748u;
    // NOP
    // 0x25774c: 0x0  nop
    ctx->pc = 0x25774cu;
    // NOP
    ctx->pc = 0x257750u;
}
