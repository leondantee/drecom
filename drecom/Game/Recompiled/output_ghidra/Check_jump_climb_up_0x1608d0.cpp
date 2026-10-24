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

// Function: Check_jump_climb_up
// Address: 0x1608d0 - 0x160a50
void Check_jump_climb_up_0x1608d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_jump_climb_up_0x1608d0");
#endif

    switch (ctx->pc) {
        case 0x160900u: goto label_160900;
        case 0x160950u: goto label_160950;
        default: break;
    }

    ctx->pc = 0x1608d0u;

    // 0x1608d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1608d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1608d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1608d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1608d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1608d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1608dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1608dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1608e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1608e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1608e4: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1608e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1608e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1608ec: 0x2451eea0  addiu       $s1, $v0, -0x1160
    ctx->pc = 0x1608ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x1608f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1608f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1608f4: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x1608f4u;
    { uint32_t bits = FAST_READ32(0x3EEEB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1608f8: 0xc067844  jal         func_19E110
    ctx->pc = 0x1608F8u;
    SET_GPR_U32(ctx, 31, 0x160900u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x1608F8u, 0x160900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160900u;
label_160900:
    // 0x160900: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x160904: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x160904u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160908: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16090c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16090cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x160910: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x160910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160914: 0x3c02444a  lui         $v0, 0x444A
    ctx->pc = 0x160914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17482 << 16));
    // 0x160918: 0x3442208b  ori         $v0, $v0, 0x208B
    ctx->pc = 0x160918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8331);
    // 0x16091c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16091cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160920: 0x0  nop
    ctx->pc = 0x160920u;
    // NOP
    // 0x160924: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x160928: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x160928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x16092c: 0xc6011284  lwc1        $f1, 0x1284($s0)
    ctx->pc = 0x16092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160930: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x160930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160934: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x160938: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x160938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x16093c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x16093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x160940: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x160940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160944: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x160944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x160948: 0xc057f10  jal         func_15FC40
    ctx->pc = 0x160948u;
    SET_GPR_U32(ctx, 31, 0x160950u);
    ctx->pc = 0x15FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC40u, 0x160948u, 0x160950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160950u;
label_160950:
    // 0x160950: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x160950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x160954: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160958: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16095c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16095cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160960: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x160960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160964: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x160964u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160968: 0x0  nop
    ctx->pc = 0x160968u;
    // NOP
    // 0x16096c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16096Cu;
    {
        const bool branch_taken_0x16096c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16096c) {
            ctx->pc = 0x160988u;
            goto label_160988;
        }
    }
    ctx->pc = 0x160974u;
    // 0x160974: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160978: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16097c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16097cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160980: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x160980u;
    {
        const bool branch_taken_0x160980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160980) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x160988u;
label_160988:
    // 0x160988: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x160988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16098c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x16098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160990: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160994: 0x0  nop
    ctx->pc = 0x160994u;
    // NOP
    // 0x160998: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x160998u;
    {
        const bool branch_taken_0x160998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160998) {
            ctx->pc = 0x1609E4u;
            goto label_1609e4;
        }
    }
    ctx->pc = 0x1609A0u;
    // 0x1609a0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1609a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1609a4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1609a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1609a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1609a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1609ac: 0x0  nop
    ctx->pc = 0x1609acu;
    // NOP
    // 0x1609b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1609B0u;
    {
        const bool branch_taken_0x1609b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1609b0) {
            ctx->pc = 0x1609D0u;
            goto label_1609d0;
        }
    }
    ctx->pc = 0x1609B8u;
    // 0x1609b8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1609b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1609bc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1609bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1609c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1609c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1609c4: 0x0  nop
    ctx->pc = 0x1609c4u;
    // NOP
    // 0x1609c8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1609C8u;
    {
        const bool branch_taken_0x1609c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1609c8) {
            ctx->pc = 0x160A28u;
            goto label_160a28;
        }
    }
    ctx->pc = 0x1609D0u;
label_1609d0:
    // 0x1609d0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1609d4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1609d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1609d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1609d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1609dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1609DCu;
    {
        const bool branch_taken_0x1609dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1609dc) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x1609E4u;
label_1609e4:
    // 0x1609e4: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1609e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1609e8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1609e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1609ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1609ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1609f0: 0x0  nop
    ctx->pc = 0x1609f0u;
    // NOP
    // 0x1609f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1609F4u;
    {
        const bool branch_taken_0x1609f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1609f4) {
            ctx->pc = 0x160A14u;
            goto label_160a14;
        }
    }
    ctx->pc = 0x1609FCu;
    // 0x1609fc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1609fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160a00: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x160a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160a04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160a08: 0x0  nop
    ctx->pc = 0x160a08u;
    // NOP
    // 0x160a0c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x160A0Cu;
    {
        const bool branch_taken_0x160a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160a0c) {
            ctx->pc = 0x160A28u;
            goto label_160a28;
        }
    }
    ctx->pc = 0x160A14u;
label_160a14:
    // 0x160a14: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160a18: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160a20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x160A20u;
    {
        const bool branch_taken_0x160a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a20) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x160A28u;
label_160a28:
    // 0x160a28: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160a2c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160a30: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x160a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160a34: 0x0  nop
    ctx->pc = 0x160a34u;
    // NOP
label_160a38:
    // 0x160a38: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x160a38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160a44: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x160a48: 0x3e00008  jr          $ra
    ctx->pc = 0x160A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160A50u;
}
