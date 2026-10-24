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

// Function: Railmove_main
// Address: 0x182570 - 0x182df4
void Railmove_main_0x182570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Railmove_main_0x182570");
#endif

    switch (ctx->pc) {
        case 0x1825bcu: goto label_1825bc;
        case 0x182660u: goto label_182660;
        case 0x182804u: goto label_182804;
        case 0x1828fcu: goto label_1828fc;
        case 0x182960u: goto label_182960;
        case 0x182accu: goto label_182acc;
        case 0x182becu: goto label_182bec;
        case 0x182dd4u: goto label_182dd4;
        case 0x182de0u: goto label_182de0;
        default: break;
    }

    ctx->pc = 0x182570u;

    // 0x182570: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x182574: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x182574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x182578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18257c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x18257cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x182580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x182580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x182584: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x182584u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x182588: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18258c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182590: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182594: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182594u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182598: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18259c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1825a0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1825a4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1825a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1825a8: 0x24431380  addiu       $v1, $v0, 0x1380
    ctx->pc = 0x1825a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1825ac: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1825acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1825b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1825b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1825b4: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x1825B4u;
    SET_GPR_U32(ctx, 31, 0x1825BCu);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x1825B4u, 0x1825BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825BCu;
label_1825bc:
    // 0x1825bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1825c0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1825c0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1825c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1825c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1825c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1825c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1825cc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1825ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1825d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1825d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1825d4: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1825d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1825d8: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1825d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1825dc: 0x24621380  addiu       $v0, $v1, 0x1380
    ctx->pc = 0x1825dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1825e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1825e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1825e4: 0x90430154  lbu         $v1, 0x154($v0)
    ctx->pc = 0x1825e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1825e8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1825e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1825ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1825f0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1825f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1825f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1825f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1825f8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1825fc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1825fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182600: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x182600u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x182604: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x182604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x182608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x182608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18260c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18260cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182610: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x182610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x182614: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x182614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x182618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18261c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x18261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x182620: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182624: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182624u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182628: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18262c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18262cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182630: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182638: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x182638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18263c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18263cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182640: 0x24431380  addiu       $v1, $v0, 0x1380
    ctx->pc = 0x182640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182644: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x182644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x182648: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x182648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x18264c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18264cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182650: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x182650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182654: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x182654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x182658: 0xc05ef38  jal         func_17BCE0
    ctx->pc = 0x182658u;
    SET_GPR_U32(ctx, 31, 0x182660u);
    ctx->pc = 0x17BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCE0u, 0x182658u, 0x182660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182660u;
label_182660:
    // 0x182660: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182664: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182664u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182668: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x182668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18266c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18266cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182670: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x182670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182674: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x182674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182678: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18267c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182680: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182684: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x182684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182688: 0x8c620158  lw          $v0, 0x158($v1)
    ctx->pc = 0x182688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x18268c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x18268cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x182690: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x182690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x182694: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x182694u;
    {
        const bool branch_taken_0x182694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182694) {
            ctx->pc = 0x182818u;
            goto label_182818;
        }
    }
    ctx->pc = 0x18269Cu;
    // 0x18269c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18269cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1826a0: 0xc421f238  lwc1        $f1, -0xDC8($at)
    ctx->pc = 0x1826a0u;
    { uint32_t bits = FAST_READ32(0x47F238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1826a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1826a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1826a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1826ac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1826acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1826b0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1826b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1826b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1826b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1826b8: 0x0  nop
    ctx->pc = 0x1826b8u;
    // NOP
    // 0x1826bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1826bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1826c0: 0x0  nop
    ctx->pc = 0x1826c0u;
    // NOP
    // 0x1826c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1826C4u;
    {
        const bool branch_taken_0x1826c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1826c4) {
            ctx->pc = 0x1826E0u;
            goto label_1826e0;
        }
    }
    ctx->pc = 0x1826CCu;
    // 0x1826cc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1826ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1826d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1826d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1826d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1826d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1826D8u;
    {
        const bool branch_taken_0x1826d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1826d8) {
            ctx->pc = 0x1826E8u;
            goto label_1826e8;
        }
    }
    ctx->pc = 0x1826E0u;
