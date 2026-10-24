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

// Function: entry_00155e2c
// Address: 0x155e2c - 0x155e68
void entry_00155e2c_0x155e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155e2c_0x155e2c");
#endif

    ctx->pc = 0x155e2cu;

    // 0x155e2c: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x155e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x155e30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e34: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x155e34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x155e38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e3c: 0x839823  subu        $s3, $a0, $v1
    ctx->pc = 0x155e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x155e40: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x155e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x155e44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155e48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155e48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155e4c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x155E4Cu;
    {
        const bool branch_taken_0x155e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155e4c) {
            ctx->pc = 0x155E68u;
            return;
        }
    }
    ctx->pc = 0x155E54u;
    // 0x155e54: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x155e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x155e58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e5c: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x155e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x155e60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x155E60u;
    {
        const bool branch_taken_0x155e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e60) {
            ctx->pc = 0x155EA0u;
            return;
        }
    }
    ctx->pc = 0x155E68u;
}
