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

// Function: caseD_5
// Address: 0x31a7bc - 0x31a818
void caseD_5_0x31a7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x31a7bc");
#endif

    ctx->pc = 0x31a7bcu;

    // 0x31a7bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a7c0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7c4: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x31a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31a7c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a7d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31a7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a7d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7dc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a7e0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7e4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x31a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x31a7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a7ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7f0: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31a7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x31a7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a7f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a7fc: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31a7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x31a800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a804: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a808: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31a808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x31a80c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31a80cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31A810u;
    {
        const bool branch_taken_0x31a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a810) {
            ctx->pc = 0x31A830u;
            return;
        }
    }
    ctx->pc = 0x31A818u;
}
