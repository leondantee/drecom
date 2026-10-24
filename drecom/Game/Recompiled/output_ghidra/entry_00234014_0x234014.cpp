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

// Function: entry_00234014
// Address: 0x234014 - 0x234050
void entry_00234014_0x234014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234014_0x234014");
#endif

    ctx->pc = 0x234014u;

    // 0x234014: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234018: 0x94670002  lhu         $a3, 0x2($v1)
    ctx->pc = 0x234018u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23401c: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x23401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x234020: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x234020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x234024: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x234024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234028: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x234028u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23402c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x23402cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234030: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x234030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x234034: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x234034u;
    {
        const bool branch_taken_0x234034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234034) {
            ctx->pc = 0x234050u;
            return;
        }
    }
    ctx->pc = 0x23403Cu;
    // 0x23403c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x23403cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234040: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x234040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x234044: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x234044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x234048: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234048u;
    {
        const bool branch_taken_0x234048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234048) {
            ctx->pc = 0x23405Cu;
            return;
        }
    }
    ctx->pc = 0x234050u;
}
