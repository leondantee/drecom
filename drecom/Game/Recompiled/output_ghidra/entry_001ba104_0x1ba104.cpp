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

// Function: entry_001ba104
// Address: 0x1ba104 - 0x1ba174
void entry_001ba104_0x1ba104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba104_0x1ba104");
#endif

    ctx->pc = 0x1ba104u;

    // 0x1ba104: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba108: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ba108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ba10c: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1ba110: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x1ba110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1ba114: 0x106002cf  beqz        $v1, . + 4 + (0x2CF << 2)
    ctx->pc = 0x1BA114u;
    {
        const bool branch_taken_0x1ba114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba114) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA11Cu;
    // 0x1ba11c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba120: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ba124: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1ba124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1ba128: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ba128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ba12c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ba12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ba130: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ba130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1ba134: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba138: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1ba138u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1ba13c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1ba13cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ba140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ba140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba144: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA144u;
    {
        const bool branch_taken_0x1ba144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba144) {
            ctx->pc = 0x1BA174u;
            return;
        }
    }
    ctx->pc = 0x1BA14Cu;
    // 0x1ba14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba150: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA150u;
    {
        const bool branch_taken_0x1ba150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba150) {
            ctx->pc = 0x1BA174u;
            return;
        }
    }
    ctx->pc = 0x1BA158u;
    // 0x1ba158: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ba158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba15c: 0x10a402bd  beq         $a1, $a0, . + 4 + (0x2BD << 2)
    ctx->pc = 0x1BA15Cu;
    {
        const bool branch_taken_0x1ba15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ba15c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA164u;
    // 0x1ba164: 0x10a002bb  beqz        $a1, . + 4 + (0x2BB << 2)
    ctx->pc = 0x1BA164u;
    {
        const bool branch_taken_0x1ba164 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba164) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA16Cu;
    // 0x1ba16c: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x1BA16Cu;
    {
        const bool branch_taken_0x1ba16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba16c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA174u;
}
