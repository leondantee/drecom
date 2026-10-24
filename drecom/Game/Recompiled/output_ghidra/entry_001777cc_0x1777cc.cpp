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

// Function: entry_001777cc
// Address: 0x1777cc - 0x177838
void entry_001777cc_0x1777cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001777cc_0x1777cc");
#endif

    ctx->pc = 0x1777ccu;

    // 0x1777cc: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1777ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1777d0: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1777d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1777d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1777d8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1777d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1777dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1777dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1777e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1777e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1777e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1777e8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1777e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1777ec: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x1777ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1777f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1777f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1777f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1777f8: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1777f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1777fc: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x1777fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x177800: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177804: 0x101a3c  dsll32      $v1, $s0, 8
    ctx->pc = 0x177804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 8));
    // 0x177808: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x177808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x17780c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x17780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177810: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177814: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x177814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x177818: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x177818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x17781c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x17781cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x177820: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177824: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177828: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17782c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177830: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x177830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x177834: 0x0  nop
    ctx->pc = 0x177834u;
    // NOP
    ctx->pc = 0x177838u;
}
