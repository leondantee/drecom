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

// Function: Turn_dest
// Address: 0x172120 - 0x1723e0
void Turn_dest_0x172120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Turn_dest_0x172120");
#endif

    switch (ctx->pc) {
        case 0x1721a0u: goto label_1721a0;
        default: break;
    }

    ctx->pc = 0x172120u;

    // 0x172120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x172124: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x172124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x172128: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x172128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x17212c: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x17212cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x172130: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x172130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x172134: 0xe7ad0058  swc1        $f13, 0x58($sp)
    ctx->pc = 0x172134u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x172138: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17213c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172140: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172144: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x172144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172148: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17214c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17214cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x172150: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172154: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x172154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172158: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17215c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172160: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172164: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x172164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x172168: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x172168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17216c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x17216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172170: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172170u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172174: 0x0  nop
    ctx->pc = 0x172174u;
    // NOP
    // 0x172178: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x172178u;
    {
        const bool branch_taken_0x172178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172178) {
            ctx->pc = 0x1721E4u;
            goto label_1721e4;
        }
    }
    ctx->pc = 0x172180u;
    // 0x172180: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x172180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172184: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x172184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172188: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x172188u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17218c: 0x0  nop
    ctx->pc = 0x17218cu;
    // NOP
    // 0x172190: 0x0  nop
    ctx->pc = 0x172190u;
    // NOP
    // 0x172194: 0x0  nop
    ctx->pc = 0x172194u;
    // NOP
    // 0x172198: 0xc045330  jal         func_114CC0
    ctx->pc = 0x172198u;
    SET_GPR_U32(ctx, 31, 0x1721A0u);
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x172198u, 0x1721A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721A0u;
label_1721a0:
    // 0x1721a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1721a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1721a4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1721a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1721a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1721a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1721ac: 0x0  nop
    ctx->pc = 0x1721acu;
    // NOP
    // 0x1721b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1721b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1721b4: 0x0  nop
    ctx->pc = 0x1721b4u;
    // NOP
    // 0x1721b8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1721B8u;
    {
        const bool branch_taken_0x1721b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1721b8) {
            ctx->pc = 0x172238u;
            goto label_172238;
        }
    }
    ctx->pc = 0x1721C0u;
    // 0x1721c0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1721c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1721c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1721c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1721c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1721c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1721cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1721ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1721d0: 0x0  nop
    ctx->pc = 0x1721d0u;
    // NOP
    // 0x1721d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1721d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1721d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1721d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1721dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1721DCu;
    {
        const bool branch_taken_0x1721dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1721dc) {
            ctx->pc = 0x172238u;
            goto label_172238;
        }
    }
    ctx->pc = 0x1721E4u;
label_1721e4:
    // 0x1721e4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1721e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1721e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1721e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1721ec: 0x0  nop
    ctx->pc = 0x1721ecu;
    // NOP
    // 0x1721f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1721f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1721f4: 0x0  nop
    ctx->pc = 0x1721f4u;
    // NOP
    // 0x1721f8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1721F8u;
    {
        const bool branch_taken_0x1721f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1721f8) {
            ctx->pc = 0x17221Cu;
            goto label_17221c;
        }
    }
    ctx->pc = 0x172200u;
    // 0x172200: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x172204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17220c: 0x0  nop
    ctx->pc = 0x17220cu;
    // NOP
    // 0x172210: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x172214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172214u;
    {
        const bool branch_taken_0x172214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172214) {
            ctx->pc = 0x172230u;
            goto label_172230;
        }
    }
    ctx->pc = 0x17221Cu;
