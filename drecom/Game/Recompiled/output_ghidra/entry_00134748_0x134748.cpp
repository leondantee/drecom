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

// Function: entry_00134748
// Address: 0x134748 - 0x1347d8
void entry_00134748_0x134748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134748_0x134748");
#endif

    ctx->pc = 0x134748u;

    // 0x134748: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13474c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x13474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x134750: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x134754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x134754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x134758: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x134758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13475c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x13475cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x134760: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x134760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x134764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13476c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134770: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134778: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13477c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134780: 0xe4600d9c  swc1        $f0, 0xD9C($v1)
    ctx->pc = 0x134780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3484), bits); }
    // 0x134784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134788: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13478c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134790: 0xe46013dc  swc1        $f0, 0x13DC($v1)
    ctx->pc = 0x134790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5084), bits); }
    // 0x134794: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134798: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13479c: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x13479cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1347a0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1347a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1347a4: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x1347a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1347a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347ac: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1347acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347b0: 0x94830dc0  lhu         $v1, 0xDC0($a0)
    ctx->pc = 0x1347b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3520)));
    // 0x1347b4: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1347b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1347b8: 0xa4830dc0  sh          $v1, 0xDC0($a0)
    ctx->pc = 0x1347b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3520), (uint16_t)GPR_U32(ctx, 3));
    // 0x1347bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347c0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347c4: 0x94831400  lhu         $v1, 0x1400($a0)
    ctx->pc = 0x1347c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x1347c8: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1347c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1347cc: 0xa4831400  sh          $v1, 0x1400($a0)
    ctx->pc = 0x1347ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1347d0: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x1347D0u;
    {
        const bool branch_taken_0x1347d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347d0) {
            ctx->pc = 0x134EE8u;
            return;
        }
    }
    ctx->pc = 0x1347D8u;
}
