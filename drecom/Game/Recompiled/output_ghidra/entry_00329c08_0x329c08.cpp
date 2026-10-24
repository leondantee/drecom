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

// Function: entry_00329c08
// Address: 0x329c08 - 0x329c3c
void entry_00329c08_0x329c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329c08_0x329c08");
#endif

    ctx->pc = 0x329c08u;

    // 0x329c08: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x329c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x329c0c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329c10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329c14: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x329C14u;
    {
        const bool branch_taken_0x329c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329c14) {
            ctx->pc = 0x329C3Cu;
            return;
        }
    }
    ctx->pc = 0x329C1Cu;
    // 0x329c1c: 0x86032910  lh          $v1, 0x2910($s0)
    ctx->pc = 0x329c1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10512)));
    // 0x329c20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329c24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329c24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329c28: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x329c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x329c2c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x329c2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x329c30: 0x86032910  lh          $v1, 0x2910($s0)
    ctx->pc = 0x329c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10512)));
    // 0x329c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329c38: 0xa6032910  sh          $v1, 0x2910($s0)
    ctx->pc = 0x329c38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10512), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x329c3cu;
}
