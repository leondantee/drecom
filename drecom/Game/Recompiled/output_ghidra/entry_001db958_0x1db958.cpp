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

// Function: entry_001db958
// Address: 0x1db958 - 0x1dba10
void entry_001db958_0x1db958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db958_0x1db958");
#endif

    ctx->pc = 0x1db958u;

    // 0x1db958: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db95c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db960: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1db964: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x1db968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db96c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1db970: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db974: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1db974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1db978: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db97c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1db97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1db980: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db984: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1db984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1db988: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1db988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1db98c: 0x2483b7a0  addiu       $v1, $a0, -0x4860
    ctx->pc = 0x1db98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
    // 0x1db990: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1db990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1db994: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1db994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db998: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x1db998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1db99c: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1db99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1db9a0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1db9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1db9a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1db9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1db9a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1db9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db9ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1db9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db9b0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1db9b4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1db9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1db9b8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1db9bc: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1db9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1db9c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db9c4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1db9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1db9c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db9cc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1db9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1db9d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db9d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1db9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db9d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db9dc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1db9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1db9e0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db9e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1db9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1db9e8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1db9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1db9ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db9f0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1db9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1db9f4: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1db9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1db9f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db9fc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1db9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1dba00: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1dba00u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dba04: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1dba04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dba08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dba0c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1dba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x1dba10u;
}
