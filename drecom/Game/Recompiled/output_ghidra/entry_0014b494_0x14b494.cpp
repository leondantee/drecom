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

// Function: entry_0014b494
// Address: 0x14b494 - 0x14b52c
void entry_0014b494_0x14b494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b494_0x14b494");
#endif

    switch (ctx->pc) {
        case 0x14b4a0u: goto label_14b4a0;
        case 0x14b4b4u: goto label_14b4b4;
        case 0x14b4ccu: goto label_14b4cc;
        default: break;
    }

    ctx->pc = 0x14b494u;

    // 0x14b494: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b498: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14B498u;
    SET_GPR_U32(ctx, 31, 0x14B4A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14B498u, 0x14B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4A0u;
label_14b4a0:
    // 0x14b4a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14b4a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b4a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b4ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14B4ACu;
    SET_GPR_U32(ctx, 31, 0x14B4B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B4ACu, 0x14B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4B4u;
label_14b4b4:
    // 0x14b4b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b4b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b4bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14b4c0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14b4c4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14B4C4u;
    SET_GPR_U32(ctx, 31, 0x14B4CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B4C4u, 0x14B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4CCu;
label_14b4cc:
    // 0x14b4cc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14b4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14b4d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b4d4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b4d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b4dc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b4e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b4e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14b4e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b4ec: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b4f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b4f4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b4f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14b4fc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14b500: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b504: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b508: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b50c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b510: 0x0  nop
    ctx->pc = 0x14b510u;
    // NOP
    // 0x14b514: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14B514u;
    {
        const bool branch_taken_0x14b514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b514) {
            ctx->pc = 0x14B52Cu;
            return;
        }
    }
    ctx->pc = 0x14B51Cu;
    // 0x14b51c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b520: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14b524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b528: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14b52cu;
}
