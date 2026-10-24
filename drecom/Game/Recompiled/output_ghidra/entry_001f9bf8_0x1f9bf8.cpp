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

// Function: entry_001f9bf8
// Address: 0x1f9bf8 - 0x1f9c48
void entry_001f9bf8_0x1f9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9bf8_0x1f9bf8");
#endif

    ctx->pc = 0x1f9bf8u;

    // 0x1f9bf8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bfc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c00: 0x9083007e  lbu         $v1, 0x7E($a0)
    ctx->pc = 0x1f9c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
    // 0x1f9c04: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1f9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1f9c08: 0xa083007e  sb          $v1, 0x7E($a0)
    ctx->pc = 0x1f9c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f9c0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c14: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9c18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f9c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9c1c: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x1f9c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1f9c20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9C20u;
    {
        const bool branch_taken_0x1f9c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c20) {
            ctx->pc = 0x1F9C48u;
            return;
        }
    }
    ctx->pc = 0x1F9C28u;
    // 0x1f9c28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9c2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c34: 0xa064007d  sb          $a0, 0x7D($v1)
    ctx->pc = 0x1f9c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9c38: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f9c3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c44: 0xa064007e  sb          $a0, 0x7E($v1)
    ctx->pc = 0x1f9c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 126), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f9c48u;
}
