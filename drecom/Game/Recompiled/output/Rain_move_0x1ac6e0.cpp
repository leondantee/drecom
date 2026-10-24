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

// Function: Rain_move
// Address: 0x1ac6e0 - 0x1accb8
void Rain_move_0x1ac6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_move_0x1ac6e0");
#endif

    switch (ctx->pc) {
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc30u: goto label_1acc30;
        default: break;
    }

    ctx->pc = 0x1ac6e0u;

    // 0x1ac6e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1ac6e4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1ac6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1ac6e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ac6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ac6ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ac6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ac6f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ac6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ac6f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ac6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ac6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac6fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ac6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac700: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ac704: 0x2471f010  addiu       $s1, $v1, -0xFF0
    ctx->pc = 0x1ac704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1ac708: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ac708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ac70c: 0x2474f000  addiu       $s4, $v1, -0x1000
    ctx->pc = 0x1ac70cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1ac710: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac714: 0x9023f001  lbu         $v1, -0xFFF($at)
    ctx->pc = 0x1ac714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5EF001u));
    // 0x1ac718: 0x1060015d  beqz        $v1, . + 4 + (0x15D << 2)
    ctx->pc = 0x1AC718u;
    {
        const bool branch_taken_0x1ac718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac718) {
            ctx->pc = 0x1ACC90u;
            goto label_1acc90;
        }
    }
    ctx->pc = 0x1AC720u;
    // 0x1ac720: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x1ac720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ac724: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ac724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ac728: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ac728u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1ac72c: 0xa022b500  sb          $v0, -0x4B00($at)
    ctx->pc = 0x1ac72cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948096), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac734: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1ac734u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1ac738: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac73c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1ac73cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1ac740: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ac740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ac744: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x1ac744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x1ac748: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x1ac748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1ac74c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1AC74Cu;
    SET_GPR_U32(ctx, 31, 0x1AC754u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1AC754u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC754u) { return; }
    ctx->pc = 0x1AC754u;
label_1ac754:
    // 0x1ac754: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1ac754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac758: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ac758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac75c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1ac75cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac760: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1ac760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac764: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1ac764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac768: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac76c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1ac76cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ac770: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AC770u;
    SET_GPR_U32(ctx, 31, 0x1AC778u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AC770u, 0x1AC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC778u;
label_1ac778:
    // 0x1ac778: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x1ac778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ac77c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1ac77cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1ac780: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1AC780u;
    SET_GPR_U32(ctx, 31, 0x1AC788u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1AC780u, 0x1AC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC788u;
label_1ac788:
    // 0x1ac788: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ac788u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ac78c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ac78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1ac790: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ac794: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1AC794u;
    SET_GPR_U32(ctx, 31, 0x1AC79Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1AC79Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC79Cu) { return; }
    ctx->pc = 0x1AC79Cu;
label_1ac79c:
    // 0x1ac79c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ac79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ac7a0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ac7a4: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x1ac7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ac7a8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1AC7A8u;
    SET_GPR_U32(ctx, 31, 0x1AC7B0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1AC7B0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC7B0u) { return; }
    ctx->pc = 0x1AC7B0u;
label_1ac7b0:
    // 0x1ac7b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ac7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac7b4: 0x0  nop
    ctx->pc = 0x1ac7b4u;
    // NOP
    // 0x1ac7b8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ac7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ac7bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ac7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac7c0: 0x0  nop
    ctx->pc = 0x1ac7c0u;
    // NOP
    // 0x1ac7c4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1ac7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ac7c8: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1ac7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1ac7cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ac7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac7d4: 0x0  nop
    ctx->pc = 0x1ac7d4u;
    // NOP
    // 0x1ac7d8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ac7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1ac7dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac7e4: 0x0  nop
    ctx->pc = 0x1ac7e4u;
    // NOP
    // 0x1ac7e8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1ac7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1ac7ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ac7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ac7f0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ac7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ac7f4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ac7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ac7f8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AC7F8u;
    SET_GPR_U32(ctx, 31, 0x1AC800u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AC800u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC800u) { return; }
    ctx->pc = 0x1AC800u;
label_1ac800:
    // 0x1ac800: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac804: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1ac804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1ac808: 0x24630190  addiu       $v1, $v1, 0x190
    ctx->pc = 0x1ac808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1ac80c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1ac80cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac810: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ac810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ac814: 0x2463eff0  addiu       $v1, $v1, -0x1010
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963184));
    // 0x1ac818: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ac818u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5EEFF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5EEFF0u, _value); } while (0);
    // 0x1ac81c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac820: 0xc421eff4  lwc1        $f1, -0x100C($at)
    ctx->pc = 0x1ac820u;
    { uint32_t bits = FAST_READ32(0x5EEFF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac824: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1ac824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac828: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ac828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ac82c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac830: 0xe420eff4  swc1        $f0, -0x100C($at)
    ctx->pc = 0x1ac830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFF4u, _value); } while (0); }
    // 0x1ac834: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac838: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1ac838u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ac83c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ac83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ac840: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ac840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ac844: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC844u;
    {
        const bool branch_taken_0x1ac844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac844) {
            ctx->pc = 0x1AC858u;
            goto label_1ac858;
        }
    }
    ctx->pc = 0x1AC84Cu;
    // 0x1ac84c: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x1ac84cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ac850: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x1AC850u;
    {
        const bool branch_taken_0x1ac850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac850) {
            ctx->pc = 0x1ACC80u;
            goto label_1acc80;
        }
    }
    ctx->pc = 0x1AC858u;
