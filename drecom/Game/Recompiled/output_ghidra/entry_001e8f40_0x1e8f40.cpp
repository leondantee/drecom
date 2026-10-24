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

// Function: entry_001e8f40
// Address: 0x1e8f40 - 0x1e8f98
void entry_001e8f40_0x1e8f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8f40_0x1e8f40");
#endif

    switch (ctx->pc) {
        case 0x1e8f8cu: goto label_1e8f8c;
        default: break;
    }

    ctx->pc = 0x1e8f40u;

    // 0x1e8f40: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e8f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f44: 0xc4c01200  lwc1        $f0, 0x1200($a2)
    ctx->pc = 0x1e8f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8f48: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e8f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e8f4c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f50: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e8f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8f54: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e8f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e8f58: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8f5c: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e8f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8f60: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e8f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e8f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8f6c: 0x0  nop
    ctx->pc = 0x1e8f6cu;
    // NOP
    // 0x1e8f70: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e8f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e8f74: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8f78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8f78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8f7c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e8f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e8f80: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8f80u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8f84: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8F84u;
    SET_GPR_U32(ctx, 31, 0x1E8F8Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8F84u, 0x1E8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F8Cu;
label_1e8f8c:
    // 0x1e8f8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8f8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8f90: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8F90u;
    SET_GPR_U32(ctx, 31, 0x1E8F98u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8F90u, 0x1E8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F98u;
}
