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

// Function: entry_001a0be0
// Address: 0x1a0be0 - 0x1a0d50
void entry_001a0be0_0x1a0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0be0_0x1a0be0");
#endif

    ctx->pc = 0x1a0be0u;

    // 0x1a0be0: 0x2e430020  sltiu       $v1, $s2, 0x20
    ctx->pc = 0x1a0be0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a0be4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A0BE4u;
    {
        const bool branch_taken_0x1a0be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0be4) {
            ctx->pc = 0x1A0B40u;
            return;
        }
    }
    ctx->pc = 0x1A0BECu;
    // 0x1a0bec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0bf0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0bf4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1a0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0bf8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a0bfc: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a0bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a0c00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c04: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0c08: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1a0c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a0c0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c10: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1a0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1a0c14: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c1c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1a0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0c20: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a0c24: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a0c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a0c28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c2c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a0c30: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1a0c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a0c34: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c38: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1a0c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1a0c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0c40: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1a0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1a0c44: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1a0c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1a0c48: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A0C48u;
    {
        const bool branch_taken_0x1a0c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c48) {
            ctx->pc = 0x1A0D50u;
            return;
        }
    }
    ctx->pc = 0x1A0C50u;
    // 0x1a0c50: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c54: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0c58: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c5c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a0c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0c60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a0c68: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c6c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x1a0c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1a0c70: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0c78: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1a0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1a0c7c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c80: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1a0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a0c84: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0c8c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1a0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x1a0c90: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c94: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a0c98: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0ca0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1a0ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1a0ca4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ca8: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1a0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a0cac: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0cb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0cb4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1a0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1a0cb8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0cbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cc0: 0xa064001c  sb          $a0, 0x1C($v1)
    ctx->pc = 0x1a0cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0cc4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0cc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ccc: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x1a0cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0cd0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0cd4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cd8: 0xa064001e  sb          $a0, 0x1E($v1)
    ctx->pc = 0x1a0cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0cdc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0ce0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ce4: 0xa064001f  sb          $a0, 0x1F($v1)
    ctx->pc = 0x1a0ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0ce8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cec: 0xa0600023  sb          $zero, 0x23($v1)
    ctx->pc = 0x1a0cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0cf0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cf4: 0xa0600022  sb          $zero, 0x22($v1)
    ctx->pc = 0x1a0cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0cf8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cfc: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x1a0cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d04: 0xa0600021  sb          $zero, 0x21($v1)
    ctx->pc = 0x1a0d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d0c: 0xa0600024  sb          $zero, 0x24($v1)
    ctx->pc = 0x1a0d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d14: 0xa0600027  sb          $zero, 0x27($v1)
    ctx->pc = 0x1a0d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d1c: 0xa0600025  sb          $zero, 0x25($v1)
    ctx->pc = 0x1a0d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d24: 0xa0600026  sb          $zero, 0x26($v1)
    ctx->pc = 0x1a0d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d2c: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x1a0d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d30: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d34: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x1a0d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d3c: 0xa060002a  sb          $zero, 0x2A($v1)
    ctx->pc = 0x1a0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d40: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d44: 0xa060002b  sb          $zero, 0x2B($v1)
    ctx->pc = 0x1a0d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d48: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1A0D48u;
    {
        const bool branch_taken_0x1a0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d48) {
            ctx->pc = 0x1A0E60u;
            return;
        }
    }
    ctx->pc = 0x1A0D50u;
}
