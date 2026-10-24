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

// Function: Cam_reset
// Address: 0x188040 - 0x188200
void Cam_reset_0x188040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cam_reset_0x188040");
#endif

    switch (ctx->pc) {
        case 0x18806cu: goto label_18806c;
        case 0x1880f4u: goto label_1880f4;
        case 0x188144u: goto label_188144;
        case 0x188168u: goto label_188168;
        case 0x1881d0u: goto label_1881d0;
        case 0x1881e8u: goto label_1881e8;
        default: break;
    }

    ctx->pc = 0x188040u;

    // 0x188040: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x188044: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x188044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x188048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18804c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188050: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x188050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x188054: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188058: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x188058u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x18805c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x18805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x188060: 0x24502380  addiu       $s0, $v0, 0x2380
    ctx->pc = 0x188060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x188064: 0xc06130c  jal         func_184C30
    ctx->pc = 0x188064u;
    SET_GPR_U32(ctx, 31, 0x18806Cu);
    ctx->pc = 0x184C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184C30u, 0x188064u, 0x18806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18806Cu;
label_18806c:
    // 0x18806c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x18806cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x188070: 0xa02095a0  sb          $zero, -0x6A60($at)
    ctx->pc = 0x188070u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x188074: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x188074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x188078: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x188078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x18807c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x188080: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x188080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x188084: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x188084u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x188088: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18808c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18808cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x188090: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188094: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x188098: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x188098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x18809c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18809Cu;
    {
        const bool branch_taken_0x18809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18809c) {
            ctx->pc = 0x188128u;
            goto label_188128;
        }
    }
    ctx->pc = 0x1880A4u;
    // 0x1880a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1880a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1880a8: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x1880a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x1880ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1880acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1880b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1880b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1880b4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1880B4u;
    {
        const bool branch_taken_0x1880b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1880b4) {
            ctx->pc = 0x188128u;
            goto label_188128;
        }
    }
    ctx->pc = 0x1880BCu;
    // 0x1880bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1880bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1880c0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1880c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1880c4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1880c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1880c8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1880C8u;
    {
        const bool branch_taken_0x1880c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880c8) {
            ctx->pc = 0x188128u;
            goto label_188128;
        }
    }
    ctx->pc = 0x1880D0u;
    // 0x1880d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1880d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1880d4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1880d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1880d8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1880d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1880dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1880DCu;
    {
        const bool branch_taken_0x1880dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880dc) {
            ctx->pc = 0x188128u;
            goto label_188128;
        }
    }
    ctx->pc = 0x1880E4u;
    // 0x1880e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1880e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1880e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1880e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1880ec: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1880ECu;
    SET_GPR_U32(ctx, 31, 0x1880F4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1880ECu, 0x1880F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880F4u;
label_1880f4:
    // 0x1880f4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1880f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1880f8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1880f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1880fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x188100: 0xc4200368  lwc1        $f0, 0x368($at)
    ctx->pc = 0x188100u;
    { uint32_t bits = FAST_READ32(0x480368u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188108: 0x0  nop
    ctx->pc = 0x188108u;
    // NOP
    // 0x18810c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x18810Cu;
    {
        const bool branch_taken_0x18810c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18810c) {
            ctx->pc = 0x188134u;
            goto label_188134;
        }
    }
    ctx->pc = 0x188114u;
    // 0x188114: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x188114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x188118: 0xc4200368  lwc1        $f0, 0x368($at)
    ctx->pc = 0x188118u;
    { uint32_t bits = FAST_READ32(0x480368u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18811c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x18811cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x188120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188120u;
    {
        const bool branch_taken_0x188120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188120) {
            ctx->pc = 0x188134u;
            goto label_188134;
        }
    }
    ctx->pc = 0x188128u;
label_188128:
    // 0x188128: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18812c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x188130: 0xe4200368  swc1        $f0, 0x368($at)
    ctx->pc = 0x188130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480368u, _value); } while (0); }
label_188134:
    // 0x188134: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x188134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x188138: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18813c: 0xc061ed8  jal         func_187B60
    ctx->pc = 0x18813Cu;
    SET_GPR_U32(ctx, 31, 0x188144u);
    ctx->pc = 0x187B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187B60u, 0x18813Cu, 0x188144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188144u;
label_188144:
    // 0x188144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188144u;
    {
        const bool branch_taken_0x188144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188144) {
            ctx->pc = 0x188154u;
            goto label_188154;
        }
    }
    ctx->pc = 0x18814Cu;
    // 0x18814c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x18814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x188150: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x188150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_188154:
    // 0x188154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188158: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x188158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x18815c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x18815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x188160: 0xc061f34  jal         func_187CD0
    ctx->pc = 0x188160u;
    SET_GPR_U32(ctx, 31, 0x188168u);
    ctx->pc = 0x187CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187CD0u, 0x188160u, 0x188168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188168u;
label_188168:
    // 0x188168: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x188168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18816c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18816Cu;
    {
        const bool branch_taken_0x18816c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18816c) {
            ctx->pc = 0x1881C8u;
            goto label_1881c8;
        }
    }
    ctx->pc = 0x188174u;
    // 0x188174: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x188174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x188178: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x188178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x18817c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x18817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x188180: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x188180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x188184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188188: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x188188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18818c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x188190: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x188190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x188194: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x188194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188198: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x188198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x18819c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x18819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x1881a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1881a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1881a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1881a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1881a8: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x1881a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x1881ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1881acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1881b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1881b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1881b4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x1881b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x1881b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1881b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1881bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1881bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1881c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1881c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1881c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1881c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1881c8:
    // 0x1881c8: 0xc05f838  jal         func_17E0E0
    ctx->pc = 0x1881C8u;
    SET_GPR_U32(ctx, 31, 0x1881D0u);
    ctx->pc = 0x17E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E0E0u, 0x1881C8u, 0x1881D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881D0u;
label_1881d0:
    // 0x1881d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1881d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1881d4: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x1881d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x1881d8: 0x262501a0  addiu       $a1, $s1, 0x1A0
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x1881dc: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1881e0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1881E0u;
    SET_GPR_U32(ctx, 31, 0x1881E8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1881E0u, 0x1881E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881E8u;
label_1881e8:
    // 0x1881e8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1881e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1881ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1881ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1881f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1881f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1881f4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1881f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1881F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1881F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188200u;
}