label_17221c:
    // 0x17221c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x17221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x172220: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172228: 0x0  nop
    ctx->pc = 0x172228u;
    // NOP
    // 0x17222c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17222cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_172230:
    // 0x172230: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x172230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172234: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x172234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_172238:
    // 0x172238: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x172238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17223c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172244: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x172248: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17224c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x172250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172258: 0x0  nop
    ctx->pc = 0x172258u;
    // NOP
    // 0x17225c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17225cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172260: 0x0  nop
    ctx->pc = 0x172260u;
    // NOP
    // 0x172264: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172264u;
    {
        const bool branch_taken_0x172264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172264) {
            ctx->pc = 0x172288u;
            goto label_172288;
        }
    }
    ctx->pc = 0x17226Cu;
    // 0x17226c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172270: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172274: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17227c: 0x0  nop
    ctx->pc = 0x17227cu;
    // NOP
    // 0x172280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172284: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_172288:
    // 0x172288: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17228c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x17228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x172290: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172298: 0x0  nop
    ctx->pc = 0x172298u;
    // NOP
    // 0x17229c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17229cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1722a0: 0x0  nop
    ctx->pc = 0x1722a0u;
    // NOP
    // 0x1722a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1722A4u;
    {
        const bool branch_taken_0x1722a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1722a4) {
            ctx->pc = 0x1722C8u;
            goto label_1722c8;
        }
    }
    ctx->pc = 0x1722ACu;
    // 0x1722ac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1722acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1722b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1722b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1722b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1722b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1722b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1722bc: 0x0  nop
    ctx->pc = 0x1722bcu;
    // NOP
    // 0x1722c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1722c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1722c4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1722c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1722c8:
    // 0x1722c8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1722c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1722cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1722ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1722d0: 0x0  nop
    ctx->pc = 0x1722d0u;
    // NOP
    // 0x1722d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1722d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1722d8: 0x0  nop
    ctx->pc = 0x1722d8u;
    // NOP
    // 0x1722dc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1722DCu;
    {
        const bool branch_taken_0x1722dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1722dc) {
            ctx->pc = 0x1722FCu;
            goto label_1722fc;
        }
    }
    ctx->pc = 0x1722E4u;
    // 0x1722e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1722e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1722e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1722e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1722ec: 0x0  nop
    ctx->pc = 0x1722ecu;
    // NOP
    // 0x1722f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1722f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1722f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1722F4u;
    {
        const bool branch_taken_0x1722f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722f4) {
            ctx->pc = 0x17230Cu;
            goto label_17230c;
        }
    }
    ctx->pc = 0x1722FCu;
label_1722fc:
    // 0x1722fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1722fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x172300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172304: 0x0  nop
    ctx->pc = 0x172304u;
    // NOP
    // 0x172308: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_17230c:
    // 0x17230c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172310: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x172310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x172314: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17231c: 0x0  nop
    ctx->pc = 0x17231cu;
    // NOP
    // 0x172320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172324: 0x0  nop
    ctx->pc = 0x172324u;
    // NOP
    // 0x172328: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172328u;
    {
        const bool branch_taken_0x172328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172328) {
            ctx->pc = 0x172340u;
            goto label_172340;
        }
    }
    ctx->pc = 0x172330u;
    // 0x172330: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172334: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172338: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172338u;
    {
        const bool branch_taken_0x172338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172338) {
            ctx->pc = 0x17234Cu;
            goto label_17234c;
        }
    }
    ctx->pc = 0x172340u;
label_172340:
    // 0x172340: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172344: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172344u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172348: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_17234c:
    // 0x17234c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x17234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172350: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172358: 0x0  nop
    ctx->pc = 0x172358u;
    // NOP
    // 0x17235c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17235Cu;
    {
        const bool branch_taken_0x17235c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17235c) {
            ctx->pc = 0x172374u;
            goto label_172374;
        }
    }
    ctx->pc = 0x172364u;
    // 0x172364: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172368: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17236c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17236Cu;
    {
        const bool branch_taken_0x17236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17236c) {
            ctx->pc = 0x1723B4u;
            goto label_1723b4;
        }
    }
    ctx->pc = 0x172374u;
label_172374:
    // 0x172374: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17237c: 0x0  nop
    ctx->pc = 0x17237cu;
    // NOP
    // 0x172380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172384: 0x0  nop
    ctx->pc = 0x172384u;
    // NOP
    // 0x172388: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172388u;
    {
        const bool branch_taken_0x172388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172388) {
            ctx->pc = 0x1723A0u;
            goto label_1723a0;
        }
    }
    ctx->pc = 0x172390u;
    // 0x172390: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172394: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x172398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172398u;
    {
        const bool branch_taken_0x172398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172398) {
            ctx->pc = 0x1723ACu;
            goto label_1723ac;
        }
    }
    ctx->pc = 0x1723A0u;
label_1723a0:
    // 0x1723a0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1723a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1723a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1723a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1723a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1723ac:
    // 0x1723ac: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1723acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723b0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1723b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1723b4:
    // 0x1723b4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1723b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1723b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1723bc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1723bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1723c0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1723c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1723c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1723c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1723c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1723cc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1723ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1723d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1723d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1723D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1723D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1723E0u;
}
