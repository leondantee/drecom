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

// Function: entry_0020f3a4
// Address: 0x20f3a4 - 0x20f434
void entry_0020f3a4_0x20f3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f3a4_0x20f3a4");
#endif

    ctx->pc = 0x20f3a4u;

    // 0x20f3a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20f3a8: 0x8c239540  lw          $v1, -0x6AC0($at)
    ctx->pc = 0x20f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619540u));
    // 0x20f3ac: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x20F3ACu;
    {
        const bool branch_taken_0x20f3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f3ac) {
            ctx->pc = 0x20F470u;
            return;
        }
    }
    ctx->pc = 0x20F3B4u;
    // 0x20f3b4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f3b8: 0x8c851310  lw          $a1, 0x1310($a0)
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4880)));
    // 0x20f3bc: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x20f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f3c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x20f3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f3c4: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f3c8: 0xe4ce0180  swc1        $f14, 0x180($a2)
    ctx->pc = 0x20f3c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x20f3cc: 0x3c03c2ee  lui         $v1, 0xC2EE
    ctx->pc = 0x20f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49902 << 16));
    // 0x20f3d0: 0x34645555  ori         $a0, $v1, 0x5555
    ctx->pc = 0x20f3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x20f3d4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x20f3d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f3d8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f3dc: 0xe46c0184  swc1        $f12, 0x184($v1)
    ctx->pc = 0x20f3dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x20f3e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f3e4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f3e8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x20f3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x20f3ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20f3f0: 0xc4219548  lwc1        $f1, -0x6AB8($at)
    ctx->pc = 0x20f3f0u;
    { uint32_t bits = FAST_READ32(0x619548u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f3f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x20f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x20f3f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20f3f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f3fc: 0x0  nop
    ctx->pc = 0x20f3fcu;
    // NOP
    // 0x20f400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f404: 0x0  nop
    ctx->pc = 0x20f404u;
    // NOP
    // 0x20f408: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x20F408u;
    {
        const bool branch_taken_0x20f408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f408) {
            ctx->pc = 0x20F434u;
            return;
        }
    }
    ctx->pc = 0x20F410u;
    // 0x20f410: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20f414: 0xc4209548  lwc1        $f0, -0x6AB8($at)
    ctx->pc = 0x20f414u;
    { uint32_t bits = FAST_READ32(0x619548u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f418: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x20f418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x20f41c: 0x34a6cccd  ori         $a2, $a1, 0xCCCD
    ctx->pc = 0x20f41cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x20f420: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20f420u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f424: 0x0  nop
    ctx->pc = 0x20f424u;
    // NOP
    // 0x20f428: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x20f428u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x20f42c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20f430: 0xe42c9548  swc1        $f12, -0x6AB8($at)
    ctx->pc = 0x20f430u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619548u, _value); } while (0); }
    ctx->pc = 0x20f434u;
}
