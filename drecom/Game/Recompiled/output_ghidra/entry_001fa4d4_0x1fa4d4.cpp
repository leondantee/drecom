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

// Function: entry_001fa4d4
// Address: 0x1fa4d4 - 0x1fa514
void entry_001fa4d4_0x1fa4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa4d4_0x1fa4d4");
#endif

    ctx->pc = 0x1fa4d4u;

    // 0x1fa4d4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa4d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa4dc: 0x9083007f  lbu         $v1, 0x7F($a0)
    ctx->pc = 0x1fa4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
    // 0x1fa4e0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1fa4e4: 0xa083007f  sb          $v1, 0x7F($a0)
    ctx->pc = 0x1fa4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa4e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa4ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa4f0: 0x9063007f  lbu         $v1, 0x7F($v1)
    ctx->pc = 0x1fa4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1fa4f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa4f8: 0x28610031  slti        $at, $v1, 0x31
    ctx->pc = 0x1fa4f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1fa4fc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA4FCu;
    {
        const bool branch_taken_0x1fa4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4fc) {
            ctx->pc = 0x1FA514u;
            return;
        }
    }
    ctx->pc = 0x1FA504u;
    // 0x1fa504: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1fa504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fa508: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa50c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa510: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1fa510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1fa514u;
}
