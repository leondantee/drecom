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

// Function: entry_001fb2a4
// Address: 0x1fb2a4 - 0x1fb350
void entry_001fb2a4_0x1fb2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb2a4_0x1fb2a4");
#endif

    switch (ctx->pc) {
        case 0x1fb2c4u: goto label_1fb2c4;
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb324u: goto label_1fb324;
        default: break;
    }

    ctx->pc = 0x1fb2a4u;

    // 0x1fb2a4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fb2a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fb2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb2b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb2b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb2b8: 0x24660140  addiu       $a2, $v1, 0x140
    ctx->pc = 0x1fb2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x1fb2bc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FB2BCu;
    SET_GPR_U32(ctx, 31, 0x1FB2C4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FB2BCu, 0x1FB2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2C4u;
label_1fb2c4:
    // 0x1fb2c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb2c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb2c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb2cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb2d4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1fb2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fb2d8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fb2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb2dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2e0: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1fb2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fb2e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb2e8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FB2E8u;
    SET_GPR_U32(ctx, 31, 0x1FB2F0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FB2E8u, 0x1FB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2F0u;
label_1fb2f0:
    // 0x1fb2f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb2f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb2f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb2f8: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fb2f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fb2fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb300: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fb300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb304: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb308: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1fb308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb30c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb310: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb314: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb31c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FB31Cu;
    SET_GPR_U32(ctx, 31, 0x1FB324u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FB31Cu, 0x1FB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB324u;
label_1fb324:
    // 0x1fb324: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb328: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fb328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb32c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1fb32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb330: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fb330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fb334: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB334u;
    {
        const bool branch_taken_0x1fb334 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fb334) {
            ctx->pc = 0x1FB350u;
            return;
        }
    }
    ctx->pc = 0x1FB33Cu;
    // 0x1fb33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb340: 0x0  nop
    ctx->pc = 0x1fb340u;
    // NOP
    // 0x1fb344: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fb344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fb348: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB348u;
    {
        const bool branch_taken_0x1fb348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb348) {
            ctx->pc = 0x1FB36Cu;
            return;
        }
    }
    ctx->pc = 0x1FB350u;
}
