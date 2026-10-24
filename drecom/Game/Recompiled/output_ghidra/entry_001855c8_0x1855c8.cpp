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

// Function: entry_001855c8
// Address: 0x1855c8 - 0x185670
void entry_001855c8_0x1855c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001855c8_0x1855c8");
#endif

    switch (ctx->pc) {
        case 0x1855f0u: goto label_1855f0;
        case 0x18560cu: goto label_18560c;
        case 0x185658u: goto label_185658;
        default: break;
    }

    ctx->pc = 0x1855c8u;

    // 0x1855c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1855c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1855cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1855ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1855d0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1855d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1855d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1855d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1855d8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1855d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1855dc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1855dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1855e0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1855e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1855e4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1855e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1855e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1855E8u;
    SET_GPR_U32(ctx, 31, 0x1855F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1855E8u, 0x1855F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855F0u;
label_1855f0:
    // 0x1855f0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1855f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1855f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1855f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1855f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1855f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1855fc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1855fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x185600: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x185600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185604: 0xc058f50  jal         func_163D40
    ctx->pc = 0x185604u;
    SET_GPR_U32(ctx, 31, 0x18560Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x185604u, 0x18560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18560Cu;
label_18560c:
    // 0x18560c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18560cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x185610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185614: 0x0  nop
    ctx->pc = 0x185614u;
    // NOP
    // 0x185618: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x185618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18561c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18561cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185620: 0x0  nop
    ctx->pc = 0x185620u;
    // NOP
    // 0x185624: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x185624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x185628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18562c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185630: 0x0  nop
    ctx->pc = 0x185630u;
    // NOP
    // 0x185634: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x185634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x185638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18563c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18563cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185640: 0x0  nop
    ctx->pc = 0x185640u;
    // NOP
    // 0x185644: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x185644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x185648: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x185648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18564c: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x18564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185650: 0xc067844  jal         func_19E110
    ctx->pc = 0x185650u;
    SET_GPR_U32(ctx, 31, 0x185658u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x185650u, 0x185658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185658u;
label_185658:
    // 0x185658: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18565c: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x18565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x185660: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x185660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x185664: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x185668: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x185668u;
    SET_GPR_U32(ctx, 31, 0x185670u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x185670u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185670u) { return; }
    ctx->pc = 0x185670u;
}
