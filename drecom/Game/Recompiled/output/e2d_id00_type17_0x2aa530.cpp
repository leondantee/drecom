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

// Function: e2d_id00_type17
// Address: 0x2aa530 - 0x2aa6bc
void e2d_id00_type17_0x2aa530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type17_0x2aa530");
#endif

    switch (ctx->pc) {
        case 0x2aa598u: goto label_2aa598;
        case 0x2aa5c8u: goto label_2aa5c8;
        case 0x2aa5f8u: goto label_2aa5f8;
        case 0x2aa628u: goto label_2aa628;
        case 0x2aa640u: goto label_2aa640;
        default: break;
    }

    ctx->pc = 0x2aa530u;

    // 0x2aa530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa534: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aa534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aa538: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aa538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aa53c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa548: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aa548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aa54c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa558: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aa558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aa55c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa564: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa568: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aa568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aa56c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa574: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa578: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aa578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aa57c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2aa57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2aa580: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2aa580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2aa584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa588: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa58c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2aa58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2aa590: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2AA590u;
    SET_GPR_U32(ctx, 31, 0x2AA598u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2AA590u, 0x2AA598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA598u;
label_2aa598:
    // 0x2aa598: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2aa59c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa5a0: 0x0  nop
    ctx->pc = 0x2aa5a0u;
    // NOP
    // 0x2aa5a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa5a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2aa5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2aa5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa5b0: 0x0  nop
    ctx->pc = 0x2aa5b0u;
    // NOP
    // 0x2aa5b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa5b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa5bc: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2aa5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2aa5c0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2AA5C0u;
    SET_GPR_U32(ctx, 31, 0x2AA5C8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2AA5C0u, 0x2AA5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5C8u;
label_2aa5c8:
    // 0x2aa5c8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2aa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2aa5cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa5d0: 0x0  nop
    ctx->pc = 0x2aa5d0u;
    // NOP
    // 0x2aa5d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa5d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2aa5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2aa5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa5e0: 0x0  nop
    ctx->pc = 0x2aa5e0u;
    // NOP
    // 0x2aa5e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa5e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa5ec: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2aa5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2aa5f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2AA5F0u;
    SET_GPR_U32(ctx, 31, 0x2AA5F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2AA5F0u, 0x2AA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5F8u;
label_2aa5f8:
    // 0x2aa5f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2aa5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2aa5fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa600: 0x0  nop
    ctx->pc = 0x2aa600u;
    // NOP
    // 0x2aa604: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa608: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2aa608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2aa60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa610: 0x0  nop
    ctx->pc = 0x2aa610u;
    // NOP
    // 0x2aa614: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa618: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa61c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2aa61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2aa620: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2AA620u;
    SET_GPR_U32(ctx, 31, 0x2AA628u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2AA620u, 0x2AA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA628u;
label_2aa628:
    // 0x2aa628: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2aa628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa62c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2aa62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2aa630: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AA630u;
    {
        const bool branch_taken_0x2aa630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa630) {
            ctx->pc = 0x2AA66Cu;
            goto label_2aa66c;
        }
    }
    ctx->pc = 0x2AA638u;
    // 0x2aa638: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2AA638u;
    SET_GPR_U32(ctx, 31, 0x2AA640u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2AA638u, 0x2AA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA640u;
label_2aa640:
    // 0x2aa640: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2aa640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2aa644: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aa644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa648: 0x0  nop
    ctx->pc = 0x2aa648u;
    // NOP
    // 0x2aa64c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2aa64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa650: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2aa650u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2aa654: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2aa654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa65c: 0x0  nop
    ctx->pc = 0x2aa65cu;
    // NOP
    // 0x2aa660: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2aa660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aa664: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa668: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2aa668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_2aa66c:
    // 0x2aa66c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa670: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2aa670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aa674: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2aa674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2aa678: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa67c: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aa67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aa680: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa684: 0xa0600138  sb          $zero, 0x138($v1)
    ctx->pc = 0x2aa684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aa688: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2aa688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2aa68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa690: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa694: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aa694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aa698: 0x3c03ba83  lui         $v1, 0xBA83
    ctx->pc = 0x2aa698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47747 << 16));
    // 0x2aa69c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2aa69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2aa6a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa6a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa6a8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2aa6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2aa6ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa6acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa6b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA6BCu;
}
