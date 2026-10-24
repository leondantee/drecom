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
// Address: 0x2a7038 - 0x2a7130
void caseD_4_0x2a7038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2a7038");
#endif

    switch (ctx->pc) {
        case 0x2a7050u: goto label_2a7050;
        case 0x2a7060u: goto label_2a7060;
        case 0x2a7074u: goto label_2a7074;
        case 0x2a70b4u: goto label_2a70b4;
        case 0x2a7114u: goto label_2a7114;
        default: break;
    }

    ctx->pc = 0x2a7038u;

    // 0x2a7038: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a703c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2a703cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7040: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7044: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7048: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A7048u;
    SET_GPR_U32(ctx, 31, 0x2A7050u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7048u, 0x2A7050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7050u;
label_2a7050:
    // 0x2a7050: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7054: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7054u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7058: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A7058u;
    SET_GPR_U32(ctx, 31, 0x2A7060u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7058u, 0x2A7060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7060u;
label_2a7060:
    // 0x2a7060: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7064: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a7064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7068: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a7068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a706c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A706Cu;
    SET_GPR_U32(ctx, 31, 0x2A7074u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A706Cu, 0x2A7074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7074u;
label_2a7074:
    // 0x2a7074: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a7074u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7078: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a7078u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a707c: 0x910909e7  lbu         $t1, 0x9E7($t0)
    ctx->pc = 0x2a707cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x2a7080: 0x112000f9  beqz        $t1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2A7080u;
    {
        const bool branch_taken_0x2a7080 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7080) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A7088u;
    // 0x2a7088: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2a7088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a708c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7090: 0xa04a0002  sb          $t2, 0x2($v0)
    ctx->pc = 0x2a7090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 10));
    // 0x2a7094: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7098: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a709c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a709cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a70a0: 0x3406f01e  ori         $a2, $zero, 0xF01E
    ctx->pc = 0x2a70a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61470);
    // 0x2a70a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a70a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a70a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a70a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a70ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A70ACu;
    SET_GPR_U32(ctx, 31, 0x2A70B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A70ACu, 0x2A70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70B4u;
label_2a70b4:
    // 0x2a70b4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a70b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a70b8: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a70b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a70bc: 0xa5001278  sh          $zero, 0x1278($t0)
    ctx->pc = 0x2a70bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a70c0: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a70c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a70c4: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x2a70c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2a70c8: 0x35420040  ori         $v0, $t2, 0x40
    ctx->pc = 0x2a70c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
    // 0x2a70cc: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x2a70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x2a70d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a70d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a70d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a70d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a70d8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a70dc: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2a70dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2a70e0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a70e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a70e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a70e8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a70ec: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x2a70ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
    // 0x2a70f0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a70f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a70f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a70f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a70f8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a70f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a70fc: 0xe4e001a8  swc1        $f0, 0x1A8($a3)
    ctx->pc = 0x2a70fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 424), bits); }
    // 0x2a7100: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7104: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a7104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a7108: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a7108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a710c: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x2A710Cu;
    SET_GPR_U32(ctx, 31, 0x2A7114u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2A710Cu, 0x2A7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7114u;
label_2a7114:
    // 0x2a7114: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7114u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7118: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a711c: 0x94e3000e  lhu         $v1, 0xE($a3)
    ctx->pc = 0x2a711cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x2a7120: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2a7120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a7124: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x2a7124u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a7128: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2A7128u;
    {
        const bool branch_taken_0x2a7128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7128) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A7130u;
}
