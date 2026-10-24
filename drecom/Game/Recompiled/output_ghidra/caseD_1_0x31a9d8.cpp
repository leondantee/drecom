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

// Function: caseD_1
// Address: 0x31a9d8 - 0x31aa50
void caseD_1_0x31a9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x31a9d8");
#endif

    ctx->pc = 0x31a9d8u;

    // 0x31a9d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31a9dc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x31a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31a9e0: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x31a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x31a9e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31a9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31a9e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31a9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31a9ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31a9f0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x31a9f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31a9f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a9f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a9fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31a9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31aa00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa04: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31aa04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31aa08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31aa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31aa10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31aa14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31aa18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31aa20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa28: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31aa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x31aa2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aa2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa34: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31aa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x31aa38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aa38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aa3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa40: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x31aa44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31aa44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31aa48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31AA48u;
    {
        const bool branch_taken_0x31aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aa48) {
            ctx->pc = 0x31AA68u;
            return;
        }
    }
    ctx->pc = 0x31AA50u;
}
