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

// Function: entry_001f9e7c
// Address: 0x1f9e7c - 0x1f9ef4
void entry_001f9e7c_0x1f9e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9e7c_0x1f9e7c");
#endif

    ctx->pc = 0x1f9e7cu;

    // 0x1f9e7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e80: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e84: 0x9083007e  lbu         $v1, 0x7E($a0)
    ctx->pc = 0x1f9e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
    // 0x1f9e88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f9e8c: 0xa083007e  sb          $v1, 0x7E($a0)
    ctx->pc = 0x1f9e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f9e90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e98: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9e9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f9e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9ea0: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1f9ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f9ea4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9EA4u;
    {
        const bool branch_taken_0x1f9ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ea4) {
            ctx->pc = 0x1F9EF4u;
            return;
        }
    }
    ctx->pc = 0x1F9EACu;
    // 0x1f9eac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f9eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9eb0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9eb4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9eb8: 0xa064007d  sb          $a0, 0x7D($v1)
    ctx->pc = 0x1f9eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9ebc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f9ec0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ec4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9ec8: 0xa064007e  sb          $a0, 0x7E($v1)
    ctx->pc = 0x1f9ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 126), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9ecc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f9ed0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f9ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f9ed4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f9ed8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f9ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f9edc: 0xfe0300e0  sd          $v1, 0xE0($s0)
    ctx->pc = 0x1f9edcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
    // 0x1f9ee0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f9ee4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f9ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f9ee8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f9eec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f9eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f9ef0: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    ctx->pc = 0x1f9ef4u;
}
