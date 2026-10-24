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

// Function: R106_sword_light_init
// Address: 0x27e260 - 0x27e384
void R106_sword_light_init_0x27e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_sword_light_init_0x27e260");
#endif

    switch (ctx->pc) {
        case 0x27e2b0u: goto label_27e2b0;
        case 0x27e304u: goto label_27e304;
        default: break;
    }

    ctx->pc = 0x27e260u;

    // 0x27e260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27e264: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27e268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e26c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e270: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x27e270u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27e274: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27e274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27e278: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27e278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27e27c: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x27E27Cu;
    {
        const bool branch_taken_0x27e27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e27c) {
            ctx->pc = 0x27E370u;
            goto label_27e370;
        }
    }
    ctx->pc = 0x27E284u;
    // 0x27e284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27e284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27e288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e28c: 0x0  nop
    ctx->pc = 0x27e28cu;
    // NOP
    // 0x27e290: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27e290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27e294: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27e298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e29c: 0x0  nop
    ctx->pc = 0x27e29cu;
    // NOP
    // 0x27e2a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27e2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27e2a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e2a8: 0xc05da88  jal         func_176A20
    ctx->pc = 0x27E2A8u;
    SET_GPR_U32(ctx, 31, 0x27E2B0u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x27E2A8u, 0x27E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2B0u;
label_27e2b0:
    // 0x27e2b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e2b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e2b8: 0xa4221b46  sh          $v0, 0x1B46($at)
    ctx->pc = 0x27e2b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B46u, _value); } while (0);
    // 0x27e2bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e2c0: 0x94221b46  lhu         $v0, 0x1B46($at)
    ctx->pc = 0x27e2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B46u));
    // 0x27e2c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27e2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e2c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x27e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27e2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e2d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27e2d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27e2d8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x27e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x27e2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e2e0: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x27e2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x27e2e4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x27e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x27e2e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27e2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27e2ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27e2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27e2f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e2f4: 0x94221b46  lhu         $v0, 0x1B46($at)
    ctx->pc = 0x27e2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B46u));
    // 0x27e2f8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27e2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e2fc: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x27E2FCu;
    SET_GPR_U32(ctx, 31, 0x27E304u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x27E2FCu, 0x27E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E304u;
label_27e304:
    // 0x27e304: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x27e304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x27e308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e30c: 0x0  nop
    ctx->pc = 0x27e30cu;
    // NOP
    // 0x27e310: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x27e310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x27e314: 0x3c034344  lui         $v1, 0x4344
    ctx->pc = 0x27e314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17220 << 16));
    // 0x27e318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e31c: 0x0  nop
    ctx->pc = 0x27e31cu;
    // NOP
    // 0x27e320: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x27e320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x27e324: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x27e324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x27e328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e32c: 0x0  nop
    ctx->pc = 0x27e32cu;
    // NOP
    // 0x27e330: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x27e330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x27e334: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x27e338: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27e338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e33c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x27e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e340: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27e340u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27e344: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x27e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27e348: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x27e348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x27e34c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27e34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e350: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x27e350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e354: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27e354u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27e358: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x27e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x27e35c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x27e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x27e360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27e360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e364: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x27e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e368: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27e368u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27e36c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x27e36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_27e370:
    // 0x27e370: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27e370u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e378: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27e378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e37c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E384u;
}
