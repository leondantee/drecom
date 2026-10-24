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

// Function: entry_001347d8
// Address: 0x1347d8 - 0x13487c
void entry_001347d8_0x1347d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347d8_0x1347d8");
#endif

    ctx->pc = 0x1347d8u;

    // 0x1347d8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1347d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1347dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1347dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1347e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347e4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1347e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347e8: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x1347e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x1347ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1347ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1347f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347f4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1347f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347f8: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1347f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1347fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1347fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134800: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134804: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134808: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x134808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x13480c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134810: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134814: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x134814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134818: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x134818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13481c: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x13481cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x134820: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x134820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x134824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134828: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13482c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134830: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x134830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x134834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134838: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13483c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134840: 0xe4600440  swc1        $f0, 0x440($v1)
    ctx->pc = 0x134840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1088), bits); }
    // 0x134844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134848: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13484c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134850: 0xe4600444  swc1        $f0, 0x444($v1)
    ctx->pc = 0x134850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1092), bits); }
    // 0x134854: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134858: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13485c: 0x94830460  lhu         $v1, 0x460($a0)
    ctx->pc = 0x13485cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x134860: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x134860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x134864: 0xa4830460  sh          $v1, 0x460($a0)
    ctx->pc = 0x134864u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1120), (uint16_t)GPR_U32(ctx, 3));
    // 0x134868: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x134868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13486c: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x13486cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134870: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x134870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x134874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x134874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x134878: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x134878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13487cu;
}