label_1ac858:
    // 0x1ac858: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1ac858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac85c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1AC85Cu;
    {
        const bool branch_taken_0x1ac85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac85c) {
            ctx->pc = 0x1ACC80u;
            goto label_1acc80;
        }
    }
    ctx->pc = 0x1AC864u;
label_1ac864:
    // 0x1ac864: 0x26321d08  addiu       $s2, $s1, 0x1D08
    ctx->pc = 0x1ac864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7432));
    // 0x1ac868: 0x26527ff8  addiu       $s2, $s2, 0x7FF8
    ctx->pc = 0x1ac868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32760));
    // 0x1ac86c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ac86cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac870: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac874: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ac878: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ac878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ac87c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ac87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ac880: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1AC880u;
    {
        const bool branch_taken_0x1ac880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac880) {
            ctx->pc = 0x1AC988u;
            goto label_1ac988;
        }
    }
    ctx->pc = 0x1AC888u;
    // 0x1ac888: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC908u;
            goto label_1ac908;
        }
    }
    ctx->pc = 0x1AC890u;
label_1ac890:
    // 0x1ac890: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1ac890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac894: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ac894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ac898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ac89c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC89Cu;
    {
        const bool branch_taken_0x1ac89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac89c) {
            ctx->pc = 0x1AC900u;
            goto label_1ac900;
        }
    }
    ctx->pc = 0x1AC8A4u;
    // 0x1ac8a4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac8a8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1ac8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac8ac: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ac8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac8b0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac8b4: 0x26267d00  addiu       $a2, $s1, 0x7D00
    ctx->pc = 0x1ac8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32000));
    // 0x1ac8b8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1AC8B8u;
    SET_GPR_U32(ctx, 31, 0x1AC8C0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1AC8C0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC8C0u) { return; }
    ctx->pc = 0x1AC8C0u;
label_1ac8c0:
    // 0x1ac8c0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac8c4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac8c8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1ac8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac8cc: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac8d0: 0xc421eff4  lwc1        $f1, -0x100C($at)
    ctx->pc = 0x1ac8d0u;
    { uint32_t bits = FAST_READ32(0x5EEFF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac8d4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1ac8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1ac8d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ac8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac8e0: 0x0  nop
    ctx->pc = 0x1ac8e0u;
    // NOP
    // 0x1ac8e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ac8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac8e8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ac8e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac8ec: 0x0  nop
    ctx->pc = 0x1ac8ecu;
    // NOP
    // 0x1ac8f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC8F0u;
    {
        const bool branch_taken_0x1ac8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac8f0) {
            ctx->pc = 0x1AC900u;
            goto label_1ac900;
        }
    }
    ctx->pc = 0x1AC8F8u;
    // 0x1ac8f8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1ac8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac8fc: 0x0  nop
    ctx->pc = 0x1ac8fcu;
    // NOP
label_1ac900:
    // 0x1ac900: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac904: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ac908:
    // 0x1ac908: 0x2e0207d0  sltiu       $v0, $s0, 0x7D0
    ctx->pc = 0x1ac908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ac90c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AC90Cu;
    {
        const bool branch_taken_0x1ac90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac90c) {
            ctx->pc = 0x1AC890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac890;
        }
    }
    ctx->pc = 0x1AC914u;
    // 0x1ac914: 0xc06b8cc  jal         func_1AE330
    ctx->pc = 0x1AC914u;
    SET_GPR_U32(ctx, 31, 0x1AC91Cu);
    ctx->pc = 0x1AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE330u, 0x1AC914u, 0x1AC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC91Cu;
label_1ac91c:
    // 0x1ac91c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AC91Cu;
    {
        const bool branch_taken_0x1ac91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac91c) {
            ctx->pc = 0x1AC998u;
            goto label_1ac998;
        }
    }
    ctx->pc = 0x1AC924u;
