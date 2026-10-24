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

// Function: entry_00251bd8
// Address: 0x251bd8 - 0x251c24
void entry_00251bd8_0x251bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251bd8_0x251bd8");
#endif

    ctx->pc = 0x251bd8u;

    // 0x251bd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bdc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x251bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x251be0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x251be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251be4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x251be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251be8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x251be8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x251bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bf0: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x251bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251bf4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x251bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x251bf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bfc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251c00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251c04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251c08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251c0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251c10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251c14: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251c18: 0x24045808  addiu       $a0, $zero, 0x5808
    ctx->pc = 0x251c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22536));
    // 0x251c1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251c1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251c20: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x251c24u;
}
