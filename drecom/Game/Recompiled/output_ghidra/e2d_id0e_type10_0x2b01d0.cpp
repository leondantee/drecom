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

// Function: e2d_id0e_type10
// Address: 0x2b01d0 - 0x2b0338
void e2d_id0e_type10_0x2b01d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0e_type10_0x2b01d0");
#endif

    switch (ctx->pc) {
        case 0x2b026cu: goto label_2b026c;
        default: break;
    }

    ctx->pc = 0x2b01d0u;

    // 0x2b01d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b01d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b01d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b01d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b01d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b01dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b01e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b01e4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b01e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b01e8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2b01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2b01ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b01ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b01f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b01f4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b01f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b01f8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2b01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2b01fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b01fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0204: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b0204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b0208: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2b0208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2b020c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b020cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0210: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0214: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b0214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b0218: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2b0218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2b021c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b021cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0224: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b0224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b0228: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2b0228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2b022c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b0230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0234: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0238: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b0238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b023c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2b023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2b0240: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b0244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0248: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b024c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b0250: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2b0250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2b0254: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b0254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b0258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b025c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0260: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b0260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b0264: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0264u;
    SET_GPR_U32(ctx, 31, 0x2B026Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0264u, 0x2B026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B026Cu;
label_2b026c:
    // 0x2b026c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b026cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b0270: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b0270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0274: 0x0  nop
    ctx->pc = 0x2b0274u;
    // NOP
    // 0x2b0278: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b027c: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b0280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0284: 0x0  nop
    ctx->pc = 0x2b0284u;
    // NOP
    // 0x2b0288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b028c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b028cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0290: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b0290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b0294: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x2b0294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x2b0298: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b0298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b029c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b029cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b02a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b02a4: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2b02a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2b02a8: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x2b02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x2b02ac: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2b02acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2b02b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b02b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b02b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b02b8: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b02b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b02bc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2b02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2b02c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b02c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b02c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b02c8: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b02c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b02cc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b02d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b02d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b02d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b02d8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b02d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b02dc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b02e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b02e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b02e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b02e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b02e8: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b02e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b02ec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b02f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b02f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b02f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b02f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b02f8: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b02f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b02fc: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x2b02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x2b0300: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b0300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b0304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b030c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b0310: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b0310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b0314: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0318: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b0318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b031c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b031cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0320: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0324: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b0324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0328: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b0328u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b032c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b032cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0330: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0338u;
}
