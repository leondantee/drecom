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

// Function: entry_00187900
// Address: 0x187900 - 0x1879bc
void entry_00187900_0x187900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187900_0x187900");
#endif

    switch (ctx->pc) {
        case 0x187954u: goto label_187954;
        case 0x187970u: goto label_187970;
        case 0x187988u: goto label_187988;
        default: break;
    }

    ctx->pc = 0x187900u;

    // 0x187900: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187904: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187904u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x187908: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x187908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18790c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18790cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x187910: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x187910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x187914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187918: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x187918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18791c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18791cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x187920: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x187924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187928: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x187928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x18792c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18792cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x187930: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187934: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x187934u;
    {
        const bool branch_taken_0x187934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187934) {
            ctx->pc = 0x187A54u;
            return;
        }
    }
    ctx->pc = 0x18793Cu;
    // 0x18793c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187940: 0xc42cef90  lwc1        $f12, -0x1070($at)
    ctx->pc = 0x187940u;
    { uint32_t bits = FAST_READ32(0x3EEF90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x187944: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187948: 0xc42def98  lwc1        $f13, -0x1068($at)
    ctx->pc = 0x187948u;
    { uint32_t bits = FAST_READ32(0x3EEF98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18794c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x18794Cu;
    SET_GPR_U32(ctx, 31, 0x187954u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x18794Cu, 0x187954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187954u;
label_187954:
    // 0x187954: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x187954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x187958: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18795c: 0xc421ef44  lwc1        $f1, -0x10BC($at)
    ctx->pc = 0x18795cu;
    { uint32_t bits = FAST_READ32(0x3EEF44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187960: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x187960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187964: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x187964u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x187968: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x187968u;
    SET_GPR_U32(ctx, 31, 0x187970u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x187968u, 0x187970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187970u;
label_187970:
    // 0x187970: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x187970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x187974: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187978: 0xc42c0370  lwc1        $f12, 0x370($at)
    ctx->pc = 0x187978u;
    { uint32_t bits = FAST_READ32(0x480370u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18797c: 0xc7ad007c  lwc1        $f13, 0x7C($sp)
    ctx->pc = 0x18797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x187980: 0xc058f20  jal         func_163C80
    ctx->pc = 0x187980u;
    SET_GPR_U32(ctx, 31, 0x187988u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x187980u, 0x187988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187988u;
label_187988:
    // 0x187988: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x187988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x18798c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x18798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x187990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187994: 0x0  nop
    ctx->pc = 0x187994u;
    // NOP
    // 0x187998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18799c: 0x0  nop
    ctx->pc = 0x18799cu;
    // NOP
    // 0x1879a0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1879A0u;
    {
        const bool branch_taken_0x1879a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1879a0) {
            ctx->pc = 0x1879BCu;
            return;
        }
    }
    ctx->pc = 0x1879A8u;
    // 0x1879a8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1879ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1879acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1879b0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1879b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1879b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1879b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1879b8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1879b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->pc = 0x1879bcu;
}
