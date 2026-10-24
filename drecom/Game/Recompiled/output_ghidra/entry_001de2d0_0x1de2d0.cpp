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

// Function: entry_001de2d0
// Address: 0x1de2d0 - 0x1de33c
void entry_001de2d0_0x1de2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de2d0_0x1de2d0");
#endif

    switch (ctx->pc) {
        case 0x1de2dcu: goto label_1de2dc;
        default: break;
    }

    ctx->pc = 0x1de2d0u;

    // 0x1de2d0: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x1de2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de2d4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DE2D4u;
    SET_GPR_U32(ctx, 31, 0x1DE2DCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DE2D4u, 0x1DE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2DCu;
label_1de2dc:
    // 0x1de2dc: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1de2dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de2e0: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1de2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1de2e4: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1de2e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de2e8: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x1de2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1de2ec: 0xaee2006c  sw          $v0, 0x6C($s7)
    ctx->pc = 0x1de2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 108), GPR_U32(ctx, 2));
    // 0x1de2f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1de2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de2f4: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x1de2f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de2f8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1de2f8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1de2fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de300: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de304: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1de304u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de308: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1de308u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1de30c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de310: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de310u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de314: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x1de314u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de318: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1de318u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x1de31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de320: 0x0  nop
    ctx->pc = 0x1de320u;
    // NOP
    // 0x1de324: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1de328: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1de32c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1de32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1de330: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1de330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de334: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1DE334u;
    {
        const bool branch_taken_0x1de334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de334) {
            ctx->pc = 0x1DE520u;
            return;
        }
    }
    ctx->pc = 0x1DE33Cu;
}
