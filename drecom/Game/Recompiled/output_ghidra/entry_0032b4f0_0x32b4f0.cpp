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

// Function: entry_0032b4f0
// Address: 0x32b4f0 - 0x32b61c
void entry_0032b4f0_0x32b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b4f0_0x32b4f0");
#endif

    switch (ctx->pc) {
        case 0x32b54cu: goto label_32b54c;
        case 0x32b5a4u: goto label_32b5a4;
        case 0x32b614u: goto label_32b614;
        default: break;
    }

    ctx->pc = 0x32b4f0u;

    // 0x32b4f0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32b4f4: 0x2455a5d8  addiu       $s5, $v0, -0x5A28
    ctx->pc = 0x32b4f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944216));
    // 0x32b4f8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x32b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A5D8u));
    // 0x32b4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b500: 0x0  nop
    ctx->pc = 0x32b500u;
    // NOP
    // 0x32b504: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b508: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32b50c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32b50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b510: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b514: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b514u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b518: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b518u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b51c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b524: 0x0  nop
    ctx->pc = 0x32b524u;
    // NOP
    // 0x32b528: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x32b528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b52c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32b530: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32b530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32b534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b538: 0x0  nop
    ctx->pc = 0x32b538u;
    // NOP
    // 0x32b53c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b540: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b540u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b544: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B544u;
    SET_GPR_U32(ctx, 31, 0x32B54Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B544u, 0x32B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B54Cu;
label_32b54c:
    // 0x32b54c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32b54cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b550: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x32b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32b554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b558: 0x0  nop
    ctx->pc = 0x32b558u;
    // NOP
    // 0x32b55c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b560: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x32b560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x32b564: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32b564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b568: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b56c: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b56cu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b570: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b570u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b574: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b57c: 0x0  nop
    ctx->pc = 0x32b57cu;
    // NOP
    // 0x32b580: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x32b580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b584: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32b588: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32b588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32b58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b590: 0x0  nop
    ctx->pc = 0x32b590u;
    // NOP
    // 0x32b594: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b598: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b598u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b59c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B59Cu;
    SET_GPR_U32(ctx, 31, 0x32B5A4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B59Cu, 0x32B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5A4u;
label_32b5a4:
    // 0x32b5a4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32b5a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b5a8: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32b5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32b5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b5b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b5b4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32b5b8: 0xc44128f0  lwc1        $f1, 0x28F0($v0)
    ctx->pc = 0x32b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b5bc: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x32b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
    // 0x32b5c0: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x32b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x32b5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b5c8: 0x0  nop
    ctx->pc = 0x32b5c8u;
    // NOP
    // 0x32b5cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b5ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b5d0: 0x0  nop
    ctx->pc = 0x32b5d0u;
    // NOP
    // 0x32b5d4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x32B5D4u;
    {
        const bool branch_taken_0x32b5d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b5d4) {
            ctx->pc = 0x32B648u;
            return;
        }
    }
    ctx->pc = 0x32B5DCu;
    // 0x32b5dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32b5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32b5e0: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32b5e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32b5e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32b5ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32B5ECu;
    {
        const bool branch_taken_0x32b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b5ec) {
            ctx->pc = 0x32B61Cu;
            return;
        }
    }
    ctx->pc = 0x32B5F4u;
    // 0x32b5f4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x32b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x32b5f8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x32b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x32b5fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32b5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b600: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b604: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x32b604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x32b608: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x32b608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x32b60c: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B60Cu;
    SET_GPR_U32(ctx, 31, 0x32B614u);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B60Cu, 0x32B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B614u;
label_32b614:
    // 0x32b614: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x32B614u;
    {
        const bool branch_taken_0x32b614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b614) {
            ctx->pc = 0x32B6E0u;
            return;
        }
    }
    ctx->pc = 0x32B61Cu;
}
