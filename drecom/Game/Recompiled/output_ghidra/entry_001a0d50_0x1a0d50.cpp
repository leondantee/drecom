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

// Function: entry_001a0d50
// Address: 0x1a0d50 - 0x1a0e60
void entry_001a0d50_0x1a0d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0d50_0x1a0d50");
#endif

    ctx->pc = 0x1a0d50u;

    // 0x1a0d50: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d54: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0d58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d5c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a0d60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d64: 0x90640036  lbu         $a0, 0x36($v1)
    ctx->pc = 0x1a0d64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x1a0d68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d6c: 0xa064001c  sb          $a0, 0x1C($v1)
    ctx->pc = 0x1a0d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d74: 0x90640037  lbu         $a0, 0x37($v1)
    ctx->pc = 0x1a0d74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 55)));
    // 0x1a0d78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d7c: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x1a0d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0d80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d84: 0x90640038  lbu         $a0, 0x38($v1)
    ctx->pc = 0x1a0d84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a0d88: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d8c: 0xa064001e  sb          $a0, 0x1E($v1)
    ctx->pc = 0x1a0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0d90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d94: 0x90640039  lbu         $a0, 0x39($v1)
    ctx->pc = 0x1a0d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x1a0d98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d9c: 0xa064001f  sb          $a0, 0x1F($v1)
    ctx->pc = 0x1a0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0da0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0da4: 0x9064003d  lbu         $a0, 0x3D($v1)
    ctx->pc = 0x1a0da4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 61)));
    // 0x1a0da8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dac: 0xa0640023  sb          $a0, 0x23($v1)
    ctx->pc = 0x1a0dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 35), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0db0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0db4: 0x9064003c  lbu         $a0, 0x3C($v1)
    ctx->pc = 0x1a0db4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1a0db8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dbc: 0xa0640022  sb          $a0, 0x22($v1)
    ctx->pc = 0x1a0dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0dc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0dc4: 0x9064003a  lbu         $a0, 0x3A($v1)
    ctx->pc = 0x1a0dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1a0dc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dcc: 0xa0640020  sb          $a0, 0x20($v1)
    ctx->pc = 0x1a0dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0dd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0dd4: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1a0dd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
    // 0x1a0dd8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ddc: 0xa0640021  sb          $a0, 0x21($v1)
    ctx->pc = 0x1a0ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0de0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0de4: 0x9064003e  lbu         $a0, 0x3E($v1)
    ctx->pc = 0x1a0de4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x1a0de8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dec: 0xa0640024  sb          $a0, 0x24($v1)
    ctx->pc = 0x1a0decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0df0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0df4: 0x90640041  lbu         $a0, 0x41($v1)
    ctx->pc = 0x1a0df4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
    // 0x1a0df8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dfc: 0xa0640027  sb          $a0, 0x27($v1)
    ctx->pc = 0x1a0dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e04: 0x9064003f  lbu         $a0, 0x3F($v1)
    ctx->pc = 0x1a0e04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x1a0e08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e0c: 0xa0640025  sb          $a0, 0x25($v1)
    ctx->pc = 0x1a0e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e14: 0x90640040  lbu         $a0, 0x40($v1)
    ctx->pc = 0x1a0e14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1a0e18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e1c: 0xa0640026  sb          $a0, 0x26($v1)
    ctx->pc = 0x1a0e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e24: 0x90640042  lbu         $a0, 0x42($v1)
    ctx->pc = 0x1a0e24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1a0e28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e2c: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x1a0e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e34: 0x90640043  lbu         $a0, 0x43($v1)
    ctx->pc = 0x1a0e34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
    // 0x1a0e38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e3c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1a0e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e44: 0x90640044  lbu         $a0, 0x44($v1)
    ctx->pc = 0x1a0e44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1a0e48: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e4c: 0xa064002a  sb          $a0, 0x2A($v1)
    ctx->pc = 0x1a0e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e54: 0x90640045  lbu         $a0, 0x45($v1)
    ctx->pc = 0x1a0e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 69)));
    // 0x1a0e58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e5c: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x1a0e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a0e60u;
}
