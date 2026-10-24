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

// Function: entry_001f9154
// Address: 0x1f9154 - 0x1f9268
void entry_001f9154_0x1f9154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9154_0x1f9154");
#endif

    switch (ctx->pc) {
        case 0x1f9160u: goto label_1f9160;
        case 0x1f9184u: goto label_1f9184;
        case 0x1f91a4u: goto label_1f91a4;
        case 0x1f91b8u: goto label_1f91b8;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9240u: goto label_1f9240;
        default: break;
    }

    ctx->pc = 0x1f9154u;

    // 0x1f9154: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f9158: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1F9158u;
    SET_GPR_U32(ctx, 31, 0x1F9160u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1F9160u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9160u) { return; }
    ctx->pc = 0x1F9160u;
label_1f9160:
    // 0x1f9160: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9164: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f9164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9168: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1f9168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1f916c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f9170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9174: 0x0  nop
    ctx->pc = 0x1f9174u;
    // NOP
    // 0x1f9178: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f9178u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f917c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F917Cu;
    SET_GPR_U32(ctx, 31, 0x1F9184u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F917Cu, 0x1F9184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9184u;
label_1f9184:
    // 0x1f9184: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9188: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f9188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f918c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9190: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f9190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f9194: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f9194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f9198: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1f9198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f919c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1F919Cu;
    SET_GPR_U32(ctx, 31, 0x1F91A4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1F91A4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F91A4u) { return; }
    ctx->pc = 0x1F91A4u;
label_1f91a4:
    // 0x1f91a4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1f91a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f91a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1f91a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f91ac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f91acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f91b0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1F91B0u;
    SET_GPR_U32(ctx, 31, 0x1F91B8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1F91B8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F91B8u) { return; }
    ctx->pc = 0x1F91B8u;
label_1f91b8:
    // 0x1f91b8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f91bc: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1f91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f91c0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1f91c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f91c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f91c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f91c8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1f91c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1f91cc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f91d0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1f91d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f91d4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f91d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f91d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f91dc: 0x0  nop
    ctx->pc = 0x1f91dcu;
    // NOP
    // 0x1f91e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f91e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f91e4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f91e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f91e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f91e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f91ec: 0x0  nop
    ctx->pc = 0x1f91ecu;
    // NOP
    // 0x1f91f0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f91f4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f91f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f91f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f91fc: 0x0  nop
    ctx->pc = 0x1f91fcu;
    // NOP
    // 0x1f9200: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f9200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f9204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9208: 0x0  nop
    ctx->pc = 0x1f9208u;
    // NOP
    // 0x1f920c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f920cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f9210: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9218: 0x0  nop
    ctx->pc = 0x1f9218u;
    // NOP
    // 0x1f921c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f921cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f9220: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f9220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9224: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f9224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f9228: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f922c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F922Cu;
    SET_GPR_U32(ctx, 31, 0x1F9234u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F9234u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9234u) { return; }
    ctx->pc = 0x1F9234u;
label_1f9234:
    // 0x1f9234: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1f9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f9238: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x1F9238u;
    SET_GPR_U32(ctx, 31, 0x1F9240u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x1F9238u, 0x1F9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9240u;
label_1f9240:
    // 0x1f9240: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1f9244: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x1f9248: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x1f9248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x1f924c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f924cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9250: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9254: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f9254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f925c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F925Cu;
    {
        const bool branch_taken_0x1f925c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f925c) {
            ctx->pc = 0x1F9268u;
            return;
        }
    }
    ctx->pc = 0x1F9264u;
    // 0x1f9264: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x1f9264u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1f9268u;
}
