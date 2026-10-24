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

// Function: entry_00157744
// Address: 0x157744 - 0x1578f0
void entry_00157744_0x157744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157744_0x157744");
#endif

    switch (ctx->pc) {
        case 0x15774cu: goto label_15774c;
        case 0x1577b4u: goto label_1577b4;
        case 0x15781cu: goto label_15781c;
        case 0x157884u: goto label_157884;
        default: break;
    }

    ctx->pc = 0x157744u;

    // 0x157744: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157744u;
    SET_GPR_U32(ctx, 31, 0x15774Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157744u, 0x15774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15774Cu;
label_15774c:
    // 0x15774c: 0x3c153c83  lui         $s5, 0x3C83
    ctx->pc = 0x15774cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15491 << 16));
    // 0x157750: 0x36a2126f  ori         $v0, $s5, 0x126F
    ctx->pc = 0x157750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4719);
    // 0x157754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157758: 0x0  nop
    ctx->pc = 0x157758u;
    // NOP
    // 0x15775c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15775cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157760: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157764: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157768: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x15776c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157770: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157778: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x157778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15777c: 0x46011883  div.s       $f2, $f3, $f1
    ctx->pc = 0x15777cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x157780: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157784: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15778c: 0x0  nop
    ctx->pc = 0x15778cu;
    // NOP
    // 0x157790: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x157790u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x157794: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157798: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x157798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15779c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x15779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1577a0: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1577a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1577a4: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x1577a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1577a8: 0xe44300e4  swc1        $f3, 0xE4($v0)
    ctx->pc = 0x1577a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x1577ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x1577ACu;
    SET_GPR_U32(ctx, 31, 0x1577B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x1577ACu, 0x1577B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577B4u;
label_1577b4:
    // 0x1577b4: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x1577b8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1577b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1577bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1577bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1577c0: 0x0  nop
    ctx->pc = 0x1577c0u;
    // NOP
    // 0x1577c4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1577c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1577c8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1577cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1577d0: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x1577d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1577d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1577d8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1577dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1577dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1577e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1577e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1577e4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1577e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1577e8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1577e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1577ec: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1577ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1577f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1577f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1577f4: 0x0  nop
    ctx->pc = 0x1577f4u;
    // NOP
    // 0x1577f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1577f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1577fc: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1577fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157800: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157804: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x157804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157808: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x157808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15780c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15780cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157810: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x157810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x157814: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157814u;
    SET_GPR_U32(ctx, 31, 0x15781Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157814u, 0x15781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15781Cu;
label_15781c:
    // 0x15781c: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x15781cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157820: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157828: 0x0  nop
    ctx->pc = 0x157828u;
    // NOP
    // 0x15782c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15782cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157830: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157834: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157838: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x15783c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157840: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157848: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15784c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x15784cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157850: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157854: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x157854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15785c: 0x0  nop
    ctx->pc = 0x15785cu;
    // NOP
    // 0x157860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157864: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157868: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15786c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157870: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x157870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157878: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x157878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x15787c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x15787Cu;
    SET_GPR_U32(ctx, 31, 0x157884u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x15787Cu, 0x157884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157884u;
label_157884:
    // 0x157884: 0x3c043c03  lui         $a0, 0x3C03
    ctx->pc = 0x157884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15363 << 16));
    // 0x157888: 0x3482126f  ori         $v0, $a0, 0x126F
    ctx->pc = 0x157888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x15788c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15788cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157890: 0x0  nop
    ctx->pc = 0x157890u;
    // NOP
    // 0x157894: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157898: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15789c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1578a0: 0x2444f760  addiu       $a0, $v0, -0x8A0
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x1578a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1578a8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1578a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1578ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1578acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1578b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1578b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1578b4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1578b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1578b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1578b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1578bc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1578bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1578c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1578c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1578c4: 0x0  nop
    ctx->pc = 0x1578c4u;
    // NOP
    // 0x1578c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1578c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1578cc: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1578ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1578d0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1578d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1578d4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1578d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1578d8: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1578d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1578dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1578dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1578e0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1578e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1578e4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1578e8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1578e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1578ec: 0x0  nop
    ctx->pc = 0x1578ecu;
    // NOP
    ctx->pc = 0x1578f0u;
}
