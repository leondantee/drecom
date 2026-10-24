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

// Function: entry_00134e84
// Address: 0x134e84 - 0x134ee8
void entry_00134e84_0x134e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e84_0x134e84");
#endif

    ctx->pc = 0x134e84u;

    // 0x134e84: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e88: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x134e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x134e8c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x134e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x134e90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x134e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x134e94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x134e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x134e98: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x134e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x134e9c: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x134e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x134ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ea4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x134ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ea8: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x134ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134eac: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134eb8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134ebc: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x134ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x134ec0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ec4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134ec8: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x134ec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134ecc: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x134eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x134ed0: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x134ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x134ed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ed8: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x134ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134edc: 0x94a40460  lhu         $a0, 0x460($a1)
    ctx->pc = 0x134edcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1120)));
    // 0x134ee0: 0x308300fd  andi        $v1, $a0, 0xFD
    ctx->pc = 0x134ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x134ee4: 0xa4a30460  sh          $v1, 0x460($a1)
    ctx->pc = 0x134ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1120), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x134ee8u;
}