label_1826e0:
    // 0x1826e0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1826e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826e4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1826e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1826e8:
    // 0x1826e8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1826e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1826ec: 0x3c0442fa  lui         $a0, 0x42FA
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17146 << 16));
    // 0x1826f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1826f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1826f4: 0x0  nop
    ctx->pc = 0x1826f4u;
    // NOP
    // 0x1826f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1826f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1826fc: 0x0  nop
    ctx->pc = 0x1826fcu;
    // NOP
    // 0x182700: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x182700u;
    {
        const bool branch_taken_0x182700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182700) {
            ctx->pc = 0x182824u;
            goto label_182824;
        }
    }
    ctx->pc = 0x182708u;
    // 0x182708: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x182708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18270c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18270cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182710: 0x0  nop
    ctx->pc = 0x182710u;
    // NOP
    // 0x182714: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182718: 0x0  nop
    ctx->pc = 0x182718u;
    // NOP
    // 0x18271c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18271Cu;
    {
        const bool branch_taken_0x18271c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18271c) {
            ctx->pc = 0x182748u;
            goto label_182748;
        }
    }
    ctx->pc = 0x182724u;
    // 0x182724: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182728: 0xc421f238  lwc1        $f1, -0xDC8($at)
    ctx->pc = 0x182728u;
    { uint32_t bits = FAST_READ32(0x47F238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18272c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x18272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x182730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182734: 0x0  nop
    ctx->pc = 0x182734u;
    // NOP
    // 0x182738: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18273c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182740: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182740u;
    {
        const bool branch_taken_0x182740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182740) {
            ctx->pc = 0x182760u;
            goto label_182760;
        }
    }
    ctx->pc = 0x182748u;
label_182748:
    // 0x182748: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x18274c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18274cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182750: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182754: 0xc420f238  lwc1        $f0, -0xDC8($at)
    ctx->pc = 0x182754u;
    { uint32_t bits = FAST_READ32(0x47F238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182758: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x182758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18275c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18275cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_182760:
    // 0x182760: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182764: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182764u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182768: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18276c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18276cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182770: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182778: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18277c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182780: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182788: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x182788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18278c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18278cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182794: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182798: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18279c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x18279cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1827a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1827a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1827a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1827a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1827a8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1827a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1827ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827b0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1827b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1827b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1827b8: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1827b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1827bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1827c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1827c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1827c8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1827c8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1827cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1827ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1827d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1827d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1827d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1827d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1827d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1827e0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1827e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1827e4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1827e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1827e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827ec: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x1827ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1827f0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1827f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1827f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1827f8: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x1827f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1827fc: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x1827FCu;
    SET_GPR_U32(ctx, 31, 0x182804u);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x1827FCu, 0x182804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182804u;
label_182804:
    // 0x182804: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x182804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182808: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18280c: 0xe420f238  swc1        $f0, -0xDC8($at)
    ctx->pc = 0x18280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F238u, _value); } while (0); }
    // 0x182810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182810u;
    {
        const bool branch_taken_0x182810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182810) {
            ctx->pc = 0x182824u;
            goto label_182824;
        }
    }
    ctx->pc = 0x182818u;
label_182818:
    // 0x182818: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x182818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18281c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18281cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182820: 0xe420f238  swc1        $f0, -0xDC8($at)
    ctx->pc = 0x182820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F238u, _value); } while (0); }
label_182824:
    // 0x182824: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182828: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182828u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18282c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18282cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182830: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182830u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182834: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18283c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18283cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182840: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182844: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18284c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x18284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182850: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x182850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182854: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x182854u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x182858: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x182858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x18285c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182860: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182860u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182864: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182868: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182868u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18286c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182874: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182878: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x18287c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x18287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182884: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x182884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182888: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x182888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18288c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18288cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x182890: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x182890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x182894: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182898: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182898u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18289c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1828a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1828a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1828a4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1828a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828ac: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1828b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1828b4: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1828b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1828b8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1828b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1828bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1828c0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1828c0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1828c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1828c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1828c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1828c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1828cc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1828ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1828d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1828d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1828d8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1828d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1828dc: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1828dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1828e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828e4: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x1828e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1828e8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1828e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1828ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1828ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1828f0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1828f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1828f4: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x1828F4u;
    SET_GPR_U32(ctx, 31, 0x1828FCu);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x1828F4u, 0x1828FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828FCu;
