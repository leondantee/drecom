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

// Function: entry_003751e8
// Address: 0x3751e8 - 0x3752f0
void entry_003751e8_0x3751e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003751e8_0x3751e8");
#endif

    switch (ctx->pc) {
        case 0x375254u: goto label_375254;
        case 0x37528cu: goto label_37528c;
        case 0x3752acu: goto label_3752ac;
        default: break;
    }

    ctx->pc = 0x3751e8u;

    // 0x3751e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3751e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3751ec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3751ecu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3751f0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3751f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3751f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3751f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751f8: 0x0  nop
    ctx->pc = 0x3751f8u;
    // NOP
    // 0x3751fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3751fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375200: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375204: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375208: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x37520c: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x37520cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375210: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375218: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37521c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x37521cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375224: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375228: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x37522c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37522cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375230: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375234: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375238: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37523c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37523cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375240: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375244: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375248: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x37524c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x37524Cu;
    SET_GPR_U32(ctx, 31, 0x375254u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x37524Cu, 0x375254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375254u;
label_375254:
    // 0x375254: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375258: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375258u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37525c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375264: 0x0  nop
    ctx->pc = 0x375264u;
    // NOP
    // 0x375268: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37526c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375270: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375278: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37527c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375280: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375280u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375284: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375284u;
    SET_GPR_U32(ctx, 31, 0x37528Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375284u, 0x37528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37528Cu;
label_37528c:
    // 0x37528c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375290: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375298: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37529c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x37529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3752a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3752a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3752a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3752A4u;
    SET_GPR_U32(ctx, 31, 0x3752ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3752A4u, 0x3752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752ACu;
label_3752ac:
    // 0x3752ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752b0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3752b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3752b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752b8: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3752b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3752bc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3752bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3752c0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3752c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3752c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3752c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3752c8: 0x0  nop
    ctx->pc = 0x3752c8u;
    // NOP
    // 0x3752cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3752ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3752d0: 0x0  nop
    ctx->pc = 0x3752d0u;
    // NOP
    // 0x3752d4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3752D4u;
    {
        const bool branch_taken_0x3752d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3752d4) {
            ctx->pc = 0x3752F0u;
            return;
        }
    }
    ctx->pc = 0x3752DCu;
    // 0x3752dc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3752dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3752e0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3752e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3752e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3752e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3752e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3752ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x3752f0u;
}
