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

// Function: entry_00285b18
// Address: 0x285b18 - 0x285b8c
void entry_00285b18_0x285b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285b18_0x285b18");
#endif

    ctx->pc = 0x285b18u;

    // 0x285b18: 0x8e245dc0  lw          $a0, 0x5DC0($s1)
    ctx->pc = 0x285b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24000)));
    // 0x285b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285b20: 0x14830061  bne         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x285B20u;
    {
        const bool branch_taken_0x285b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285b20) {
            ctx->pc = 0x285CA8u;
            return;
        }
    }
    ctx->pc = 0x285B28u;
    // 0x285b28: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285b2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285b30: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x285B30u;
    {
        const bool branch_taken_0x285b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b30) {
            ctx->pc = 0x285BE4u;
            return;
        }
    }
    ctx->pc = 0x285B38u;
    // 0x285b38: 0x9223660c  lbu         $v1, 0x660C($s1)
    ctx->pc = 0x285b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26124)));
    // 0x285b3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285b40: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x285B40u;
    {
        const bool branch_taken_0x285b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b40) {
            ctx->pc = 0x285BE4u;
            return;
        }
    }
    ctx->pc = 0x285B48u;
    // 0x285b48: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285b48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285b4c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285b50: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285b50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285b54: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x285B54u;
    {
        const bool branch_taken_0x285b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b54) {
            ctx->pc = 0x285BE4u;
            return;
        }
    }
    ctx->pc = 0x285B5Cu;
    // 0x285b5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285b60: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x285b60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x285b64: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x285b68: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x285b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x285b6c: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x285B6Cu;
    {
        const bool branch_taken_0x285b6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b6c) {
            ctx->pc = 0x285B8Cu;
            return;
        }
    }
    ctx->pc = 0x285B74u;
    // 0x285b74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285b78: 0x8c27011c  lw          $a3, 0x11C($at)
    ctx->pc = 0x285b78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x285b7c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x285b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x285b80: 0xe84824  and         $t1, $a3, $t0
    ctx->pc = 0x285b80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x285b84: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x285B84u;
    {
        const bool branch_taken_0x285b84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x285b84) {
            ctx->pc = 0x285BE4u;
            return;
        }
    }
    ctx->pc = 0x285B8Cu;
}
