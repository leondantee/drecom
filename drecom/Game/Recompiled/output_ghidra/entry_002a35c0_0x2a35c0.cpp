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

// Function: entry_002a35c0
// Address: 0x2a35c0 - 0x2a3768
void entry_002a35c0_0x2a35c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a35c0_0x2a35c0");
#endif

    switch (ctx->pc) {
        case 0x2a361cu: goto label_2a361c;
        case 0x2a3624u: goto label_2a3624;
        case 0x2a3658u: goto label_2a3658;
        case 0x2a36ccu: goto label_2a36cc;
        case 0x2a36e8u: goto label_2a36e8;
        case 0x2a3710u: goto label_2a3710;
        case 0x2a3740u: goto label_2a3740;
        default: break;
    }

    ctx->pc = 0x2a35c0u;

    // 0x2a35c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a35c4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a35c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a35c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a35c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a35cc: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a35ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a35d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a35d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a35d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a35d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a35d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a35dc: 0x0  nop
    ctx->pc = 0x2a35dcu;
    // NOP
    // 0x2a35e0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a35e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a35e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a35e8: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a35ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a35ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a35f0: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a35f0u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a35f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a35f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a35f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a35f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a35fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3604: 0x0  nop
    ctx->pc = 0x2a3604u;
    // NOP
    // 0x2a3608: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a3608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a360c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3610: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a3610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3614: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A3614u;
    SET_GPR_U32(ctx, 31, 0x2A361Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A361Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A361Cu) { return; }
    ctx->pc = 0x2A361Cu;
label_2a361c:
    // 0x2a361c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A361Cu;
    SET_GPR_U32(ctx, 31, 0x2A3624u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A361Cu, 0x2A3624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3624u;
label_2a3624:
    // 0x2a3624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3628: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2a3628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a362c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3630: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2A3630u;
    {
        const bool branch_taken_0x2a3630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3630) {
            ctx->pc = 0x2A37E8u;
            return;
        }
    }
    ctx->pc = 0x2A3638u;
    // 0x2a3638: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a363c: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x2a363cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x2a3640: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a3640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a3644: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a3644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a3648: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2A3648u;
    {
        const bool branch_taken_0x2a3648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3648) {
            ctx->pc = 0x2A37E8u;
            return;
        }
    }
    ctx->pc = 0x2A3650u;
    // 0x2a3650: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A3650u;
    SET_GPR_U32(ctx, 31, 0x2A3658u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A3650u, 0x2A3658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3658u;
label_2a3658:
    // 0x2a3658: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a365c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a3660: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a3664: 0x9042009c  lbu         $v0, 0x9C($v0)
    ctx->pc = 0x2a3664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2a3668: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a3668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a366c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3670: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a3670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3674: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a3674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3678: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a367c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2a367cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a3680: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3684: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2a3688: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a3688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a368c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2a368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a3690: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2a3690u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2a3694: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x2a3694u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3698: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2a3698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2a369c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a369cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a36a0: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A36A0u;
    {
        const bool branch_taken_0x2a36a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36a0) {
            ctx->pc = 0x2A37E8u;
            return;
        }
    }
    ctx->pc = 0x2A36A8u;
    // 0x2a36a8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2a36a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a36ac: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2a36acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2a36b0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2a36b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2a36b4: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2a36b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a36b8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2a36b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2a36bc: 0x3064fff7  andi        $a0, $v1, 0xFFF7
    ctx->pc = 0x2a36bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a36c0: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x2a36c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a36c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A36C4u;
    SET_GPR_U32(ctx, 31, 0x2A36CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A36C4u, 0x2A36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36CCu;
label_2a36cc:
    // 0x2a36cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a36ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a36d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a36d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a36d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2a36d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a36d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A36D8u;
    {
        const bool branch_taken_0x2a36d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36d8) {
            ctx->pc = 0x2A3768u;
            return;
        }
    }
    ctx->pc = 0x2A36E0u;
    // 0x2a36e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A36E0u;
    SET_GPR_U32(ctx, 31, 0x2A36E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A36E0u, 0x2A36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36E8u;
label_2a36e8:
    // 0x2a36e8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x2a36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x2a36ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a36ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a36f0: 0x0  nop
    ctx->pc = 0x2a36f0u;
    // NOP
    // 0x2a36f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a36f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a36f8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a36fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a36fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3700: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a3704: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a3704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a3708: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3708u;
    SET_GPR_U32(ctx, 31, 0x2A3710u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3708u, 0x2A3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3710u;
label_2a3710:
    // 0x2a3710: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a3710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a3714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3718: 0x0  nop
    ctx->pc = 0x2a3718u;
    // NOP
    // 0x2a371c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a371cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3720: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a3720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a3724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3728: 0x0  nop
    ctx->pc = 0x2a3728u;
    // NOP
    // 0x2a372c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a372cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3730: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2a3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a3734: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2a3734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a3738: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3738u;
    SET_GPR_U32(ctx, 31, 0x2A3740u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3738u, 0x2A3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3740u;
label_2a3740:
    // 0x2a3740: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a3744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3748: 0x0  nop
    ctx->pc = 0x2a3748u;
    // NOP
    // 0x2a374c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a374cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3750: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3758: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x2a3758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a375c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2a375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2a3760: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A3760u;
    {
        const bool branch_taken_0x2a3760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3760) {
            ctx->pc = 0x2A37E8u;
            return;
        }
    }
    ctx->pc = 0x2A3768u;
}
