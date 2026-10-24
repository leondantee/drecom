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

// Function: entry_002935a8
// Address: 0x2935a8 - 0x2937bc
void entry_002935a8_0x2935a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002935a8_0x2935a8");
#endif

    switch (ctx->pc) {
        case 0x2935f8u: goto label_2935f8;
        case 0x293638u: goto label_293638;
        case 0x293678u: goto label_293678;
        case 0x2936b8u: goto label_2936b8;
        case 0x2936f8u: goto label_2936f8;
        case 0x293738u: goto label_293738;
        case 0x293778u: goto label_293778;
        case 0x2937b8u: goto label_2937b8;
        default: break;
    }

    ctx->pc = 0x2935a8u;

    // 0x2935a8: 0x92435e04  lbu         $v1, 0x5E04($s2)
    ctx->pc = 0x2935a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24068)));
    // 0x2935ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2935acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2935b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2935b4: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2935B4u;
    {
        const bool branch_taken_0x2935b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2935b4) {
            ctx->pc = 0x2937BCu;
            return;
        }
    }
    ctx->pc = 0x2935BCu;
    // 0x2935bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2935bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2935c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2935c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2935c4: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x2935c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2935c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2935cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2935ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2935d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2935d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2935d4: 0x0  nop
    ctx->pc = 0x2935d4u;
    // NOP
    // 0x2935d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2935d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2935dc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2935dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2935e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2935e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2935e4: 0x0  nop
    ctx->pc = 0x2935e4u;
    // NOP
    // 0x2935e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2935e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2935ec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2935ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2935f0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2935F0u;
    SET_GPR_U32(ctx, 31, 0x2935F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2935F0u, 0x2935F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935F8u;
label_2935f8:
    // 0x2935f8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2935f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x2935fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2935fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293604: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293608: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29360c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293614: 0x0  nop
    ctx->pc = 0x293614u;
    // NOP
    // 0x293618: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29361c: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x29361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x293620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293624: 0x0  nop
    ctx->pc = 0x293624u;
    // NOP
    // 0x293628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29362c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29362cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293630: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x293630u;
    SET_GPR_U32(ctx, 31, 0x293638u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293630u, 0x293638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293638u;
label_293638:
    // 0x293638: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x293638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x29363c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29363cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293644: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293648: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29364c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293654: 0x0  nop
    ctx->pc = 0x293654u;
    // NOP
    // 0x293658: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29365c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x29365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x293660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293664: 0x0  nop
    ctx->pc = 0x293664u;
    // NOP
    // 0x293668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29366c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29366cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293670: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x293670u;
    SET_GPR_U32(ctx, 31, 0x293678u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293670u, 0x293678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293678u;
label_293678:
    // 0x293678: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x293678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x29367c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293684: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293688: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29368c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293694: 0x0  nop
    ctx->pc = 0x293694u;
    // NOP
    // 0x293698: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29369c: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x29369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2936a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2936a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2936a4: 0x0  nop
    ctx->pc = 0x2936a4u;
    // NOP
    // 0x2936a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2936a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2936ac: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2936acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2936b0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2936B0u;
    SET_GPR_U32(ctx, 31, 0x2936B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2936B0u, 0x2936B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936B8u;
label_2936b8:
    // 0x2936b8: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x2936b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x2936bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2936bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2936c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2936c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2936c4: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x2936c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2936c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2936cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2936ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2936d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2936d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2936d4: 0x0  nop
    ctx->pc = 0x2936d4u;
    // NOP
    // 0x2936d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2936d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2936dc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2936e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2936e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2936e4: 0x0  nop
    ctx->pc = 0x2936e4u;
    // NOP
    // 0x2936e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2936e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2936ec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2936ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2936f0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2936F0u;
    SET_GPR_U32(ctx, 31, 0x2936F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2936F0u, 0x2936F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936F8u;
label_2936f8:
    // 0x2936f8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x2936f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x2936fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2936fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293704: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293708: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29370c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293714: 0x0  nop
    ctx->pc = 0x293714u;
    // NOP
    // 0x293718: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29371c: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x29371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x293720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293724: 0x0  nop
    ctx->pc = 0x293724u;
    // NOP
    // 0x293728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29372c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29372cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293730: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x293730u;
    SET_GPR_U32(ctx, 31, 0x293738u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293730u, 0x293738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293738u;
label_293738:
    // 0x293738: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x293738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x29373c: 0x3c173f00  lui         $s7, 0x3F00
    ctx->pc = 0x29373cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16128 << 16));
    // 0x293740: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x293740u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293744: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29374c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293754: 0x0  nop
    ctx->pc = 0x293754u;
    // NOP
    // 0x293758: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29375c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x29375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x293760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293764: 0x0  nop
    ctx->pc = 0x293764u;
    // NOP
    // 0x293768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29376c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29376cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293770: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x293770u;
    SET_GPR_U32(ctx, 31, 0x293778u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293770u, 0x293778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293778u;
label_293778:
    // 0x293778: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x293778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x29377c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293784: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29378c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x293790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293794: 0x0  nop
    ctx->pc = 0x293794u;
    // NOP
    // 0x293798: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29379c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x29379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2937a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2937a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937a4: 0x0  nop
    ctx->pc = 0x2937a4u;
    // NOP
    // 0x2937a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2937a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2937ac: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2937acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2937b0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2937B0u;
    SET_GPR_U32(ctx, 31, 0x2937B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2937B0u, 0x2937B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937B8u;
label_2937b8:
    // 0x2937b8: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x2937b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    ctx->pc = 0x2937bcu;
}
