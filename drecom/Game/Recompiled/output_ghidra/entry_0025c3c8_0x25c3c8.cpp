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

// Function: entry_0025c3c8
// Address: 0x25c3c8 - 0x25c408
void entry_0025c3c8_0x25c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c3c8_0x25c3c8");
#endif

    ctx->pc = 0x25c3c8u;

    // 0x25c3c8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c3cc: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x25c3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25C3D0u;
    {
        const bool branch_taken_0x25c3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3d0) {
            ctx->pc = 0x25C408u;
            return;
        }
    }
    ctx->pc = 0x25C3D8u;
    // 0x25c3d8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x25c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c3dc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c3e0: 0x8c850330  lw          $a1, 0x330($a0)
    ctx->pc = 0x25c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x25c3e4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25c3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x25c3e8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x25c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c3ec: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25c3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c3f0: 0x8cc40330  lw          $a0, 0x330($a2)
    ctx->pc = 0x25c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 816)));
    // 0x25c3f4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25c3f8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x25c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c3fc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c400: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x25c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x25c404: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25c404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x25c408u;
}
