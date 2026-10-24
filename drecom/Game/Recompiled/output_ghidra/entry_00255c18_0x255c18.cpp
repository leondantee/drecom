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

// Function: entry_00255c18
// Address: 0x255c18 - 0x255cd0
void entry_00255c18_0x255c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255c18_0x255c18");
#endif

    ctx->pc = 0x255c18u;

    // 0x255c18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255c1c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x255c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x255c20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x255c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x255c24: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x255c28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255c2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x255c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255c30: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x255c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255c34: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x255c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x255c38: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255c3c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x255c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x255c40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x255c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255c44: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x255c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x255c48: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x255c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x255c4c: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x255c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x255c50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255c54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x255c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255c58: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x255c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x255c5c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x255c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x255c60: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x255c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x255c64: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x255c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x255c68: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x255c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x255c6c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x255c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255c70: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255c74: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x255c74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x255c78: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255c7c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x255c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x255c80: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x255c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255c84: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x255c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x255c88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x255c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255c8c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x255c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x255c90: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255c94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x255c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255c98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255c9c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x255c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x255ca0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255ca4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x255ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255ca8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x255ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x255cac: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255cb0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x255cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x255cb4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x255cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x255cb8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255cbc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x255cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x255cc0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x255cc0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x255cc4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x255cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255cc8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255ccc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x255cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x255cd0u;
}
