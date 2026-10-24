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

// Function: entry_001c6c04
// Address: 0x1c6c04 - 0x1c6c60
void entry_001c6c04_0x1c6c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c04_0x1c6c04");
#endif

    ctx->pc = 0x1c6c04u;

    // 0x1c6c04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6c08: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1c6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x1c6c0c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C6C0Cu;
    {
        const bool branch_taken_0x1c6c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c0c) {
            ctx->pc = 0x1C6C60u;
            return;
        }
    }
    ctx->pc = 0x1C6C14u;
    // 0x1c6c14: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6c18: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1c6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c6c1c: 0x3c058040  lui         $a1, 0x8040
    ctx->pc = 0x1c6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32832 << 16));
    // 0x1c6c20: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x1c6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1c6c24: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1c6c28: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6c2c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1c6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c6c30: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x1c6c34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6c38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c6c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6c3c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1c6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1c6c40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c6c44: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c6c48: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x1c6c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c6c4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6C4Cu;
    {
        const bool branch_taken_0x1c6c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c4c) {
            ctx->pc = 0x1C6C60u;
            return;
        }
    }
    ctx->pc = 0x1C6C54u;
    // 0x1c6c54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6c58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6c5c: 0xa08313a7  sb          $v1, 0x13A7($a0)
    ctx->pc = 0x1c6c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5031), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c6c60u;
}
