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

// Function: Pl_swim_control
// Address: 0x26a8e0 - 0x26ada4
void Pl_swim_control_0x26a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_swim_control_0x26a8e0");
#endif

    switch (ctx->pc) {
        case 0x26a9d8u: goto label_26a9d8;
        case 0x26ad84u: goto label_26ad84;
        default: break;
    }

    ctx->pc = 0x26a8e0u;

    // 0x26a8e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26a8e4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x26a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x26a8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a8ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a8f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x26a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x26a8f8: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x26a8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x26a8fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x26a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x26a900: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x26a900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x26a904: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x26a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x26a908: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x26a908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x26a90c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a910: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x26a910u;
    { uint32_t bits = FAST_READ32(0x3EDD48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a914: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a918: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26a918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDD48u, _value); } while (0); }
    // 0x26a91c: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26a91cu;
    { uint32_t bits = FAST_READ32(0x3EDD48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a920: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x26a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x26a924: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26a928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a92c: 0x0  nop
    ctx->pc = 0x26a92cu;
    // NOP
    // 0x26a930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26a930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a934: 0x0  nop
    ctx->pc = 0x26a934u;
    // NOP
    // 0x26a938: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26A938u;
    {
        const bool branch_taken_0x26a938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a938) {
            ctx->pc = 0x26A94Cu;
            goto label_26a94c;
        }
    }
    ctx->pc = 0x26A940u;
    // 0x26a940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26a940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a944: 0x0  nop
    ctx->pc = 0x26a944u;
    // NOP
    // 0x26a948: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_26a94c:
    // 0x26a94c: 0x86021278  lh          $v0, 0x1278($s0)
    ctx->pc = 0x26a94cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x26a950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A950u;
    {
        const bool branch_taken_0x26a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a950) {
            ctx->pc = 0x26A96Cu;
            goto label_26a96c;
        }
    }
    ctx->pc = 0x26A958u;
    // 0x26a958: 0x86021278  lh          $v0, 0x1278($s0)
    ctx->pc = 0x26a958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x26a95c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26a960: 0xa6021278  sh          $v0, 0x1278($s0)
    ctx->pc = 0x26a960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a964: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26A964u;
    {
        const bool branch_taken_0x26a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a964) {
            ctx->pc = 0x26A9D0u;
            goto label_26a9d0;
        }
    }
    ctx->pc = 0x26A96Cu;
label_26a96c:
    // 0x26a96c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x26a96cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26a970: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a974: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x26a978: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26A978u;
    {
        const bool branch_taken_0x26a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a978) {
            ctx->pc = 0x26A9D0u;
            goto label_26a9d0;
        }
    }
    ctx->pc = 0x26A980u;
    // 0x26a980: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x26a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x26a984: 0xa6021278  sh          $v0, 0x1278($s0)
    ctx->pc = 0x26a984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a988: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a98c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26a990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a994: 0x0  nop
    ctx->pc = 0x26a994u;
    // NOP
    // 0x26a998: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a99c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26a99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x26a9a0: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a9a4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x26a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x26a9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a9ac: 0x0  nop
    ctx->pc = 0x26a9acu;
    // NOP
    // 0x26a9b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26a9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a9b4: 0x0  nop
    ctx->pc = 0x26a9b4u;
    // NOP
    // 0x26a9b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26A9B8u;
    {
        const bool branch_taken_0x26a9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a9b8) {
            ctx->pc = 0x26A9D0u;
            goto label_26a9d0;
        }
    }
    ctx->pc = 0x26A9C0u;
    // 0x26a9c0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x26a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x26a9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a9c8: 0x0  nop
    ctx->pc = 0x26a9c8u;
    // NOP
    // 0x26a9cc: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26a9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_26a9d0:
    // 0x26a9d0: 0xc057a4c  jal         func_15E930
    ctx->pc = 0x26A9D0u;
    SET_GPR_U32(ctx, 31, 0x26A9D8u);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x26A9D0u, 0x26A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9D8u;
label_26a9d8:
    // 0x26a9d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26a9d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26a9dc: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x26a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x26a9e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a9e4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26A9E4u;
    {
        const bool branch_taken_0x26a9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a9e4) {
            ctx->pc = 0x26AA5Cu;
            goto label_26aa5c;
        }
    }
    ctx->pc = 0x26A9ECu;
    // 0x26a9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a9f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A9F0u;
    {
        const bool branch_taken_0x26a9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a9f0) {
            ctx->pc = 0x26AA00u;
            goto label_26aa00;
        }
    }
    ctx->pc = 0x26A9F8u;
    // 0x26a9f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26A9F8u;
    {
        const bool branch_taken_0x26a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a9f8) {
            ctx->pc = 0x26AAB8u;
            goto label_26aab8;
        }
    }
    ctx->pc = 0x26AA00u;
