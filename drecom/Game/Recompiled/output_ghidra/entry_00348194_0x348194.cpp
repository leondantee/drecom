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

// Function: entry_00348194
// Address: 0x348194 - 0x348360
void entry_00348194_0x348194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348194_0x348194");
#endif

    switch (ctx->pc) {
        case 0x3481d8u: goto label_3481d8;
        case 0x3481fcu: goto label_3481fc;
        case 0x34821cu: goto label_34821c;
        case 0x348240u: goto label_348240;
        default: break;
    }

    ctx->pc = 0x348194u;

    // 0x348194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348198: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x348198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x34819c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x34819cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3481a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3481a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3481a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3481a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3481a8: 0x1483006d  bne         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x3481A8u;
    {
        const bool branch_taken_0x3481a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3481a8) {
            ctx->pc = 0x348360u;
            return;
        }
    }
    ctx->pc = 0x3481B0u;
    // 0x3481b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3481b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3481b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3481b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3481b8: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x3481b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3481bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3481bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3481c0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3481c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3481c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3481c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3481c8: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x3481c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x3481cc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3481ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3481d0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x3481D0u;
    SET_GPR_U32(ctx, 31, 0x3481D8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x3481D0u, 0x3481D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481D8u;
label_3481d8:
    // 0x3481d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3481d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3481dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3481dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3481e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3481e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3481e4: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x3481e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3481e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3481e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3481ec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3481ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3481f0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3481f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3481f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3481F4u;
    SET_GPR_U32(ctx, 31, 0x3481FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3481F4u, 0x3481FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481FCu;
label_3481fc:
    // 0x3481fc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3481fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x348200: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x348200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348204: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x348204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348208: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x348208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34820c: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x34820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x348210: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x348210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x348214: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x348214u;
    SET_GPR_U32(ctx, 31, 0x34821Cu);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x348214u, 0x34821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34821Cu;
label_34821c:
    // 0x34821c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x34821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x348220: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x348220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348224: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x348224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348228: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x348228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34822c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34822cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x348230: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x348230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348234: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x348234u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x348238: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x348238u;
    SET_GPR_U32(ctx, 31, 0x348240u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x348238u, 0x348240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348240u;
label_348240:
    // 0x348240: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x348240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x348244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348248: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x348248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34824c: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x34824cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x348250: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348258: 0x0  nop
    ctx->pc = 0x348258u;
    // NOP
    // 0x34825c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x348260: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348268: 0x0  nop
    ctx->pc = 0x348268u;
    // NOP
    // 0x34826c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x348270: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348278: 0x0  nop
    ctx->pc = 0x348278u;
    // NOP
    // 0x34827c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34827cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x348280: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x348280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x348284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348288: 0x0  nop
    ctx->pc = 0x348288u;
    // NOP
    // 0x34828c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x348290: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x348290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x348294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348298: 0x0  nop
    ctx->pc = 0x348298u;
    // NOP
    // 0x34829c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x34829cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3482a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3482a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482a4: 0x0  nop
    ctx->pc = 0x3482a4u;
    // NOP
    // 0x3482a8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3482a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3482ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3482acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3482b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3482b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482b4: 0x0  nop
    ctx->pc = 0x3482b4u;
    // NOP
    // 0x3482b8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3482b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x3482bc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3482bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x3482c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3482c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3482c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3482c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482c8: 0x0  nop
    ctx->pc = 0x3482c8u;
    // NOP
    // 0x3482cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3482ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3482d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3482d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482d4: 0x0  nop
    ctx->pc = 0x3482d4u;
    // NOP
    // 0x3482d8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3482d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3482dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3482dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482e0: 0x0  nop
    ctx->pc = 0x3482e0u;
    // NOP
    // 0x3482e4: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3482e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x3482e8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3482e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3482ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3482ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3482f0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3482f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3482f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3482f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3482f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3482f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3482fc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3482fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348300: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x348300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x348304: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x348304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x348308: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x348308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34830c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34830cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348310: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348314: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x348314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x348318: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x348318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x34831c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34831cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348320: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348324: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x348324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x348328: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x348328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x34832c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34832cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348330: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348334: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x348334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x348338: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x348338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34833c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348340: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x348340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x348344: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x348344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x348348: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34834c: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x34834cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x348350: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x348350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x348354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34835c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x34835cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x348360u;
}
