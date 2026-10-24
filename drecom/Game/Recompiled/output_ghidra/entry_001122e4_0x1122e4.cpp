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

// Function: entry_001122e4
// Address: 0x1122e4 - 0x112304
void entry_001122e4_0x1122e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001122e4_0x1122e4");
#endif

    ctx->pc = 0x1122e4u;

    // 0x1122e4: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1122e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1122e8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1122e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1122ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1122ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1122f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1122f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1122f4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1122f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1122f8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1122f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1122fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1122fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112300: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x112300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x112304u;
}
