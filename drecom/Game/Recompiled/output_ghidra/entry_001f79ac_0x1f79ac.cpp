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

// Function: entry_001f79ac
// Address: 0x1f79ac - 0x1f79e0
void entry_001f79ac_0x1f79ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f79ac_0x1f79ac");
#endif

    ctx->pc = 0x1f79acu;

    // 0x1f79ac: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1f79acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f79b0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f79b4: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f79b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1f79b8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1f79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f79bc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f79c0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f79c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f79c4: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x1f79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f79c8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f79cc: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x1f79ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x1f79d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f79d4: 0x94650050  lhu         $a1, 0x50($v1)
    ctx->pc = 0x1f79d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1f79d8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1f79d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f79dc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1f79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    ctx->pc = 0x1f79e0u;
}
