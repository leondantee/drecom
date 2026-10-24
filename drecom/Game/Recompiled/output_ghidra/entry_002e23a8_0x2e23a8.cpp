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

// Function: entry_002e23a8
// Address: 0x2e23a8 - 0x2e242c
void entry_002e23a8_0x2e23a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e23a8_0x2e23a8");
#endif

    ctx->pc = 0x2e23a8u;

    // 0x2e23a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e23a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e23acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e23b0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x2e23b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x2e23b4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x2e23b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x2e23b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e23bc: 0xa20000d3  sb          $zero, 0xD3($s0)
    ctx->pc = 0x2e23bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 211), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e23c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e23c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23c8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23cc: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e23ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e23d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e23d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23d8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23dc: 0xe4600c0c  swc1        $f0, 0xC0C($v1)
    ctx->pc = 0x2e23dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3084), bits); }
    // 0x2e23e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e23e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23e8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23ec: 0xe46016fc  swc1        $f0, 0x16FC($v1)
    ctx->pc = 0x2e23ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5884), bits); }
    // 0x2e23f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e23f4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e23f8: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x2e23f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2e23fc: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x2e23fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x2e2400: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x2e2400u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2404: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2408: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e240c: 0x94830c30  lhu         $v1, 0xC30($a0)
    ctx->pc = 0x2e240cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3120)));
    // 0x2e2410: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x2e2410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x2e2414: 0xa4830c30  sh          $v1, 0xC30($a0)
    ctx->pc = 0x2e2414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3120), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2418: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e241c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2420: 0x94831720  lhu         $v1, 0x1720($a0)
    ctx->pc = 0x2e2420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5920)));
    // 0x2e2424: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x2e2424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x2e2428: 0xa4831720  sh          $v1, 0x1720($a0)
    ctx->pc = 0x2e2428u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5920), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2e242cu;
}
