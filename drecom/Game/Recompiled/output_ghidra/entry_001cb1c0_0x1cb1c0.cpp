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

// Function: entry_001cb1c0
// Address: 0x1cb1c0 - 0x1cb2a4
void entry_001cb1c0_0x1cb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb1c0_0x1cb1c0");
#endif

    switch (ctx->pc) {
        case 0x1cb1e4u: goto label_1cb1e4;
        case 0x1cb210u: goto label_1cb210;
        case 0x1cb228u: goto label_1cb228;
        case 0x1cb234u: goto label_1cb234;
        case 0x1cb248u: goto label_1cb248;
        case 0x1cb260u: goto label_1cb260;
        default: break;
    }

    ctx->pc = 0x1cb1c0u;

    // 0x1cb1c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1c8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1cb1cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cb1d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cb1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cb1d4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cb1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb1d8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cb1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb1dc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CB1DCu;
    SET_GPR_U32(ctx, 31, 0x1CB1E4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CB1DCu, 0x1CB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1E4u;
label_1cb1e4:
    // 0x1cb1e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cb1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cb1ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1f4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1cb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1cb1f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cb1fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cb1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cb200: 0xc48c1b50  lwc1        $f12, 0x1B50($a0)
    ctx->pc = 0x1cb200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb204: 0xc46d1b58  lwc1        $f13, 0x1B58($v1)
    ctx->pc = 0x1cb204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb208: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CB208u;
    SET_GPR_U32(ctx, 31, 0x1CB210u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CB208u, 0x1CB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB210u;
label_1cb210:
    // 0x1cb210: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb214: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x1cb214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x1cb218: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb21c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cb220: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CB220u;
    SET_GPR_U32(ctx, 31, 0x1CB228u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CB220u, 0x1CB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB228u;
label_1cb228:
    // 0x1cb228: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb22c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x1CB22Cu;
    SET_GPR_U32(ctx, 31, 0x1CB234u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x1CB22Cu, 0x1CB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB234u;
label_1cb234:
    // 0x1cb234: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb238: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb23c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cb23cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb240: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CB240u;
    SET_GPR_U32(ctx, 31, 0x1CB248u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CB240u, 0x1CB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB248u;
label_1cb248:
    // 0x1cb248: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb24c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb250: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cb250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cb254: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1cb254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1cb258: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CB258u;
    SET_GPR_U32(ctx, 31, 0x1CB260u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CB258u, 0x1CB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB260u;
label_1cb260:
    // 0x1cb260: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb264: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb26c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb270: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cb270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb274: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb278: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb27c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb280: 0x0  nop
    ctx->pc = 0x1cb280u;
    // NOP
    // 0x1cb284: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB284u;
    {
        const bool branch_taken_0x1cb284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb284) {
            ctx->pc = 0x1CB2A4u;
            return;
        }
    }
    ctx->pc = 0x1CB28Cu;
    // 0x1cb28c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb294: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb298: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb29c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1cb2a4u;
}
