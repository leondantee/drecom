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

// Function: entry_001e055c
// Address: 0x1e055c - 0x1e0738
void entry_001e055c_0x1e055c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e055c_0x1e055c");
#endif

    switch (ctx->pc) {
        case 0x1e0584u: goto label_1e0584;
        case 0x1e0660u: goto label_1e0660;
        case 0x1e0688u: goto label_1e0688;
        case 0x1e06b0u: goto label_1e06b0;
        case 0x1e06e8u: goto label_1e06e8;
        case 0x1e071cu: goto label_1e071c;
        default: break;
    }

    ctx->pc = 0x1e055cu;

    // 0x1e055c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1e055cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e0560: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e0560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e0564: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1e0564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e0568: 0x146000d5  bnez        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1E0568u;
    {
        const bool branch_taken_0x1e0568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0568) {
            ctx->pc = 0x1E08C0u;
            return;
        }
    }
    ctx->pc = 0x1E0570u;
    // 0x1e0570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0574: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e0574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e0578: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e0578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e057c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E057Cu;
    SET_GPR_U32(ctx, 31, 0x1E0584u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E0584u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E0584u) { return; }
    ctx->pc = 0x1E0584u;
label_1e0584:
    // 0x1e0584: 0xc621ffe8  lwc1        $f1, -0x18($s1)
    ctx->pc = 0x1e0584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0588: 0xc620fff4  lwc1        $f0, -0xC($s1)
    ctx->pc = 0x1e0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e058c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e058cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0590: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0594: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0598: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e059c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e059cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e05a0: 0x0  nop
    ctx->pc = 0x1e05a0u;
    // NOP
    // 0x1e05a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e05a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e05a8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e05a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e05ac: 0xc621ffec  lwc1        $f1, -0x14($s1)
    ctx->pc = 0x1e05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05b0: 0xc620fff8  lwc1        $f0, -0x8($s1)
    ctx->pc = 0x1e05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e05b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e05b8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e05b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e05bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e05c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e05c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e05c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e05c8: 0x0  nop
    ctx->pc = 0x1e05c8u;
    // NOP
    // 0x1e05cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e05ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e05d0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e05d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e05d4: 0xc621fff0  lwc1        $f1, -0x10($s1)
    ctx->pc = 0x1e05d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05d8: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x1e05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e05dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e05e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05e4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e05e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e05e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e05ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e05ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e05f0: 0x0  nop
    ctx->pc = 0x1e05f0u;
    // NOP
    // 0x1e05f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e05f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e05f8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e05f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e05fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0604: 0x0  nop
    ctx->pc = 0x1e0604u;
    // NOP
    // 0x1e0608: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1e0608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1e060c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1e060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1e0610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0614: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0618: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0618u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e061c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e061cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e0620: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1e0620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1e0624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0628: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e062c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e062cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0630: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e0630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e0634: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1e0634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1e0638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e063c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0640: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0640u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0644: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e0644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e0648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e064c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e064cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0650: 0x0  nop
    ctx->pc = 0x1e0650u;
    // NOP
    // 0x1e0654: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x1e0654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x1e0658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0658u;
    SET_GPR_U32(ctx, 31, 0x1E0660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0658u, 0x1E0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0660u;
label_1e0660:
    // 0x1e0660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0664: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e0664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e0668: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e0668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e066c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0670: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x1e0674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0678: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e067c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1e0680: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0680u;
    SET_GPR_U32(ctx, 31, 0x1E0688u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0680u, 0x1E0688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0688u;
label_1e0688:
    // 0x1e0688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e068c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e0690: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e0690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0694: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0698: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x1e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x1e069c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e06a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e06a4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e06a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1e06a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E06A8u;
    SET_GPR_U32(ctx, 31, 0x1E06B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E06A8u, 0x1E06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06B0u;
label_1e06b0:
    // 0x1e06b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e06b4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e06b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e06b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e06bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e06c0: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x1e06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x1e06c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e06c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e06c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e06cc: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x1e06ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x1e06d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e06d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e06d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e06d8: 0x0  nop
    ctx->pc = 0x1e06d8u;
    // NOP
    // 0x1e06dc: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x1e06dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x1e06e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E06E0u;
    SET_GPR_U32(ctx, 31, 0x1E06E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E06E0u, 0x1E06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06E8u;
label_1e06e8:
    // 0x1e06e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e06ec: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e06f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e06f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e06f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e06f8: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e06f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e06fc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0700: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e0704: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1e0708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e070c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E070Cu;
    {
        const bool branch_taken_0x1e070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e070c) {
            ctx->pc = 0x1E0738u;
            return;
        }
    }
    ctx->pc = 0x1E0714u;
    // 0x1e0714: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0714u;
    SET_GPR_U32(ctx, 31, 0x1E071Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0714u, 0x1E071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E071Cu;
label_1e071c:
    // 0x1e071c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e071cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0720: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e0724: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1e0724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1e0728: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e0728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e072c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e072cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e0730: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e0730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0734: 0x0  nop
    ctx->pc = 0x1e0734u;
    // NOP
    ctx->pc = 0x1e0738u;
}