label_1ac924:
    // 0x1ac924: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1ac924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac928: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ac928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ac92c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ac92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ac930: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC930u;
    {
        const bool branch_taken_0x1ac930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac930) {
            ctx->pc = 0x1AC980u;
            goto label_1ac980;
        }
    }
    ctx->pc = 0x1AC938u;
    // 0x1ac938: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1ac938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac93c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ac940: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ac940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac944: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1ac944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac948: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1ac948u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ac94c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac950: 0xc421eff4  lwc1        $f1, -0x100C($at)
    ctx->pc = 0x1ac950u;
    { uint32_t bits = FAST_READ32(0x5EEFF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac954: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1ac954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1ac958: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1ac958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1ac95c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ac95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac960: 0x0  nop
    ctx->pc = 0x1ac960u;
    // NOP
    // 0x1ac964: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ac964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac968: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ac968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac96c: 0x0  nop
    ctx->pc = 0x1ac96cu;
    // NOP
    // 0x1ac970: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC970u;
    {
        const bool branch_taken_0x1ac970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac970) {
            ctx->pc = 0x1AC980u;
            goto label_1ac980;
        }
    }
    ctx->pc = 0x1AC978u;
    // 0x1ac978: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1ac978u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac97c: 0x0  nop
    ctx->pc = 0x1ac97cu;
    // NOP
label_1ac980:
    // 0x1ac980: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac984: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ac988:
    // 0x1ac988: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1ac988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ac98c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1AC98Cu;
    {
        const bool branch_taken_0x1ac98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac98c) {
            ctx->pc = 0x1AC924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac924;
        }
    }
    ctx->pc = 0x1AC994u;
    // 0x1ac994: 0x0  nop
    ctx->pc = 0x1ac994u;
    // NOP
label_1ac998:
    // 0x1ac998: 0x26321d08  addiu       $s2, $s1, 0x1D08
    ctx->pc = 0x1ac998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7432));
    // 0x1ac99c: 0x26527ff8  addiu       $s2, $s2, 0x7FF8
    ctx->pc = 0x1ac99cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32760));
    // 0x1ac9a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ac9a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac9a4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1ac9a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac9a8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1AC9A8u;
    {
        const bool branch_taken_0x1ac9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9a8) {
            ctx->pc = 0x1ACC70u;
            goto label_1acc70;
        }
    }
    ctx->pc = 0x1AC9B0u;
label_1ac9b0:
    // 0x1ac9b0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac9b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ac9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ac9b8: 0x146000ab  bnez        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x1AC9B8u;
    {
        const bool branch_taken_0x1ac9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9b8) {
            ctx->pc = 0x1ACC68u;
            goto label_1acc68;
        }
    }
    ctx->pc = 0x1AC9C0u;
    // 0x1ac9c0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1ac9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac9c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ac9c8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1ac9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac9cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1ac9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1ac9d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1ac9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1ac9d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ac9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ac9d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac9e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ac9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ac9e4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1ac9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ac9e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1ac9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1ac9ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1ac9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1ac9f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ac9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ac9f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac9fc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1ac9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aca00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1aca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1aca04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aca08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aca0c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1aca0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1aca10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aca14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aca14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aca18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aca18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aca1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca20: 0x0  nop
    ctx->pc = 0x1aca20u;
    // NOP
    // 0x1aca24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1aca24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aca28: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x1aca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
    // 0x1aca2c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1aca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1aca30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca34: 0x0  nop
    ctx->pc = 0x1aca34u;
    // NOP
    // 0x1aca38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1aca38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aca3c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1aca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1aca40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca44: 0x0  nop
    ctx->pc = 0x1aca44u;
    // NOP
    // 0x1aca48: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aca48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aca4c: 0x938380c8  lbu         $v1, -0x7F38($gp)
    ctx->pc = 0x1aca4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x1aca50: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1aca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aca54: 0xa38280c8  sb          $v0, -0x7F38($gp)
    ctx->pc = 0x1aca54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934728), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aca58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aca5c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1aca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1aca60: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1aca64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aca68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1aca68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aca6c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aca70: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aca70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aca74: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1aca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1aca78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1aca78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1aca7c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aca80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aca84: 0x0  nop
    ctx->pc = 0x1aca84u;
    // NOP
    // 0x1aca88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aca88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aca8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aca8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aca90: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1aca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1aca94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1aca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1aca98: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1aca9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1aca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acaa0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acaa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acaac: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1acaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1acab0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acab4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1acab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1acab8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1acab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acabc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acac4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1acac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1acac8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1acac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1acacc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1acaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1acad0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acad4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1acad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1acad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acadc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acae0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acae8: 0x0  nop
    ctx->pc = 0x1acae8u;
    // NOP
    // 0x1acaec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1acaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1acaf0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1acaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1acaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acaf8: 0x0  nop
    ctx->pc = 0x1acaf8u;
    // NOP
    // 0x1acafc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1acafcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1acb00: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1acb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1acb04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1acb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1acb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb0c: 0x0  nop
    ctx->pc = 0x1acb0cu;
    // NOP
    // 0x1acb10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1acb10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1acb14: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1acb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1acb18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acb1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1acb20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acb24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acb28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acb2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acb30: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1acb30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1acb34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acb38: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1acb38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1acb3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1acb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1acb40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1acb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acb44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acb48: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1acb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1acb4c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1acb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1acb50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1acb54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1acb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1acb58: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x1acb58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1acb5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acb60: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acb64: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acb64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acb68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb6c: 0x0  nop
    ctx->pc = 0x1acb6cu;
    // NOP
    // 0x1acb70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1acb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1acb74: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x1acb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
    // 0x1acb78: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1acb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1acb7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb80: 0x0  nop
    ctx->pc = 0x1acb80u;
    // NOP
    // 0x1acb84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1acb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1acb88: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1acb8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb90: 0x0  nop
    ctx->pc = 0x1acb90u;
    // NOP
    // 0x1acb94: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1acb94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1acb98: 0x938380c8  lbu         $v1, -0x7F38($gp)
    ctx->pc = 0x1acb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x1acb9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1acba0: 0xa38280c8  sb          $v0, -0x7F38($gp)
    ctx->pc = 0x1acba0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934728), (uint8_t)GPR_U32(ctx, 2));
    // 0x1acba4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1acba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1acba8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1acba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1acbac: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x1acbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x1acbb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acbb4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1acbb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1acbb8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acbbc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acbbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acbc0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1acbc4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1acbc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1acbc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1acbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1acbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acbd0: 0x0  nop
    ctx->pc = 0x1acbd0u;
    // NOP
    // 0x1acbd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1acbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1acbd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1acbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1acbdc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1acbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1acbe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1acbe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acbe4: 0x0  nop
    ctx->pc = 0x1acbe4u;
    // NOP
    // 0x1acbe8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1acbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1acbec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1acbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1acbf0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1acbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1acbf4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1acbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1acbf8: 0x2445eff0  addiu       $a1, $v0, -0x1010
    ctx->pc = 0x1acbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x1acbfc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1acbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1acc00: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1ACC00u;
    SET_GPR_U32(ctx, 31, 0x1ACC08u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1ACC08u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACC08u) { return; }
    ctx->pc = 0x1ACC08u;
