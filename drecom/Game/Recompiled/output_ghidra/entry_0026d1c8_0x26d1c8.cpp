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

// Function: entry_0026d1c8
// Address: 0x26d1c8 - 0x26d29c
void entry_0026d1c8_0x26d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d1c8_0x26d1c8");
#endif

    switch (ctx->pc) {
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d204u: goto label_26d204;
        case 0x26d220u: goto label_26d220;
        case 0x26d240u: goto label_26d240;
        case 0x26d258u: goto label_26d258;
        default: break;
    }

    ctx->pc = 0x26d1c8u;

    // 0x26d1c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d1cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d1d0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x26d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x26d1d4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x26d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x26d1d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26d1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26d1dc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x26d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26d1e0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x26d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26d1e4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26D1E4u;
    SET_GPR_U32(ctx, 31, 0x26D1ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26D1E4u, 0x26D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1ECu;
label_26d1ec:
    // 0x26d1ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d1f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x26d1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x26d1f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d1f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d1fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26D1FCu;
    SET_GPR_U32(ctx, 31, 0x26D204u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26D1FCu, 0x26D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D204u;
label_26d204:
    // 0x26d204: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d208: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d20c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d210: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x26d210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x26d214: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d218: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26D218u;
    SET_GPR_U32(ctx, 31, 0x26D220u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26D218u, 0x26D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D220u;
label_26d220:
    // 0x26d220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d224: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d228: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x26d228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x26d22c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d230: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d234: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d238: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26D238u;
    SET_GPR_U32(ctx, 31, 0x26D240u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26D238u, 0x26D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D240u;
label_26d240:
    // 0x26d240: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d244: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d248: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26d248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26d24c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26d250: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26D250u;
    SET_GPR_U32(ctx, 31, 0x26D258u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26D250u, 0x26D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D258u;
label_26d258:
    // 0x26d258: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26d258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26d25c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26d260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26d264: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d268: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26d268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d26c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d270: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d278: 0x0  nop
    ctx->pc = 0x26d278u;
    // NOP
    // 0x26d27c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26D27Cu;
    {
        const bool branch_taken_0x26d27c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d27c) {
            ctx->pc = 0x26D29Cu;
            return;
        }
    }
    ctx->pc = 0x26D284u;
    // 0x26d284: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26d288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26d28c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d290: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d294: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d298: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26d298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x26d29cu;
}