label_26aa00:
    // 0x26aa00: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa04: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26aa08: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26aa0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa10: 0x0  nop
    ctx->pc = 0x26aa10u;
    // NOP
    // 0x26aa14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26aa14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26aa18: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aa1c: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa20: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26aa24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aa28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa2c: 0x0  nop
    ctx->pc = 0x26aa2cu;
    // NOP
    // 0x26aa30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26aa30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aa34: 0x0  nop
    ctx->pc = 0x26aa34u;
    // NOP
    // 0x26aa38: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x26AA38u;
    {
        const bool branch_taken_0x26aa38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aa38) {
            ctx->pc = 0x26AB54u;
            goto label_26ab54;
        }
    }
    ctx->pc = 0x26AA40u;
    // 0x26aa40: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26aa44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa4c: 0x0  nop
    ctx->pc = 0x26aa4cu;
    // NOP
    // 0x26aa50: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aa54: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26AA54u;
    {
        const bool branch_taken_0x26aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aa54) {
            ctx->pc = 0x26AB54u;
            goto label_26ab54;
        }
    }
    ctx->pc = 0x26AA5Cu;
label_26aa5c:
    // 0x26aa5c: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa60: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26aa64: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26aa68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa6c: 0x0  nop
    ctx->pc = 0x26aa6cu;
    // NOP
    // 0x26aa70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26aa70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26aa74: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aa78: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa7c: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26aa80: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa88: 0x0  nop
    ctx->pc = 0x26aa88u;
    // NOP
    // 0x26aa8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26aa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aa90: 0x0  nop
    ctx->pc = 0x26aa90u;
    // NOP
    // 0x26aa94: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x26AA94u;
    {
        const bool branch_taken_0x26aa94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aa94) {
            ctx->pc = 0x26AB54u;
            goto label_26ab54;
        }
    }
    ctx->pc = 0x26AA9Cu;
    // 0x26aa9c: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26aaa0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aaa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aaa8: 0x0  nop
    ctx->pc = 0x26aaa8u;
    // NOP
    // 0x26aaac: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aab0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26AAB0u;
    {
        const bool branch_taken_0x26aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aab0) {
            ctx->pc = 0x26AB54u;
            goto label_26ab54;
        }
    }
    ctx->pc = 0x26AAB8u;
label_26aab8:
    // 0x26aab8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26aabc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x26aac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26aac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aac4: 0xc6001b50  lwc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aac8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26aac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26aacc: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aad0: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aad4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26aad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aad8: 0x0  nop
    ctx->pc = 0x26aad8u;
    // NOP
    // 0x26aadc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26aadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aae0: 0x0  nop
    ctx->pc = 0x26aae0u;
    // NOP
    // 0x26aae4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x26AAE4u;
    {
        const bool branch_taken_0x26aae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aae4) {
            ctx->pc = 0x26AB24u;
            goto label_26ab24;
        }
    }
    ctx->pc = 0x26AAECu;
    // 0x26aaec: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aaf0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26aaf4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26aaf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aaf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aafc: 0x0  nop
    ctx->pc = 0x26aafcu;
    // NOP
    // 0x26ab00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ab00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab04: 0x0  nop
    ctx->pc = 0x26ab04u;
    // NOP
    // 0x26ab08: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x26AB08u;
    {
        const bool branch_taken_0x26ab08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ab08) {
            ctx->pc = 0x26AB54u;
            goto label_26ab54;
        }
    }
    ctx->pc = 0x26AB10u;
    // 0x26ab10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ab10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab14: 0x0  nop
    ctx->pc = 0x26ab14u;
    // NOP
    // 0x26ab18: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26ab18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26ab1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26AB1Cu;
    {
        const bool branch_taken_0x26ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab1c) {
            ctx->pc = 0x26AB54u;
            goto label_26ab54;
        }
    }
    ctx->pc = 0x26AB24u;
