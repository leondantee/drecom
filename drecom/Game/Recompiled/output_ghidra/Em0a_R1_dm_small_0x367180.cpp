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

// Function: Em0a_R1_dm_small
// Address: 0x367180 - 0x3672b4
void Em0a_R1_dm_small_0x367180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_dm_small_0x367180");
#endif

    switch (ctx->pc) {
        case 0x3671ccu: goto label_3671cc;
        case 0x367258u: goto label_367258;
        default: break;
    }

    ctx->pc = 0x367180u;

    // 0x367180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x367184: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x367184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x367188: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x367188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36718c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367190: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x367190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367194: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x367194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x367198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36719c: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x36719Cu;
    {
        const bool branch_taken_0x36719c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36719c) {
            ctx->pc = 0x367270u;
            goto label_367270;
        }
    }
    ctx->pc = 0x3671A4u;
    // 0x3671a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3671A4u;
    {
        const bool branch_taken_0x3671a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3671a4) {
            ctx->pc = 0x3671B4u;
            goto label_3671b4;
        }
    }
    ctx->pc = 0x3671ACu;
    // 0x3671ac: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3671ACu;
    {
        const bool branch_taken_0x3671ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3671ac) {
            ctx->pc = 0x3672A4u;
            goto label_3672a4;
        }
    }
    ctx->pc = 0x3671B4u;
label_3671b4:
    // 0x3671b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3671b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3671b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3671b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3671bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3671bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3671c0: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x3671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3671c4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x3671C4u;
    SET_GPR_U32(ctx, 31, 0x3671CCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x3671C4u, 0x3671CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671CCu;
label_3671cc:
    // 0x3671cc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3671ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3671d0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x3671d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3671d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3671d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3671d8: 0x0  nop
    ctx->pc = 0x3671d8u;
    // NOP
    // 0x3671dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3671dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3671e0: 0x0  nop
    ctx->pc = 0x3671e0u;
    // NOP
    // 0x3671e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3671E4u;
    {
        const bool branch_taken_0x3671e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3671e4) {
            ctx->pc = 0x3671F8u;
            goto label_3671f8;
        }
    }
    ctx->pc = 0x3671ECu;
    // 0x3671ec: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3671ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3671f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3671f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3671f4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3671f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3671f8:
    // 0x3671f8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x3671f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3671fc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3671fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x367200: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x367200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x367204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x367204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367208: 0x0  nop
    ctx->pc = 0x367208u;
    // NOP
    // 0x36720c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36720cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367210: 0x0  nop
    ctx->pc = 0x367210u;
    // NOP
    // 0x367214: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x367214u;
    {
        const bool branch_taken_0x367214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367214) {
            ctx->pc = 0x367234u;
            goto label_367234;
        }
    }
    ctx->pc = 0x36721Cu;
    // 0x36721c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367220: 0xc46011f8  lwc1        $f0, 0x11F8($v1)
    ctx->pc = 0x367220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367228: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x367228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x36722c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36722Cu;
    {
        const bool branch_taken_0x36722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36722c) {
            ctx->pc = 0x367260u;
            goto label_367260;
        }
    }
    ctx->pc = 0x367234u;
label_367234:
    // 0x367234: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x367234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367238: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x367238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36723c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x367240: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x367244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367248: 0x0  nop
    ctx->pc = 0x367248u;
    // NOP
    // 0x36724c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x36724cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x367250: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x367250u;
    SET_GPR_U32(ctx, 31, 0x367258u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x367250u, 0x367258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367258u;
label_367258:
    // 0x367258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36725c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x36725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_367260:
    // 0x367260: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x367260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367264: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x367268: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36726c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x36726cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_367270:
    // 0x367270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x367270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367278: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x367278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36727c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367280: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x367280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x367284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367288: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x367288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36728c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367290: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x367290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x367294: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367298: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x367298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36729c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36729Cu;
    {
        const bool branch_taken_0x36729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36729c) {
            ctx->pc = 0x3672A4u;
            goto label_3672a4;
        }
    }
    ctx->pc = 0x3672A4u;
label_3672a4:
    // 0x3672a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3672a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3672a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3672a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3672ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3672ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3672ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3672B4u;
}