label_1828fc:
    // 0x1828fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1828fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182900: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182900u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182904: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182908: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182908u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18290c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x18290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182914: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182918: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x182918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18291c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x18291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x182920: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x182920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182924: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182928: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182928u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18292c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18292cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182930: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182930u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182934: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18293c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182940: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182944: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18294c: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x18294cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x182950: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x182950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182954: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x182954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182958: 0xc05f2cc  jal         func_17CB30
    ctx->pc = 0x182958u;
    SET_GPR_U32(ctx, 31, 0x182960u);
    ctx->pc = 0x17CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB30u, 0x182958u, 0x182960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182960u;
label_182960:
    // 0x182960: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x182960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x182964: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182968: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18296c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182970: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182970u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182974: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18297c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18297cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182980: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182984: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18298c: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x182990: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x182990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x182994: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182998: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x182998u;
    {
        const bool branch_taken_0x182998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182998) {
            ctx->pc = 0x182BF4u;
            goto label_182bf4;
        }
    }
    ctx->pc = 0x1829A0u;
    // 0x1829a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1829a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1829a4: 0xc421f240  lwc1        $f1, -0xDC0($at)
    ctx->pc = 0x1829a4u;
    { uint32_t bits = FAST_READ32(0x47F240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1829a8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1829a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1829ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1829acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1829b0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1829b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1829b4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1829b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1829b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1829b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1829bc: 0x0  nop
    ctx->pc = 0x1829bcu;
    // NOP
    // 0x1829c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1829c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1829c4: 0x0  nop
    ctx->pc = 0x1829c4u;
    // NOP
    // 0x1829c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1829C8u;
    {
        const bool branch_taken_0x1829c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1829c8) {
            ctx->pc = 0x1829E4u;
            goto label_1829e4;
        }
    }
    ctx->pc = 0x1829D0u;
    // 0x1829d0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1829d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1829d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1829d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1829d8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1829d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1829dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1829DCu;
    {
        const bool branch_taken_0x1829dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1829dc) {
            ctx->pc = 0x1829ECu;
            goto label_1829ec;
        }
    }
    ctx->pc = 0x1829E4u;
label_1829e4:
    // 0x1829e4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1829e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1829e8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1829e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1829ec:
    // 0x1829ec: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1829ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1829f0: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x1829f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x1829f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1829f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1829f8: 0x0  nop
    ctx->pc = 0x1829f8u;
    // NOP
    // 0x1829fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1829fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182a00: 0x0  nop
    ctx->pc = 0x182a00u;
    // NOP
    // 0x182a04: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
    ctx->pc = 0x182A04u;
    {
        const bool branch_taken_0x182a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182a04) {
            ctx->pc = 0x182C00u;
            goto label_182c00;
        }
    }
    ctx->pc = 0x182A0Cu;
    // 0x182a0c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x182a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182a14: 0x0  nop
    ctx->pc = 0x182a14u;
    // NOP
    // 0x182a18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182a1c: 0x0  nop
    ctx->pc = 0x182a1cu;
    // NOP
    // 0x182a20: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x182A20u;
    {
        const bool branch_taken_0x182a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182a20) {
            ctx->pc = 0x182A4Cu;
            goto label_182a4c;
        }
    }
    ctx->pc = 0x182A28u;
    // 0x182a28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a2c: 0xc421f240  lwc1        $f1, -0xDC0($at)
    ctx->pc = 0x182a2cu;
    { uint32_t bits = FAST_READ32(0x47F240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182a30: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x182a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x182a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182a38: 0x0  nop
    ctx->pc = 0x182a38u;
    // NOP
    // 0x182a3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182a40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x182a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x182a44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182A44u;
    {
        const bool branch_taken_0x182a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182a44) {
            ctx->pc = 0x182A64u;
            goto label_182a64;
        }
    }
    ctx->pc = 0x182A4Cu;
label_182a4c:
    // 0x182a4c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x182a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x182a50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x182a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182a54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a58: 0xc420f240  lwc1        $f0, -0xDC0($at)
    ctx->pc = 0x182a58u;
    { uint32_t bits = FAST_READ32(0x47F240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x182a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182a60: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x182a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_182a64:
    // 0x182a64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a68: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182a6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182a70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182a70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182a74: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182a7c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182a80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x182a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x182a84: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x182a88: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x182a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182a8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a90: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182a90u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182a94: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182a98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182a98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182a9c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182aa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182aa4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182aa8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182aac: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182ab4: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x182ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x182ab8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x182ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182abc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x182abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182ac0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x182ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182ac4: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x182AC4u;
    SET_GPR_U32(ctx, 31, 0x182ACCu);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x182AC4u, 0x182ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182ACCu;
label_182acc:
    // 0x182acc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x182accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ad0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182ad4: 0xe420f240  swc1        $f0, -0xDC0($at)
    ctx->pc = 0x182ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F240u, _value); } while (0); }
    // 0x182ad8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182adc: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182adcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182ae0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182ae4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182ae4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182ae8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182af0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182af4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182af8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b00: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x182b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182b04: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x182b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182b08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x182b08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x182b0c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x182b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182b10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182b14: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182b14u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182b18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182b1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182b1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182b20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b28: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182b2c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182b30: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b38: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x182b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182b3c: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x182b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182b40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x182b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x182b44: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x182b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182b48: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182b4c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182b50: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182b54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182b54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182b58: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b60: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182b64: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182b68: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b70: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x182b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x182b74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x182b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182b7c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x182b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182b80: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182b84: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182b84u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182b88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182b8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182b8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182b90: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x182b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b98: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182b9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x182b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x182ba0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x182ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x182ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182ba8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x182ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x182bac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182bb0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182bb0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182bb4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182bb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182bb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182bbc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182bc4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182bc8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182bcc: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182bd4: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x182bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x182bd8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x182bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182bdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x182bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182be0: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x182be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182be4: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x182BE4u;
    SET_GPR_U32(ctx, 31, 0x182BECu);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x182BE4u, 0x182BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BECu;
