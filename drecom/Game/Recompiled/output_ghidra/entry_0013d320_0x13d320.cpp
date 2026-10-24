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

// Function: entry_0013d320
// Address: 0x13d320 - 0x13d3d0
void entry_0013d320_0x13d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d320_0x13d320");
#endif

    switch (ctx->pc) {
        case 0x13d348u: goto label_13d348;
        case 0x13d374u: goto label_13d374;
        default: break;
    }

    ctx->pc = 0x13d320u;

label_13d320:
    // 0x13d320: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13d320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13d324: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d328: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13d328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13d32c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13d330: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x13d330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d334: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x13d334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13d338: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13d338u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13d33c: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x13d33cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d340: 0xc04f5ac  jal         func_13D6B0
    ctx->pc = 0x13D340u;
    SET_GPR_U32(ctx, 31, 0x13D348u);
    ctx->pc = 0x13D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6B0u, 0x13D340u, 0x13D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D348u;
label_13d348:
    // 0x13d348: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x13d348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13d34c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13d34cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13d350: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d354: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13d354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13d358: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13d35c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x13d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d360: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x13d360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x13d364: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13d364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13d368: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x13d368u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13d36c: 0xc04f638  jal         func_13D8E0
    ctx->pc = 0x13D36Cu;
    SET_GPR_U32(ctx, 31, 0x13D374u);
    ctx->pc = 0x13D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D8E0u, 0x13D36Cu, 0x13D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D374u;
label_13d374:
    // 0x13d374: 0x267300c0  addiu       $s3, $s3, 0xC0
    ctx->pc = 0x13d374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x13d378: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x13d378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x13d37c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d380: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d384: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13d384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d388: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x13d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x13d38c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x13d38cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13d394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d398: 0x1c40ffe1  bgtz        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x13D398u;
    {
        const bool branch_taken_0x13d398 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13d398) {
            ctx->pc = 0x13D320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d320;
        }
    }
    ctx->pc = 0x13D3A0u;
    // 0x13d3a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d3a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d3a8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x13d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x13d3ac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13d3b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D3B0u;
    {
        const bool branch_taken_0x13d3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d3b0) {
            ctx->pc = 0x13D3D0u;
            return;
        }
    }
    ctx->pc = 0x13D3B8u;
    // 0x13d3b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d3bc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13d3c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d3c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d3cc: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x13d3d0u;
}