label_1acc08:
    // 0x1acc08: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1acc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1acc0c: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1acc10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1acc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1acc14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acc18: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1acc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1acc1c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1ACC1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC24u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1ACC24u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACC24u) { return; }
    ctx->pc = 0x1ACC24u;
label_1acc24:
    // 0x1acc24: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1acc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1acc28: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1ACC28u;
    SET_GPR_U32(ctx, 31, 0x1ACC30u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1ACC28u, 0x1ACC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC30u;
label_1acc30:
    // 0x1acc30: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1acc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1acc34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1acc34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1acc38: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1acc3c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1acc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1acc40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acc44: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1acc44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1acc48: 0xa424a4d0  sh          $a0, -0x5B30($at)
    ctx->pc = 0x1acc48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 4));
    // 0x1acc4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1acc50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acc54: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1acc54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1acc58: 0x9023b500  lbu         $v1, -0x4B00($at)
    ctx->pc = 0x1acc58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948096)));
    // 0x1acc5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1acc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1acc60: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACC60u;
    {
        const bool branch_taken_0x1acc60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x1acc60) {
            ctx->pc = 0x1ACC80u;
            goto label_1acc80;
        }
    }
    ctx->pc = 0x1ACC68u;
label_1acc68:
    // 0x1acc68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1acc68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1acc6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1acc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1acc70:
    // 0x1acc70: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1acc70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1acc74: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x1ACC74u;
    {
        const bool branch_taken_0x1acc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc74) {
            ctx->pc = 0x1AC9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac9b0;
        }
    }
    ctx->pc = 0x1ACC7Cu;
    // 0x1acc7c: 0x0  nop
    ctx->pc = 0x1acc7cu;
    // NOP
label_1acc80:
    // 0x1acc80: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1acc80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1acc84: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x1acc84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1acc88: 0x1460fef6  bnez        $v1, . + 4 + (-0x10A << 2)
    ctx->pc = 0x1ACC88u;
    {
        const bool branch_taken_0x1acc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc88) {
            ctx->pc = 0x1AC864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac864;
        }
    }
    ctx->pc = 0x1ACC90u;
label_1acc90:
    // 0x1acc90: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1acc90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1acc94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1acc94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1acc98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1acc98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acc9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1acc9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1acca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1acca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1acca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1acca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1accac: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1accacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1accb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACCB8u;
}