label_26ab24:
    // 0x26ab24: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab28: 0x3c02ba83  lui         $v0, 0xBA83
    ctx->pc = 0x26ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47747 << 16));
    // 0x26ab2c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ab2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ab30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ab30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab34: 0x0  nop
    ctx->pc = 0x26ab34u;
    // NOP
    // 0x26ab38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ab38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab3c: 0x0  nop
    ctx->pc = 0x26ab3cu;
    // NOP
    // 0x26ab40: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26AB40u;
    {
        const bool branch_taken_0x26ab40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ab40) {
            ctx->pc = 0x26AB54u;
            goto label_26ab54;
        }
    }
    ctx->pc = 0x26AB48u;
    // 0x26ab48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab4c: 0x0  nop
    ctx->pc = 0x26ab4cu;
    // NOP
    // 0x26ab50: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26ab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
label_26ab54:
    // 0x26ab54: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab58: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x26ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26ab5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ab60: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x26ab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x26ab64: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x26ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ab68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab6c: 0x0  nop
    ctx->pc = 0x26ab6cu;
    // NOP
    // 0x26ab70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ab70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab74: 0x0  nop
    ctx->pc = 0x26ab74u;
    // NOP
    // 0x26ab78: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x26AB78u;
    {
        const bool branch_taken_0x26ab78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ab78) {
            ctx->pc = 0x26ABC0u;
            goto label_26abc0;
        }
    }
    ctx->pc = 0x26AB80u;
    // 0x26ab80: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x26ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab84: 0x3c023faf  lui         $v0, 0x3FAF
    ctx->pc = 0x26ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16303 << 16));
    // 0x26ab88: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26ab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26ab8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ab8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab90: 0x0  nop
    ctx->pc = 0x26ab90u;
    // NOP
    // 0x26ab94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ab94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab98: 0x0  nop
    ctx->pc = 0x26ab98u;
    // NOP
    // 0x26ab9c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x26AB9Cu;
    {
        const bool branch_taken_0x26ab9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ab9c) {
            ctx->pc = 0x26ABF8u;
            goto label_26abf8;
        }
    }
    ctx->pc = 0x26ABA4u;
    // 0x26aba4: 0x3c023faf  lui         $v0, 0x3FAF
    ctx->pc = 0x26aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16303 << 16));
    // 0x26aba8: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26aba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26abac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26abacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abb0: 0x0  nop
    ctx->pc = 0x26abb0u;
    // NOP
    // 0x26abb4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x26abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x26abb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26ABB8u;
    {
        const bool branch_taken_0x26abb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26abb8) {
            ctx->pc = 0x26ABF8u;
            goto label_26abf8;
        }
    }
    ctx->pc = 0x26ABC0u;
label_26abc0:
    // 0x26abc0: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x26abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26abc4: 0x3c02bfaf  lui         $v0, 0xBFAF
    ctx->pc = 0x26abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49071 << 16));
    // 0x26abc8: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26abcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26abccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abd0: 0x0  nop
    ctx->pc = 0x26abd0u;
    // NOP
    // 0x26abd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26abd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26abd8: 0x0  nop
    ctx->pc = 0x26abd8u;
    // NOP
    // 0x26abdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26ABDCu;
    {
        const bool branch_taken_0x26abdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26abdc) {
            ctx->pc = 0x26ABF8u;
            goto label_26abf8;
        }
    }
    ctx->pc = 0x26ABE4u;
    // 0x26abe4: 0x3c02bfaf  lui         $v0, 0xBFAF
    ctx->pc = 0x26abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49071 << 16));
    // 0x26abe8: 0x3442ede0  ori         $v0, $v0, 0xEDE0
    ctx->pc = 0x26abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60896);
    // 0x26abec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abf0: 0x0  nop
    ctx->pc = 0x26abf0u;
    // NOP
    // 0x26abf4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x26abf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_26abf8:
    // 0x26abf8: 0x3223000c  andi        $v1, $s1, 0xC
    ctx->pc = 0x26abf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
    // 0x26abfc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26ac00: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26AC00u;
    {
        const bool branch_taken_0x26ac00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ac00) {
            ctx->pc = 0x26AC78u;
            goto label_26ac78;
        }
    }
    ctx->pc = 0x26AC08u;
    // 0x26ac08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ac0c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AC0Cu;
    {
        const bool branch_taken_0x26ac0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ac0c) {
            ctx->pc = 0x26AC1Cu;
            goto label_26ac1c;
        }
    }
    ctx->pc = 0x26AC14u;
    // 0x26ac14: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26AC14u;
    {
        const bool branch_taken_0x26ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac14) {
            ctx->pc = 0x26ACD4u;
            goto label_26acd4;
        }
    }
    ctx->pc = 0x26AC1Cu;
