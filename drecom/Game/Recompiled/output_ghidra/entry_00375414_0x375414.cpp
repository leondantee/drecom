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

// Function: entry_00375414
// Address: 0x375414 - 0x37551c
void entry_00375414_0x375414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375414_0x375414");
#endif

    switch (ctx->pc) {
        case 0x375480u: goto label_375480;
        case 0x3754b8u: goto label_3754b8;
        case 0x3754d8u: goto label_3754d8;
        default: break;
    }

    ctx->pc = 0x375414u;

    // 0x375414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375418: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375418u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37541c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375424: 0x0  nop
    ctx->pc = 0x375424u;
    // NOP
    // 0x375428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37542c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37542cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375430: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375434: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375438: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x37543c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37543cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375444: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375448: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37544c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375450: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x375454: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x375454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375458: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x37545c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x37545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375460: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375464: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x375468: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x375468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37546c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375470: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375474: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x375478: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x375478u;
    SET_GPR_U32(ctx, 31, 0x375480u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x375478u, 0x375480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375480u;
label_375480:
    // 0x375480: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375484: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375484u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375488: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x37548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375490: 0x0  nop
    ctx->pc = 0x375490u;
    // NOP
    // 0x375494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375498: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37549c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x37549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3754a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754a4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3754a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3754a8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3754a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3754ac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3754acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3754b0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3754B0u;
    SET_GPR_U32(ctx, 31, 0x3754B8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3754B0u, 0x3754B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754B8u;
label_3754b8:
    // 0x3754b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3754bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3754c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754c4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3754c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3754c8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3754c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3754cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3754ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3754d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3754D0u;
    SET_GPR_U32(ctx, 31, 0x3754D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3754D0u, 0x3754D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754D8u;
label_3754d8:
    // 0x3754d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754dc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3754dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3754e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754e4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3754e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3754e8: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3754e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3754ec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3754ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3754f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3754f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3754f4: 0x0  nop
    ctx->pc = 0x3754f4u;
    // NOP
    // 0x3754f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3754f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3754fc: 0x0  nop
    ctx->pc = 0x3754fcu;
    // NOP
    // 0x375500: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x375500u;
    {
        const bool branch_taken_0x375500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375500) {
            ctx->pc = 0x37551Cu;
            return;
        }
    }
    ctx->pc = 0x375508u;
    // 0x375508: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x37550c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x37550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375514: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375518: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x37551cu;
}
