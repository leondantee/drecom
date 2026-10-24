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

// Function: entry_00220bd4
// Address: 0x220bd4 - 0x220c34
void entry_00220bd4_0x220bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220bd4_0x220bd4");
#endif

    switch (ctx->pc) {
        case 0x220c20u: goto label_220c20;
        case 0x220c2cu: goto label_220c2c;
        default: break;
    }

    ctx->pc = 0x220bd4u;

    // 0x220bd4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220bd8: 0xc4801200  lwc1        $f0, 0x1200($a0)
    ctx->pc = 0x220bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220bdc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x220bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x220be0: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x220be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220be4: 0xc4c01204  lwc1        $f0, 0x1204($a2)
    ctx->pc = 0x220be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220be8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x220be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x220bec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220bf0: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x220bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220bf4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x220bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x220bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x220bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220c00: 0x0  nop
    ctx->pc = 0x220c00u;
    // NOP
    // 0x220c04: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x220c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x220c08: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220c0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220c0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220c10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x220c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x220c14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220c14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220c18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220C18u;
    SET_GPR_U32(ctx, 31, 0x220C20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220C18u, 0x220C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C20u;
label_220c20:
    // 0x220c20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220c24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220C24u;
    SET_GPR_U32(ctx, 31, 0x220C2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220C24u, 0x220C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C2Cu;
label_220c2c:
    // 0x220c2c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x220C2Cu;
    {
        const bool branch_taken_0x220c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c2c) {
            ctx->pc = 0x220FBCu;
            return;
        }
    }
    ctx->pc = 0x220C34u;
}