label_26ac1c:
    // 0x26ac1c: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac20: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26ac24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ac28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac2c: 0x0  nop
    ctx->pc = 0x26ac2cu;
    // NOP
    // 0x26ac30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ac30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ac34: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ac38: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac3c: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26ac40: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26ac44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac48: 0x0  nop
    ctx->pc = 0x26ac48u;
    // NOP
    // 0x26ac4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ac4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ac50: 0x0  nop
    ctx->pc = 0x26ac50u;
    // NOP
    // 0x26ac54: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x26AC54u;
    {
        const bool branch_taken_0x26ac54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ac54) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26AC5Cu;
    // 0x26ac5c: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x26ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x26ac60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26ac64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac68: 0x0  nop
    ctx->pc = 0x26ac68u;
    // NOP
    // 0x26ac6c: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ac70: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26AC70u;
    {
        const bool branch_taken_0x26ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac70) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26AC78u;
label_26ac78:
    // 0x26ac78: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac7c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26ac80: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ac84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ac84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac88: 0x0  nop
    ctx->pc = 0x26ac88u;
    // NOP
    // 0x26ac8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ac8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ac90: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ac94: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac98: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26ac9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aca4: 0x0  nop
    ctx->pc = 0x26aca4u;
    // NOP
    // 0x26aca8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26aca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26acac: 0x0  nop
    ctx->pc = 0x26acacu;
    // NOP
    // 0x26acb0: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x26ACB0u;
    {
        const bool branch_taken_0x26acb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26acb0) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26ACB8u;
    // 0x26acb8: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26acbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26acc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26acc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26acc4: 0x0  nop
    ctx->pc = 0x26acc4u;
    // NOP
    // 0x26acc8: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26accc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26ACCCu;
    {
        const bool branch_taken_0x26accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26accc) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26ACD4u;
label_26acd4:
    // 0x26acd4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26acd8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x26acdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26acdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ace0: 0xc6001b54  lwc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ace4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26ace4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ace8: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ace8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26acec: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26acf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26acf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26acf4: 0x0  nop
    ctx->pc = 0x26acf4u;
    // NOP
    // 0x26acf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26acf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26acfc: 0x0  nop
    ctx->pc = 0x26acfcu;
    // NOP
    // 0x26ad00: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x26AD00u;
    {
        const bool branch_taken_0x26ad00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad00) {
            ctx->pc = 0x26AD40u;
            goto label_26ad40;
        }
    }
    ctx->pc = 0x26AD08u;
    // 0x26ad08: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad0c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26ad10: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ad14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ad14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad18: 0x0  nop
    ctx->pc = 0x26ad18u;
    // NOP
    // 0x26ad1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ad1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad20: 0x0  nop
    ctx->pc = 0x26ad20u;
    // NOP
    // 0x26ad24: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x26AD24u;
    {
        const bool branch_taken_0x26ad24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad24) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26AD2Cu;
    // 0x26ad2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ad2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad30: 0x0  nop
    ctx->pc = 0x26ad30u;
    // NOP
    // 0x26ad34: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    // 0x26ad38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26AD38u;
    {
        const bool branch_taken_0x26ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad38) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26AD40u;
label_26ad40:
    // 0x26ad40: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad44: 0x3c02ba83  lui         $v0, 0xBA83
    ctx->pc = 0x26ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47747 << 16));
    // 0x26ad48: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ad4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ad4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad50: 0x0  nop
    ctx->pc = 0x26ad50u;
    // NOP
    // 0x26ad54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ad54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad58: 0x0  nop
    ctx->pc = 0x26ad58u;
    // NOP
    // 0x26ad5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26AD5Cu;
    {
        const bool branch_taken_0x26ad5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad5c) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26AD64u;
    // 0x26ad64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ad64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad68: 0x0  nop
    ctx->pc = 0x26ad68u;
    // NOP
    // 0x26ad6c: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
label_26ad70:
    // 0x26ad70: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x26ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad74: 0xc6001b54  lwc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ad78: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x26ad78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ad7c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x26AD7Cu;
    SET_GPR_U32(ctx, 31, 0x26AD84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x26AD7Cu, 0x26AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD84u;
label_26ad84:
    // 0x26ad84: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x26ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x26ad88: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26ad88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ad8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ad8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ad90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ad90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ad94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ad94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ad98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26ad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x26AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ADA4u;
}
