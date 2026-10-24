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

// Function: entry_0018f770
// Address: 0x18f770 - 0x18f7c0
void entry_0018f770_0x18f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f770_0x18f770");
#endif

    ctx->pc = 0x18f770u;

    // 0x18f770: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f774: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x18f774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x18f778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18f778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f77c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f780: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F780u;
    {
        const bool branch_taken_0x18f780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f780) {
            ctx->pc = 0x18F7C0u;
            return;
        }
    }
    ctx->pc = 0x18F788u;
    // 0x18f788: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f78c: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f790: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f794: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f798: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f79c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f7a0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7a4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7a8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f7ac: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7b0: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7b4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x18f7b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18F7B8u;
    {
        const bool branch_taken_0x18f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f7b8) {
            ctx->pc = 0x18F840u;
            return;
        }
    }
    ctx->pc = 0x18F7C0u;
}
