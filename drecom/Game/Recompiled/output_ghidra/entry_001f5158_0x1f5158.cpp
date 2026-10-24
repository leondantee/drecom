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

// Function: entry_001f5158
// Address: 0x1f5158 - 0x1f520c
void entry_001f5158_0x1f5158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5158_0x1f5158");
#endif

    ctx->pc = 0x1f5158u;

    // 0x1f5158: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f515c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5160: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5164: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5168: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f5168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f516c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f516cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5170: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f5170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f5174: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5178: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f517c: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x1f517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5184: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1f5184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5188: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f5188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f518c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1f518cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1f5190: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5194: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5198: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f519c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f51a0: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x1f51a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f51a4: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f51a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f51a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f51a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f51ac: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f51acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f51b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f51b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f51b4: 0x0  nop
    ctx->pc = 0x1f51b4u;
    // NOP
    // 0x1f51b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f51b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f51bc: 0x0  nop
    ctx->pc = 0x1f51bcu;
    // NOP
    // 0x1f51c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1F51C0u;
    {
        const bool branch_taken_0x1f51c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f51c0) {
            ctx->pc = 0x1F520Cu;
            return;
        }
    }
    ctx->pc = 0x1F51C8u;
    // 0x1f51c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f51cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f51d0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1f51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1f51d4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1f51d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x1f51d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f51d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f51dc: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f51e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f51e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f51e4: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f51e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1f51e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f51ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f51f0: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1f51f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f51f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f51f8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1f51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f51fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f51fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5200: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f5200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1f5204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5204u;
    {
        const bool branch_taken_0x1f5204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5204) {
            ctx->pc = 0x1F522Cu;
            return;
        }
    }
    ctx->pc = 0x1F520Cu;
}
