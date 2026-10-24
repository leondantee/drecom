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

// Function: entry_0014e530
// Address: 0x14e530 - 0x14e6fc
void entry_0014e530_0x14e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e530_0x14e530");
#endif

    switch (ctx->pc) {
        case 0x14e53cu: goto label_14e53c;
        case 0x14e568u: goto label_14e568;
        case 0x14e5d8u: goto label_14e5d8;
        case 0x14e648u: goto label_14e648;
        case 0x14e6c0u: goto label_14e6c0;
        default: break;
    }

    ctx->pc = 0x14e530u;

    // 0x14e530: 0x2624021c  addiu       $a0, $s1, 0x21C
    ctx->pc = 0x14e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
    // 0x14e534: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x14E534u;
    SET_GPR_U32(ctx, 31, 0x14E53Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x14E534u, 0x14E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E53Cu;
label_14e53c:
    // 0x14e53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e540: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e544: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e550: 0x8c52023c  lw          $s2, 0x23C($v0)
    ctx->pc = 0x14e550u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x14e554: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e558: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x14e55c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x14e55cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14e560: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x14E560u;
    SET_GPR_U32(ctx, 31, 0x14E568u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x14E560u, 0x14E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E568u;
label_14e568:
    // 0x14e568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e56c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14e570: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14e574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e578: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x14E578u;
    {
        const bool branch_taken_0x14e578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e578) {
            ctx->pc = 0x14E878u;
            return;
        }
    }
    ctx->pc = 0x14E580u;
    // 0x14e580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e584: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e584u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e588: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14e588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14e58c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x14E58Cu;
    {
        const bool branch_taken_0x14e58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e58c) {
            ctx->pc = 0x14E6FCu;
            return;
        }
    }
    ctx->pc = 0x14E594u;
    // 0x14e594: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e598: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14e59c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e5a0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x14E5A0u;
    {
        const bool branch_taken_0x14e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e5a0) {
            ctx->pc = 0x14E6FCu;
            return;
        }
    }
    ctx->pc = 0x14E5A8u;
    // 0x14e5a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e5ac: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e5b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e5b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e5bc: 0x8c500254  lw          $s0, 0x254($v0)
    ctx->pc = 0x14e5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x14e5c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e5c4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x14e5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e5c8: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x14e5cc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14e5d0: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x14E5D0u;
    SET_GPR_U32(ctx, 31, 0x14E5D8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x14E5D0u, 0x14E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5D8u;
label_14e5d8:
    // 0x14e5d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e5dc: 0x8c500254  lw          $s0, 0x254($v0)
    ctx->pc = 0x14e5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x14e5e0: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x14e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
    // 0x14e5e4: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e5ec: 0x0  nop
    ctx->pc = 0x14e5ecu;
    // NOP
    // 0x14e5f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14e5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14e5f4: 0x3c024203  lui         $v0, 0x4203
    ctx->pc = 0x14e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16899 << 16));
    // 0x14e5f8: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e600: 0x0  nop
    ctx->pc = 0x14e600u;
    // NOP
    // 0x14e604: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x14e604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14e608: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14e60c: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e614: 0x0  nop
    ctx->pc = 0x14e614u;
    // NOP
    // 0x14e618: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x14e618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14e61c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e624: 0x0  nop
    ctx->pc = 0x14e624u;
    // NOP
    // 0x14e628: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e62c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e630: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e634: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e638: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e63c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e640: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E640u;
    SET_GPR_U32(ctx, 31, 0x14E648u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E648u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E648u) { return; }
    ctx->pc = 0x14E648u;
label_14e648:
    // 0x14e648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e650: 0x0  nop
    ctx->pc = 0x14e650u;
    // NOP
    // 0x14e654: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e658: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
    // 0x14e65c: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e664: 0x0  nop
    ctx->pc = 0x14e664u;
    // NOP
    // 0x14e668: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x14e668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14e66c: 0x3c02422b  lui         $v0, 0x422B
    ctx->pc = 0x14e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16939 << 16));
    // 0x14e670: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e678: 0x0  nop
    ctx->pc = 0x14e678u;
    // NOP
    // 0x14e67c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x14e67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14e680: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14e680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14e684: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e68c: 0x0  nop
    ctx->pc = 0x14e68cu;
    // NOP
    // 0x14e690: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14e690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14e694: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e69c: 0x0  nop
    ctx->pc = 0x14e69cu;
    // NOP
    // 0x14e6a0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e6a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e6a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e6ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e6b0: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e6b4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e6b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E6B8u;
    SET_GPR_U32(ctx, 31, 0x14E6C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E6C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E6C0u) { return; }
    ctx->pc = 0x14E6C0u;
label_14e6c0:
    // 0x14e6c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e6c8: 0x0  nop
    ctx->pc = 0x14e6c8u;
    // NOP
    // 0x14e6cc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e6d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e6d4: 0x8c440254  lw          $a0, 0x254($v0)
    ctx->pc = 0x14e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x14e6d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e6dc: 0x8c450258  lw          $a1, 0x258($v0)
    ctx->pc = 0x14e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x14e6e0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e6e4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e6e8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x14e6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14e6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e6f0: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e6f4: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x14E6F4u;
    SET_GPR_U32(ctx, 31, 0x14E6FCu);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x14E6F4u, 0x14E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6FCu;
}
