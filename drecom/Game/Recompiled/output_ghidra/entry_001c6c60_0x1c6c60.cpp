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

// Function: entry_001c6c60
// Address: 0x1c6c60 - 0x1c6cf8
void entry_001c6c60_0x1c6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c60_0x1c6c60");
#endif

    ctx->pc = 0x1c6c60u;

    // 0x1c6c60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6c64: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1c6c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1c6c68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c6c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6c6c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1c6c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1c6c70: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C6C70u;
    {
        const bool branch_taken_0x1c6c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c70) {
            ctx->pc = 0x1C6CF8u;
            return;
        }
    }
    ctx->pc = 0x1C6C78u;
    // 0x1c6c78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c6c7c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c6c80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c6c84: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1c6c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c6c88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c6c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c6c8c: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1c6c8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c6c90: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c6c94: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c6c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6c98: 0xa0e6157d  sb          $a2, 0x157D($a3)
    ctx->pc = 0x1c6c98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5501), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c6c9c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c6c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ca0: 0x8d031b6c  lw          $v1, 0x1B6C($t0)
    ctx->pc = 0x1c6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7020)));
    // 0x1c6ca4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C6CA4u;
    {
        const bool branch_taken_0x1c6ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ca4) {
            ctx->pc = 0x1C6CF8u;
            return;
        }
    }
    ctx->pc = 0x1C6CACu;
    // 0x1c6cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6cb4: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1c6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1c6cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6cbc: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c6cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c6cc0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6CC0u;
    {
        const bool branch_taken_0x1c6cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cc0) {
            ctx->pc = 0x1C6CF8u;
            return;
        }
    }
    ctx->pc = 0x1C6CC8u;
    // 0x1c6cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ccc: 0x846515ec  lh          $a1, 0x15EC($v1)
    ctx->pc = 0x1c6cccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c6cd0: 0x24a4ff6a  addiu       $a0, $a1, -0x96
    ctx->pc = 0x1c6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967146));
    // 0x1c6cd4: 0xa46415ec  sh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c6cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c6cd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6cdc: 0x847015ec  lh          $s0, 0x15EC($v1)
    ctx->pc = 0x1c6cdcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c6ce0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c6ce4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c6ce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c6ce8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6CE8u;
    {
        const bool branch_taken_0x1c6ce8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c6ce8) {
            ctx->pc = 0x1C6CF8u;
            return;
        }
    }
    ctx->pc = 0x1C6CF0u;
    // 0x1c6cf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6cf4: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1c6cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c6cf8u;
}
