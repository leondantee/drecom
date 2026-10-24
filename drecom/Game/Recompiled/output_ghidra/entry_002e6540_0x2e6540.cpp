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

// Function: entry_002e6540
// Address: 0x2e6540 - 0x2e6620
void entry_002e6540_0x2e6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6540_0x2e6540");
#endif

    switch (ctx->pc) {
        case 0x2e6578u: goto label_2e6578;
        case 0x2e6590u: goto label_2e6590;
        case 0x2e659cu: goto label_2e659c;
        case 0x2e65acu: goto label_2e65ac;
        case 0x2e65c4u: goto label_2e65c4;
        default: break;
    }

    ctx->pc = 0x2e6540u;

    // 0x2e6540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6544: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6548: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e6548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e654c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e654cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6550: 0x0  nop
    ctx->pc = 0x2e6550u;
    // NOP
    // 0x2e6554: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6558: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e6558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e655c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6560: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6564: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6568: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e656c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e656cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6570: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E6570u;
    SET_GPR_U32(ctx, 31, 0x2E6578u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E6570u, 0x2E6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6578u;
label_2e6578:
    // 0x2e6578: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e657c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e6580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6584: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6588: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E6588u;
    SET_GPR_U32(ctx, 31, 0x2E6590u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6588u, 0x2E6590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6590u;
label_2e6590:
    // 0x2e6590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6594: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E6594u;
    SET_GPR_U32(ctx, 31, 0x2E659Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E6594u, 0x2E659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E659Cu;
label_2e659c:
    // 0x2e659c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e659cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e65a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e65a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E65A4u;
    SET_GPR_U32(ctx, 31, 0x2E65ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E65A4u, 0x2E65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65ACu;
label_2e65ac:
    // 0x2e65ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e65acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65b4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e65b8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e65b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e65bc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E65BCu;
    SET_GPR_U32(ctx, 31, 0x2E65C4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E65BCu, 0x2E65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65C4u;
label_2e65c4:
    // 0x2e65c4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e65c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e65c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65cc: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e65ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e65d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65d4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e65d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e65d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e65dc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e65dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e65e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e65e4: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e65e8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e65ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e65ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e65f0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e65f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e65f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e65f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e65f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e65f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e65fc: 0x0  nop
    ctx->pc = 0x2e65fcu;
    // NOP
    // 0x2e6600: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6600u;
    {
        const bool branch_taken_0x2e6600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6600) {
            ctx->pc = 0x2E6620u;
            return;
        }
    }
    ctx->pc = 0x2E6608u;
    // 0x2e6608: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e660c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6610: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e6610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6614: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e661c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e661cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2e6620u;
}
