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

// Function: entry_0018f7c0
// Address: 0x18f7c0 - 0x18f810
void entry_0018f7c0_0x18f7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f7c0_0x18f7c0");
#endif

    ctx->pc = 0x18f7c0u;

    // 0x18f7c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7c4: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x18f7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x18f7c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18f7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f7cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f7d0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F7D0u;
    {
        const bool branch_taken_0x18f7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f7d0) {
            ctx->pc = 0x18F810u;
            return;
        }
    }
    ctx->pc = 0x18F7D8u;
    // 0x18f7d8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7dc: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7e0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f7e4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7e8: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7ec: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f7f0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7f4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7f8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f7fc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f800: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f804: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x18f808: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18F808u;
    {
        const bool branch_taken_0x18f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f808) {
            ctx->pc = 0x18F840u;
            return;
        }
    }
    ctx->pc = 0x18F810u;
}
