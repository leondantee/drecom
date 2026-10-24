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

// Function: entry_0020e8ec
// Address: 0x20e8ec - 0x20e93c
void entry_0020e8ec_0x20e8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e8ec_0x20e8ec");
#endif

    ctx->pc = 0x20e8ecu;

    // 0x20e8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e8f4: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e8f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20e8fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e904: 0xa4640096  sh          $a0, 0x96($v1)
    ctx->pc = 0x20e904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x20e908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e90c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e910: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x20e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x20e914: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e918: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x20e918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e91c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e920: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20e920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20e924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e928: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20e928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e92c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e930: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20e930u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e934: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x20E934u;
    {
        const bool branch_taken_0x20e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e934) {
            ctx->pc = 0x20EA3Cu;
            return;
        }
    }
    ctx->pc = 0x20E93Cu;
}
