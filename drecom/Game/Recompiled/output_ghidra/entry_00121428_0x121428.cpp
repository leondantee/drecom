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

// Function: entry_00121428
// Address: 0x121428 - 0x1214b8
void entry_00121428_0x121428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121428_0x121428");
#endif

    switch (ctx->pc) {
        case 0x121430u: goto label_121430;
        case 0x1214a0u: goto label_1214a0;
        default: break;
    }

    ctx->pc = 0x121428u;

    // 0x121428: 0xc067694  jal         func_19DA50
    ctx->pc = 0x121428u;
    SET_GPR_U32(ctx, 31, 0x121430u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x121428u, 0x121430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121430u;
label_121430:
    // 0x121430: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121430u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121434: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x121434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x121438: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x121438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x12143c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12143Cu;
    {
        const bool branch_taken_0x12143c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12143c) {
            ctx->pc = 0x1214B8u;
            return;
        }
    }
    ctx->pc = 0x121444u;
    // 0x121444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121448: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12144c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x12144cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x121450: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x121450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x121454: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121458: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x121458u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x12145c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121460: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12146c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121470: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121474: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x121474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x121478: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12147c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x12147cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x121480: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x121484: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x121488: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12148c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x12148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x121490: 0x24a50570  addiu       $a1, $a1, 0x570
    ctx->pc = 0x121490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1392));
    // 0x121494: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121494u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121498: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121498u;
    SET_GPR_U32(ctx, 31, 0x1214A0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121498u, 0x1214A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214A0u;
label_1214a0:
    // 0x1214a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1214a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1214a4: 0x9206009e  lbu         $a2, 0x9E($s0)
    ctx->pc = 0x1214a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x1214a8: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1214a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1214ac: 0xa204009e  sb          $a0, 0x9E($s0)
    ctx->pc = 0x1214acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 4));
    // 0x1214b0: 0x1000061f  b           . + 4 + (0x61F << 2)
    ctx->pc = 0x1214B0u;
    {
        const bool branch_taken_0x1214b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214b0) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1214B8u;
}
