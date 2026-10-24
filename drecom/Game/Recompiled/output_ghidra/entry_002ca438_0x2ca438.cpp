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

// Function: entry_002ca438
// Address: 0x2ca438 - 0x2ca6fc
void entry_002ca438_0x2ca438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ca438_0x2ca438");
#endif

    switch (ctx->pc) {
        case 0x2ca464u: goto label_2ca464;
        case 0x2ca46cu: goto label_2ca46c;
        case 0x2ca55cu: goto label_2ca55c;
        case 0x2ca5acu: goto label_2ca5ac;
        case 0x2ca5c8u: goto label_2ca5c8;
        case 0x2ca63cu: goto label_2ca63c;
        case 0x2ca654u: goto label_2ca654;
        case 0x2ca68cu: goto label_2ca68c;
        case 0x2ca6c4u: goto label_2ca6c4;
        default: break;
    }

    ctx->pc = 0x2ca438u;

    // 0x2ca438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca43c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca440: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2ca440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca448: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca44c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ca44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2ca450: 0x2406040f  addiu       $a2, $zero, 0x40F
    ctx->pc = 0x2ca450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x2ca454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ca454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca458: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ca458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ca45c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CA45Cu;
    SET_GPR_U32(ctx, 31, 0x2CA464u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CA45Cu, 0x2CA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA464u;
label_2ca464:
    // 0x2ca464: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA464u;
    SET_GPR_U32(ctx, 31, 0x2CA46Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA464u, 0x2CA46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA46Cu;
label_2ca46c:
    // 0x2ca46c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca470: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ca470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ca474: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2ca474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2ca478: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ca478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ca47c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ca47cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ca480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca484: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2ca484u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca48c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca494: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2ca494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2ca498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca49c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca4a4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2ca4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca4ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca4b4: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2ca4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2ca4b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4bc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2ca4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca4c0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2ca4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ca4c4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2ca4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2ca4c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ca4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca4cc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2ca4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2ca4d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca4d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4d8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2ca4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ca4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca4e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4e4: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2ca4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2ca4e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4ec: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2ca4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca4f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2ca4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2ca4f4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2ca4f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca4f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca4fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ca500: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ca500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ca504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca508: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2ca508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2ca50c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2ca50cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca510: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ca510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca514: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca518: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2ca518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca51c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ca51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ca520: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ca524: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca528: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2ca528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca52c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2ca52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2ca530: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2ca530u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca534: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca538: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ca53c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ca53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca544: 0x0  nop
    ctx->pc = 0x2ca544u;
    // NOP
    // 0x2ca548: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ca548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ca54c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ca54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ca550: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ca550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ca554: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CA554u;
    SET_GPR_U32(ctx, 31, 0x2CA55Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CA55Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CA55Cu) { return; }
    ctx->pc = 0x2CA55Cu;
label_2ca55c:
    // 0x2ca55c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2ca55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2ca560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca564: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca568: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ca568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca56c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca570: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ca570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2ca574: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2ca574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2ca578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca57c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca580: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ca580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca584: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca588: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ca588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2ca58c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2ca58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2ca590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca594: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca598: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ca598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca59c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca5a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca5a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA5A4u;
    SET_GPR_U32(ctx, 31, 0x2CA5ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA5A4u, 0x2CA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5ACu;
label_2ca5ac:
    // 0x2ca5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca5b0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca5b8: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2CA5B8u;
    {
        const bool branch_taken_0x2ca5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca5b8) {
            ctx->pc = 0x2CA7A4u;
            return;
        }
    }
    ctx->pc = 0x2CA5C0u;
    // 0x2ca5c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA5C0u;
    SET_GPR_U32(ctx, 31, 0x2CA5C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA5C0u, 0x2CA5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5C8u;
label_2ca5c8:
    // 0x2ca5c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca5cc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ca5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca5d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ca5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ca5d4: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2ca5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2ca5d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ca5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca5dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ca5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca5e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ca5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca5e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ca5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca5e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ca5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca5ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2ca5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca5f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca5f4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2ca5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ca5f8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2ca5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca5fc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca600: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2ca600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ca604: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ca604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ca608: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ca608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ca60c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca610: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2CA610u;
    {
        const bool branch_taken_0x2ca610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca610) {
            ctx->pc = 0x2CA7A4u;
            return;
        }
    }
    ctx->pc = 0x2CA618u;
    // 0x2ca618: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ca618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca61c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2ca61cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ca620: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2ca620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2ca624: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2ca624u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca628: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ca628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ca62c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ca62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ca630: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ca630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca634: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA634u;
    SET_GPR_U32(ctx, 31, 0x2CA63Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA634u, 0x2CA63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA63Cu;
label_2ca63c:
    // 0x2ca63c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca644: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CA644u;
    {
        const bool branch_taken_0x2ca644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca644) {
            ctx->pc = 0x2CA6FCu;
            return;
        }
    }
    ctx->pc = 0x2CA64Cu;
    // 0x2ca64c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA64Cu;
    SET_GPR_U32(ctx, 31, 0x2CA654u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA64Cu, 0x2CA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA654u;
label_2ca654:
    // 0x2ca654: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca65c: 0x0  nop
    ctx->pc = 0x2ca65cu;
    // NOP
    // 0x2ca660: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca664: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ca664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ca668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca66c: 0x0  nop
    ctx->pc = 0x2ca66cu;
    // NOP
    // 0x2ca670: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca674: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca678: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca67c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca680: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ca680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ca684: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA684u;
    SET_GPR_U32(ctx, 31, 0x2CA68Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA684u, 0x2CA68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA68Cu;
label_2ca68c:
    // 0x2ca68c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca694: 0x0  nop
    ctx->pc = 0x2ca694u;
    // NOP
    // 0x2ca698: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca69c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ca69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ca6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca6a4: 0x0  nop
    ctx->pc = 0x2ca6a4u;
    // NOP
    // 0x2ca6a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca6a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6ac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca6b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca6b8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ca6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ca6bc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA6BCu;
    SET_GPR_U32(ctx, 31, 0x2CA6C4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA6BCu, 0x2CA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6C4u;
label_2ca6c4:
    // 0x2ca6c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca6c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca6cc: 0x0  nop
    ctx->pc = 0x2ca6ccu;
    // NOP
    // 0x2ca6d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca6d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca6d4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2ca6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2ca6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca6dc: 0x0  nop
    ctx->pc = 0x2ca6dcu;
    // NOP
    // 0x2ca6e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca6e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6e4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca6e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca6f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ca6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2ca6f4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2CA6F4u;
    {
        const bool branch_taken_0x2ca6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6f4) {
            ctx->pc = 0x2CA7A4u;
            return;
        }
    }
    ctx->pc = 0x2CA6FCu;
}
