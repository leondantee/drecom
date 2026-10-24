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

// Function: entry_0014a640
// Address: 0x14a640 - 0x14a6e8
void entry_0014a640_0x14a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a640_0x14a640");
#endif

    switch (ctx->pc) {
        case 0x14a6a8u: goto label_14a6a8;
        default: break;
    }

    ctx->pc = 0x14a640u;

    // 0x14a640: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a644: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a64c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a650: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a654: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14a654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14a658: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a65c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a664: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a668: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a66c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14a670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a674: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a67c: 0x0  nop
    ctx->pc = 0x14a67cu;
    // NOP
    // 0x14a680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14a680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a684: 0x0  nop
    ctx->pc = 0x14a684u;
    // NOP
    // 0x14a688: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x14A688u;
    {
        const bool branch_taken_0x14a688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a688) {
            ctx->pc = 0x14A6E8u;
            return;
        }
    }
    ctx->pc = 0x14A690u;
    // 0x14a690: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a694: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a698: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14a69c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14a69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14a6a0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14A6A0u;
    SET_GPR_U32(ctx, 31, 0x14A6A8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14A6A0u, 0x14A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6A8u;
label_14a6a8:
    // 0x14a6a8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14a6ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a6b0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x14a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a6b4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a6b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14a6b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a6bc: 0x0  nop
    ctx->pc = 0x14a6bcu;
    // NOP
    // 0x14a6c0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x14A6C0u;
    {
        const bool branch_taken_0x14a6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a6c0) {
            ctx->pc = 0x14A6E8u;
            return;
        }
    }
    ctx->pc = 0x14A6C8u;
    // 0x14a6c8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a6cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a6d0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x14a6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x14a6d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a6d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a6dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14a6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a6e0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x14A6E0u;
    {
        const bool branch_taken_0x14a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a6e0) {
            ctx->pc = 0x14A80Cu;
            return;
        }
    }
    ctx->pc = 0x14A6E8u;
}
