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

// Function: Em0a_eye_r0_catch
// Address: 0x3692d0 - 0x36941c
void Em0a_eye_r0_catch_0x3692d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_catch_0x3692d0");
#endif

    switch (ctx->pc) {
        case 0x369400u: goto label_369400;
        default: break;
    }

    ctx->pc = 0x3692d0u;

    // 0x3692d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3692d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3692d4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3692d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3692d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3692d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3692dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3692dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3692e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3692e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3692e4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3692e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x3692e8: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x3692e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x3692ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3692ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3692f0: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x3692f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x3692f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3692f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3692f8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3692f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3692fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3692fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369300: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x369300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x369304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369308: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x369308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36930c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x36930cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369310: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x369310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x369314: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x369314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x369318: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x369318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36931c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x369320: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x369320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x369324: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x369324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x369328: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x369328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36932c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x369330: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x369330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x369334: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x369334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x369338: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x369338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36933c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369340: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x369340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x369344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369348: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x369348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36934c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x36934cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x369350: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369354: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x369354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x369358: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x369358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36935c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x369360: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x369360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369364: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x369364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x369368: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x369368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x36936c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36936cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x369370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x369370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369374: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x369374u;
    {
        const bool branch_taken_0x369374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x369374) {
            ctx->pc = 0x3693A8u;
            goto label_3693a8;
        }
    }
    ctx->pc = 0x36937Cu;
    // 0x36937c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36937Cu;
    {
        const bool branch_taken_0x36937c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36937c) {
            ctx->pc = 0x36938Cu;
            goto label_36938c;
        }
    }
    ctx->pc = 0x369384u;
    // 0x369384: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x369384u;
    {
        const bool branch_taken_0x369384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369384) {
            ctx->pc = 0x369400u;
            goto label_369400;
        }
    }
    ctx->pc = 0x36938Cu;
label_36938c:
    // 0x36938c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x36938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x369390: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x369390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x369394: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x369394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x369398: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x369398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36939c: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x36939cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3693a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3693a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3693a4: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x3693a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
label_3693a8:
    // 0x3693a8: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x3693a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x3693ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3693acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693b0: 0x0  nop
    ctx->pc = 0x3693b0u;
    // NOP
    // 0x3693b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3693b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3693b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3693b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693bc: 0x0  nop
    ctx->pc = 0x3693bcu;
    // NOP
    // 0x3693c0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3693c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3693c4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3693c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3693c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3693c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693cc: 0x0  nop
    ctx->pc = 0x3693ccu;
    // NOP
    // 0x3693d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3693d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3693d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3693d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3693d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3693d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693dc: 0x0  nop
    ctx->pc = 0x3693dcu;
    // NOP
    // 0x3693e0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3693e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3693e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3693e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3693e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3693e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3693ec: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3693ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3693f0: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x3693f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x3693f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3693f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3693f8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3693F8u;
    SET_GPR_U32(ctx, 31, 0x369400u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369400u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369400u) { return; }
    ctx->pc = 0x369400u;
label_369400:
    // 0x369400: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x369400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x369404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36940c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36940cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369410: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x369410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x369414: 0x3e00008  jr          $ra
    ctx->pc = 0x369414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36941Cu;
}
