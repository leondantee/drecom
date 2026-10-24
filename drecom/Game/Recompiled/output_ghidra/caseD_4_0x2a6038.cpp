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

// Function: caseD_4
// Address: 0x2a6038 - 0x2a613c
void caseD_4_0x2a6038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2a6038");
#endif

    switch (ctx->pc) {
        case 0x2a6058u: goto label_2a6058;
        case 0x2a6068u: goto label_2a6068;
        case 0x2a6074u: goto label_2a6074;
        case 0x2a60bcu: goto label_2a60bc;
        case 0x2a6124u: goto label_2a6124;
        default: break;
    }

    ctx->pc = 0x2a6038u;

    // 0x2a6038: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a603c: 0xa10010a8  sb          $zero, 0x10A8($t0)
    ctx->pc = 0x2a603cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6040: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6044: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a6044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a6048: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x2a6048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a604c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2a604cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a6050: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A6050u;
    SET_GPR_U32(ctx, 31, 0x2A6058u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6050u, 0x2A6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6058u;
label_2a6058:
    // 0x2a6058: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a605c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a605cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6060: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A6060u;
    SET_GPR_U32(ctx, 31, 0x2A6068u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6060u, 0x2A6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6068u;
label_2a6068:
    // 0x2a6068: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a606c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A606Cu;
    SET_GPR_U32(ctx, 31, 0x2A6074u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A606Cu, 0x2A6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6074u;
label_2a6074:
    // 0x2a6074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6078: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a607c: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x2a607cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x2a6080: 0x10c000f4  beqz        $a2, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2A6080u;
    {
        const bool branch_taken_0x2a6080 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6080) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A6088u;
    // 0x2a6088: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2a6088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a608c: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a608cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6090: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x2a6090u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a6094: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6098: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a6098u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a609c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a609cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a60a0: 0x8d220368  lw          $v0, 0x368($t1)
    ctx->pc = 0x2a60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 872)));
    // 0x2a60a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a60a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a60a8: 0x24061e1e  addiu       $a2, $zero, 0x1E1E
    ctx->pc = 0x2a60a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7710));
    // 0x2a60ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a60acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a60b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a60b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a60b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A60B4u;
    SET_GPR_U32(ctx, 31, 0x2A60BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A60B4u, 0x2A60BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A60BCu;
label_2a60bc:
    // 0x2a60bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a60bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a60c0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a60c4: 0xa4a01278  sh          $zero, 0x1278($a1)
    ctx->pc = 0x2a60c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a60c8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a60c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a60cc: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a60d0: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x2a60d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x2a60d4: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2a60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x2a60d8: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2a60d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2a60dc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a60dcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a60e0: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a60e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a60e4: 0xe54001a0  swc1        $f0, 0x1A0($t2)
    ctx->pc = 0x2a60e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 416), bits); }
    // 0x2a60e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a60ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a60ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a60f0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a60f4: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x2a60f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x2a60f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a60fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a60fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6100: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6104: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x2a6104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x2a6108: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a610c: 0x24a60120  addiu       $a2, $a1, 0x120
    ctx->pc = 0x2a610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a6110: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a6114: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6118: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a6118u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a611c: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x2A611Cu;
    SET_GPR_U32(ctx, 31, 0x2A6124u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2A611Cu, 0x2A6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6124u;
label_2a6124:
    // 0x2a6124: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6128: 0x9485000e  lhu         $a1, 0xE($a0)
    ctx->pc = 0x2a6128u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2a612c: 0x34a68000  ori         $a2, $a1, 0x8000
    ctx->pc = 0x2a612cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2a6130: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x2a6130u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a6134: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2A6134u;
    {
        const bool branch_taken_0x2a6134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6134) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A613Cu;
}
