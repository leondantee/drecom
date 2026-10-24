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

// Function: entry_00350360
// Address: 0x350360 - 0x350488
void entry_00350360_0x350360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350360_0x350360");
#endif

    switch (ctx->pc) {
        case 0x35037cu: goto label_35037c;
        case 0x350388u: goto label_350388;
        case 0x3503f4u: goto label_3503f4;
        default: break;
    }

    ctx->pc = 0x350360u;

    // 0x350360: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350364: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350368: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x35036c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350370: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x350370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x350374: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350374u;
    SET_GPR_U32(ctx, 31, 0x35037Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350374u, 0x35037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35037Cu;
label_35037c:
    // 0x35037c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350380: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350380u;
    SET_GPR_U32(ctx, 31, 0x350388u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350380u, 0x350388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350388u;
label_350388:
    // 0x350388: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35038c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350390: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x350390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x350394: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x350394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x350398: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x350398u;
    {
        const bool branch_taken_0x350398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350398) {
            ctx->pc = 0x350488u;
            return;
        }
    }
    ctx->pc = 0x3503A0u;
    // 0x3503a0: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x3503a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3503a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3503a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3503a8: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x3503a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3503ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3503acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3503b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3503b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3503b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3503b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3503b8: 0x0  nop
    ctx->pc = 0x3503b8u;
    // NOP
    // 0x3503bc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3503bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3503c0: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x3503c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3503c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3503c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3503c8: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x3503c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3503cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3503ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3503d0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3503d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3503d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3503d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3503d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3503dc: 0x0  nop
    ctx->pc = 0x3503dcu;
    // NOP
    // 0x3503e0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3503e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3503e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3503e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3503e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3503e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3503ec: 0xc040c24  jal         func_103090
    ctx->pc = 0x3503ECu;
    SET_GPR_U32(ctx, 31, 0x3503F4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x3503F4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3503F4u) { return; }
    ctx->pc = 0x3503F4u;
label_3503f4:
    // 0x3503f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3503f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3503f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3503f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3503fc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3503fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350400: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x350400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x350404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350408: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35040c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x35040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350414: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x350414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x350418: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35041c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350420: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x350420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350424: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x350424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350428: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x350428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35042c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350430: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350438: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x350438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x35043c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350440: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350444: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x350444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350448: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35044c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350450: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x350450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350454: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350458: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x350458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x35045c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350460: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350464: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350468: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x350468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x35046c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x35046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x350470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350474: 0x0  nop
    ctx->pc = 0x350474u;
    // NOP
    // 0x350478: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x350478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35047c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x35047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x350480: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x350480u;
    {
        const bool branch_taken_0x350480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350480) {
            ctx->pc = 0x350500u;
            return;
        }
    }
    ctx->pc = 0x350488u;
}