label_182bec:
    // 0x182bec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182BECu;
    {
        const bool branch_taken_0x182bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182bec) {
            ctx->pc = 0x182C00u;
            goto label_182c00;
        }
    }
    ctx->pc = 0x182BF4u;
label_182bf4:
    // 0x182bf4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x182bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182bf8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182bfc: 0xe420f240  swc1        $f0, -0xDC0($at)
    ctx->pc = 0x182bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F240u, _value); } while (0); }
label_182c00:
    // 0x182c00: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x182c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182c04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c08: 0xe420f240  swc1        $f0, -0xDC0($at)
    ctx->pc = 0x182c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F240u, _value); } while (0); }
    // 0x182c0c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x182c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182c10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c14: 0xe420f238  swc1        $f0, -0xDC8($at)
    ctx->pc = 0x182c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F238u, _value); } while (0); }
    // 0x182c18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c1c: 0x8430f138  lh          $s0, -0xEC8($at)
    ctx->pc = 0x182c1cu;
    SET_GPR_S32(ctx, 16, (int16_t)FAST_READ16(0x47F138u));
    // 0x182c20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x182c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x182c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182c28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x182c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182c2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x182c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182c30: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182c34: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x182c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x182c38: 0x24821380  addiu       $v0, $a0, 0x1380
    ctx->pc = 0x182c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x182c3c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x182c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182c40: 0x8c650158  lw          $a1, 0x158($v1)
    ctx->pc = 0x182c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x182c44: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x182c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x182c48: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x182c4c: 0xac620158  sw          $v0, 0x158($v1)
    ctx->pc = 0x182c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 2));
    // 0x182c50: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182c54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x182c54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182c58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182c5c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x182c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x182c60: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x182c60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x182c64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c68: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x182c6c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x182c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x182c70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182c74: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182c7c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182c80: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182c84: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182c88: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x182c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182c8c: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x182c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x182c90: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x182c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x182c94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x182c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x182c98: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x182C98u;
    {
        const bool branch_taken_0x182c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x182c98) {
            ctx->pc = 0x182CF0u;
            goto label_182cf0;
        }
    }
    ctx->pc = 0x182CA0u;
    // 0x182ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x182ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182ca4: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x182CA4u;
    {
        const bool branch_taken_0x182ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x182ca4) {
            ctx->pc = 0x182CE0u;
            goto label_182ce0;
        }
    }
    ctx->pc = 0x182CACu;
    // 0x182cac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182cb0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x182CB0u;
    {
        const bool branch_taken_0x182cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x182cb0) {
            ctx->pc = 0x182CC8u;
            goto label_182cc8;
        }
    }
    ctx->pc = 0x182CB8u;
    // 0x182cb8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x182CB8u;
    {
        const bool branch_taken_0x182cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cb8) {
            ctx->pc = 0x182D08u;
            goto label_182d08;
        }
    }
    ctx->pc = 0x182CC0u;
    // 0x182cc0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x182CC0u;
    {
        const bool branch_taken_0x182cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cc0) {
            ctx->pc = 0x182D08u;
            goto label_182d08;
        }
    }
    ctx->pc = 0x182CC8u;
