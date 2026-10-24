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

// Function: entry_00120c58
// Address: 0x120c58 - 0x120cac
void entry_00120c58_0x120c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120c58_0x120c58");
#endif

    ctx->pc = 0x120c58u;

    // 0x120c58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120c5c: 0x846411f2  lh          $a0, 0x11F2($v1)
    ctx->pc = 0x120c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x120c60: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x120c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x120c64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x120c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x120c68: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x120c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x120c6c: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x120c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
    // 0x120c70: 0x34a66667  ori         $a2, $a1, 0x6667
    ctx->pc = 0x120c70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x120c74: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x120c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120c78: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x120c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x120c7c: 0x0  nop
    ctx->pc = 0x120c7cu;
    // NOP
    // 0x120c80: 0x1810  mfhi        $v1
    ctx->pc = 0x120c80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120c84: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x120c84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
    // 0x120c88: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x120c8c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x120c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x120c90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x120c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x120c94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x120c94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x120c98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120c9c: 0x8424ef68  lh          $a0, -0x1098($at)
    ctx->pc = 0x120c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x120ca0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x120ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x120ca4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120ca8: 0xa425ef68  sh          $a1, -0x1098($at)
    ctx->pc = 0x120ca8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x120cacu;
}
