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

// Function: entry_001bc21c
// Address: 0x1bc21c - 0x1bc2d4
void entry_001bc21c_0x1bc21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc21c_0x1bc21c");
#endif

    switch (ctx->pc) {
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc250u: goto label_1bc250;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc27cu: goto label_1bc27c;
        default: break;
    }

    ctx->pc = 0x1bc21cu;

    // 0x1bc21c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc220: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc224: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc228: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1bc228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1bc22c: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1bc22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1bc230: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1bc230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc234: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BC234u;
    SET_GPR_U32(ctx, 31, 0x1BC23Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC23Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC23Cu) { return; }
    ctx->pc = 0x1BC23Cu;
label_1bc23c:
    // 0x1bc23c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc240: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc244: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1bc244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc248: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BC248u;
    SET_GPR_U32(ctx, 31, 0x1BC250u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BC248u, 0x1BC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC250u;
label_1bc250:
    // 0x1bc250: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bc250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bc254: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1bc254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bc258: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc25c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc260: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bc264: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BC264u;
    SET_GPR_U32(ctx, 31, 0x1BC26Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BC264u, 0x1BC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC26Cu;
label_1bc26c:
    // 0x1bc26c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc270: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1bc270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1bc274: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1BC274u;
    SET_GPR_U32(ctx, 31, 0x1BC27Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BC274u, 0x1BC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC27Cu;
label_1bc27c:
    // 0x1bc27c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1bc280: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1bc280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1bc284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc288: 0x0  nop
    ctx->pc = 0x1bc288u;
    // NOP
    // 0x1bc28c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bc28cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bc290: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1bc294: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc298: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bc298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc29c: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc2a0: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x1bc2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc2a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc2a8: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x1bc2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x1bc2ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc2b0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bc2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc2b4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc2b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc2b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc2bc: 0x0  nop
    ctx->pc = 0x1bc2bcu;
    // NOP
    // 0x1bc2c0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC2C0u;
    {
        const bool branch_taken_0x1bc2c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc2c0) {
            ctx->pc = 0x1BC2D4u;
            return;
        }
    }
    ctx->pc = 0x1BC2C8u;
    // 0x1bc2c8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc2cc: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1bc2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc2d0: 0xe6600124  swc1        $f0, 0x124($s3)
    ctx->pc = 0x1bc2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 292), bits); }
    ctx->pc = 0x1bc2d4u;
}
