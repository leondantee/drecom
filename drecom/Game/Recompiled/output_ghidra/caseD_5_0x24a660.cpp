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

// Function: caseD_5
// Address: 0x24a660 - 0x24a780
void caseD_5_0x24a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x24a660");
#endif

    switch (ctx->pc) {
        case 0x24a66cu: goto label_24a66c;
        case 0x24a694u: goto label_24a694;
        case 0x24a6bcu: goto label_24a6bc;
        case 0x24a6d8u: goto label_24a6d8;
        case 0x24a718u: goto label_24a718;
        case 0x24a77cu: goto label_24a77c;
        default: break;
    }

    ctx->pc = 0x24a660u;

    // 0x24a660: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a664: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24A664u;
    SET_GPR_U32(ctx, 31, 0x24A66Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A66Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A66Cu) { return; }
    ctx->pc = 0x24A66Cu;
label_24a66c:
    // 0x24a66c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a670: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a674: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a678: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x24a67c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24a680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a684: 0x0  nop
    ctx->pc = 0x24a684u;
    // NOP
    // 0x24a688: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24a688u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a68c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24A68Cu;
    SET_GPR_U32(ctx, 31, 0x24A694u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A68Cu, 0x24A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A694u;
label_24a694:
    // 0x24a694: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a698: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24a69c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a6a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a6a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a6a8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a6ac: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a6acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a6b0: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x24a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a6b4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x24A6B4u;
    SET_GPR_U32(ctx, 31, 0x24A6BCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24A6BCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A6BCu) { return; }
    ctx->pc = 0x24A6BCu;
label_24a6bc:
    // 0x24a6bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a6bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a6c0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24a6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24a6c4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24a6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24a6c8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a6cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24a6ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a6d0: 0xc040c00  jal         func_103000
    ctx->pc = 0x24A6D0u;
    SET_GPR_U32(ctx, 31, 0x24A6D8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A6D8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A6D8u) { return; }
    ctx->pc = 0x24A6D8u;
label_24a6d8:
    // 0x24a6d8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a6dc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x24a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a6e0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a6e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a6e8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x24a6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24a6ec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a6f0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x24a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a6f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x24a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x24a6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a6fc: 0x0  nop
    ctx->pc = 0x24a6fcu;
    // NOP
    // 0x24a700: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24a700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a704: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x24a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x24a708: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x24a708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x24a70c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a70cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a710: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x24A710u;
    SET_GPR_U32(ctx, 31, 0x24A718u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x24A710u, 0x24A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A718u;
label_24a718:
    // 0x24a718: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x24a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a71c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x24a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x24a720: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24a720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a724: 0x0  nop
    ctx->pc = 0x24a724u;
    // NOP
    // 0x24a728: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24a728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x24a72c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24a72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a730: 0x0  nop
    ctx->pc = 0x24a730u;
    // NOP
    // 0x24a734: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x24A734u;
    {
        const bool branch_taken_0x24a734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a734) {
            ctx->pc = 0x24A780u;
            return;
        }
    }
    ctx->pc = 0x24A73Cu;
    // 0x24a73c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x24a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x24a740: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a744: 0xa4a4002a  sh          $a0, 0x2A($a1)
    ctx->pc = 0x24a744u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x24a748: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24a74c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x24a74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a750: 0xa0e60029  sb          $a2, 0x29($a3)
    ctx->pc = 0x24a750u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 41), (uint8_t)GPR_U32(ctx, 6));
    // 0x24a754: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x24a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a758: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x24a758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x24a75c: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x24a75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x24a760: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a764: 0x24030507  addiu       $v1, $zero, 0x507
    ctx->pc = 0x24a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x24a768: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a76c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x24a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x24a770: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a774: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24A774u;
    SET_GPR_U32(ctx, 31, 0x24A77Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A774u, 0x24A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A77Cu;
label_24a77c:
    // 0x24a77c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a77cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24a780u;
}