label_182cc8:
    // 0x182cc8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x182cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ccc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x182cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182cd0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x182cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182cd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x182cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x182cd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x182CD8u;
    {
        const bool branch_taken_0x182cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cd8) {
            ctx->pc = 0x182D08u;
            goto label_182d08;
        }
    }
    ctx->pc = 0x182CE0u;
label_182ce0:
    // 0x182ce0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x182ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ce4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x182ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x182ce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182CE8u;
    {
        const bool branch_taken_0x182ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ce8) {
            ctx->pc = 0x182D08u;
            goto label_182d08;
        }
    }
    ctx->pc = 0x182CF0u;
label_182cf0:
    // 0x182cf0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x182cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182cf4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x182cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182cf8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x182cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182cfc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x182cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x182d00: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x182d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d04: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x182d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_182d08:
    // 0x182d08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x182d0c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x182d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x182d10: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x182d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x182d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182D14u;
    {
        const bool branch_taken_0x182d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d14) {
            ctx->pc = 0x182D24u;
            goto label_182d24;
        }
    }
    ctx->pc = 0x182D1Cu;
    // 0x182d1c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x182d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d20: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x182d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_182d24:
    // 0x182d24: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x182d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182d28: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x182d28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182d2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d30: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x182d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x182d34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x182d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x182d38: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182d3c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182d40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x182d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182d44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182d44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182d48: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x182d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182d4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x182d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x182d50: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182d54: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182d58: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182d5c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x182d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182d60: 0x8ca60164  lw          $a2, 0x164($a1)
    ctx->pc = 0x182d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
    // 0x182d64: 0x30c70001  andi        $a3, $a2, 0x1
    ctx->pc = 0x182d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x182d68: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x182D68u;
    {
        const bool branch_taken_0x182d68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d68) {
            ctx->pc = 0x182DA0u;
            goto label_182da0;
        }
    }
    ctx->pc = 0x182D70u;
    // 0x182d70: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x182d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d78: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x182d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x182d7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d80: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x182d84: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x182D84u;
    {
        const bool branch_taken_0x182d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d84) {
            ctx->pc = 0x182DC8u;
            goto label_182dc8;
        }
    }
    ctx->pc = 0x182D8Cu;
    // 0x182d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d94: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x182d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
    // 0x182d98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x182D98u;
    {
        const bool branch_taken_0x182d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d98) {
            ctx->pc = 0x182DC8u;
            goto label_182dc8;
        }
    }
    ctx->pc = 0x182DA0u;
label_182da0:
    // 0x182da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182da4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x182da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182da8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x182da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x182dac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182db0: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x182db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x182db4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182DB4u;
    {
        const bool branch_taken_0x182db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182db4) {
            ctx->pc = 0x182DC8u;
            goto label_182dc8;
        }
    }
    ctx->pc = 0x182DBCu;
    // 0x182dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182dc0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182dc4: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x182dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
label_182dc8:
    // 0x182dc8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x182dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182dcc: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x182DCCu;
    SET_GPR_U32(ctx, 31, 0x182DD4u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x182DCCu, 0x182DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DD4u;
label_182dd4:
    // 0x182dd4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x182dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182dd8: 0xc05f910  jal         func_17E440
    ctx->pc = 0x182DD8u;
    SET_GPR_U32(ctx, 31, 0x182DE0u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x182DD8u, 0x182DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DE0u;
label_182de0:
    // 0x182de0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x182de0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182de8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x182de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x182dec: 0x3e00008  jr          $ra
    ctx->pc = 0x182DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182DF4u;
}
