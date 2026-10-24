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

// Function: entry_0014bbc4
// Address: 0x14bbc4 - 0x14bc5c
void entry_0014bbc4_0x14bbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bbc4_0x14bbc4");
#endif

    switch (ctx->pc) {
        case 0x14bbd0u: goto label_14bbd0;
        case 0x14bbe4u: goto label_14bbe4;
        case 0x14bbfcu: goto label_14bbfc;
        default: break;
    }

    ctx->pc = 0x14bbc4u;

    // 0x14bbc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bbc8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14BBC8u;
    SET_GPR_U32(ctx, 31, 0x14BBD0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14BBC8u, 0x14BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBD0u;
label_14bbd0:
    // 0x14bbd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14bbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14bbd4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bbd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14bbdc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14BBDCu;
    SET_GPR_U32(ctx, 31, 0x14BBE4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14BBDCu, 0x14BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBE4u;
label_14bbe4:
    // 0x14bbe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bbe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bbec: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14bbf0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14bbf4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14BBF4u;
    SET_GPR_U32(ctx, 31, 0x14BBFCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14BBF4u, 0x14BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBFCu;
label_14bbfc:
    // 0x14bbfc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14bbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14bc00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bc04: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bc08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bc0c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bc10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14bc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14bc14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14bc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14bc18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bc1c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bc20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bc24: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14bc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bc28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14bc28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14bc2c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14bc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14bc30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bc34: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bc38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bc3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14bc3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bc40: 0x0  nop
    ctx->pc = 0x14bc40u;
    // NOP
    // 0x14bc44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14BC44u;
    {
        const bool branch_taken_0x14bc44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bc44) {
            ctx->pc = 0x14BC5Cu;
            return;
        }
    }
    ctx->pc = 0x14BC4Cu;
    // 0x14bc4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bc50: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14bc50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14bc54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14bc58: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14bc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14bc5cu;
}
