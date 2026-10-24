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

// Function: entry_001343f0
// Address: 0x1343f0 - 0x134420
void entry_001343f0_0x1343f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001343f0_0x1343f0");
#endif

    ctx->pc = 0x1343f0u;

    // 0x1343f0: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1343f4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134400: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134404: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134408: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x134408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x13440c: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x13440cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x134410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134414: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134418: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13441c: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x13441cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    ctx->pc = 0x134420u;
}
