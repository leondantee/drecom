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

// Function: e2d_id61_type0a
// Address: 0x2b9410 - 0x2b9528
void e2d_id61_type0a_0x2b9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type0a_0x2b9410");
#endif

    switch (ctx->pc) {
        case 0x2b9464u: goto label_2b9464;
        default: break;
    }

    ctx->pc = 0x2b9410u;

    // 0x2b9410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9414: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b9414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b9418: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b9418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b941c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9424: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9428: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b9428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b942c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9434: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9438: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b9438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b943c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9448: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b9448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b944c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b9450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9458: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b9458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b945c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B945Cu;
    SET_GPR_U32(ctx, 31, 0x2B9464u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B945Cu, 0x2B9464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9464u;
label_2b9464:
    // 0x2b9464: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b9464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b9468: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b9468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b946c: 0x0  nop
    ctx->pc = 0x2b946cu;
    // NOP
    // 0x2b9470: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b9470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9474: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2b9474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2b9478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b947c: 0x0  nop
    ctx->pc = 0x2b947cu;
    // NOP
    // 0x2b9480: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b9480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b9484: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9488: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b948c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b9490: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9494: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9498: 0x3c033f0c  lui         $v1, 0x3F0C
    ctx->pc = 0x2b9498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16140 << 16));
    // 0x2b949c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b949cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b94a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b94a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b94a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b94a8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b94a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b94ac: 0x3c033f38  lui         $v1, 0x3F38
    ctx->pc = 0x2b94acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16184 << 16));
    // 0x2b94b0: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b94b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b94b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b94b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b94b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b94bc: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b94bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b94c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b94c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b94c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b94c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b94c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b94cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b94d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b94d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b94d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b94d8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b94dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b94dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b94e0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b94e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b94e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b94e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b94ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b94ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b94f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b94f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b94f4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b94f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b94f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b94fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b94fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b9500: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b9500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b9504: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b9504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9508: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b9508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b950c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b950cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9510: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9514: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b9514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9518: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b9518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b951c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b951cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9520: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9528u;
}
