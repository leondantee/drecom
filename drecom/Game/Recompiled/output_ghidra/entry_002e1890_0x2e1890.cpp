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

// Function: entry_002e1890
// Address: 0x2e1890 - 0x2e1910
void entry_002e1890_0x2e1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1890_0x2e1890");
#endif

    switch (ctx->pc) {
        case 0x2e18a0u: goto label_2e18a0;
        case 0x2e18b4u: goto label_2e18b4;
        case 0x2e18c0u: goto label_2e18c0;
        case 0x2e18f8u: goto label_2e18f8;
        default: break;
    }

    ctx->pc = 0x2e1890u;

    // 0x2e1890: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1898: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E1898u;
    SET_GPR_U32(ctx, 31, 0x2E18A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E1898u, 0x2E18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18A0u;
label_2e18a0:
    // 0x2e18a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e18a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e18a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e18a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e18a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e18ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E18ACu;
    SET_GPR_U32(ctx, 31, 0x2E18B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E18ACu, 0x2E18B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18B4u;
label_2e18b4:
    // 0x2e18b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e18b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E18B8u;
    SET_GPR_U32(ctx, 31, 0x2E18C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E18B8u, 0x2E18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18C0u;
label_2e18c0:
    // 0x2e18c0: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x2e18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e18c4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2e18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2e18c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e18c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e18cc: 0x0  nop
    ctx->pc = 0x2e18ccu;
    // NOP
    // 0x2e18d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e18d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e18d4: 0x0  nop
    ctx->pc = 0x2e18d4u;
    // NOP
    // 0x2e18d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2E18D8u;
    {
        const bool branch_taken_0x2e18d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e18d8) {
            ctx->pc = 0x2E1910u;
            return;
        }
    }
    ctx->pc = 0x2E18E0u;
    // 0x2e18e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e18e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e18e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e18e8: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2e18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e18ec: 0xc64c007c  lwc1        $f12, 0x7C($s2)
    ctx->pc = 0x2e18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e18f0: 0xc0c9144  jal         func_324510
    ctx->pc = 0x2E18F0u;
    SET_GPR_U32(ctx, 31, 0x2E18F8u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E18F0u, 0x2E18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18F8u;
label_2e18f8:
    // 0x2e18f8: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x2e18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e18fc: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2e18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2e1900: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e1900u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1904: 0x0  nop
    ctx->pc = 0x2e1904u;
    // NOP
    // 0x2e1908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e1908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e190c: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x2e190cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    ctx->pc = 0x2e1910u;
}
