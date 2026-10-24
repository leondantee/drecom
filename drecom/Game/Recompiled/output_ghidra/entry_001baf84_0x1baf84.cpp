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

// Function: entry_001baf84
// Address: 0x1baf84 - 0x1bafbc
void entry_001baf84_0x1baf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baf84_0x1baf84");
#endif

    ctx->pc = 0x1baf84u;

    // 0x1baf84: 0x3c034309  lui         $v1, 0x4309
    ctx->pc = 0x1baf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17161 << 16));
    // 0x1baf88: 0x3462b333  ori         $v0, $v1, 0xB333
    ctx->pc = 0x1baf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45875);
    // 0x1baf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baf90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf94: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1baf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1baf98: 0x3c0540a3  lui         $a1, 0x40A3
    ctx->pc = 0x1baf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16547 << 16));
    // 0x1baf9c: 0x34a43334  ori         $a0, $a1, 0x3334
    ctx->pc = 0x1baf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13108);
    // 0x1bafa0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bafa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bafa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bafa8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bafa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1bafac: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1bafacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1bafb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bafb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bafb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bafb8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1bafb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1bafbcu;
}
