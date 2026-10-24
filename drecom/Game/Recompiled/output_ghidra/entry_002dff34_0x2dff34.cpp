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

// Function: entry_002dff34
// Address: 0x2dff34 - 0x2dffac
void entry_002dff34_0x2dff34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dff34_0x2dff34");
#endif

    ctx->pc = 0x2dff34u;

    // 0x2dff34: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2dff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2dff38: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x2dff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x2dff3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dff40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2dff40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2dff44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2dff44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2dff48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dff48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff4c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2dff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2dff50: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2dff50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2dff54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2dff54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dff58: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2dff58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2dff5c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff60: 0x8ca411a0  lw          $a0, 0x11A0($a1)
    ctx->pc = 0x2dff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4512)));
    // 0x2dff64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2dff64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2dff68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2dff68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dff6c: 0xaca311a0  sw          $v1, 0x11A0($a1)
    ctx->pc = 0x2dff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4512), GPR_U32(ctx, 3));
    // 0x2dff70: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2dff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2dff74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff78: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2dff78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dff7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dff80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dff84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dff88: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2dff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2dff8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff90: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dff90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dff94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dff98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dff9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dffa0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dffa4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dffa8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2dffacu;
}
