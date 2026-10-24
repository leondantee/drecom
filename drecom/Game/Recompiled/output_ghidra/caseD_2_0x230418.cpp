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

// Function: caseD_2
// Address: 0x230418 - 0x2304ac
void caseD_2_0x230418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x230418");
#endif

    switch (ctx->pc) {
        case 0x230424u: goto label_230424;
        case 0x230454u: goto label_230454;
        case 0x23045cu: goto label_23045c;
        case 0x230478u: goto label_230478;
        default: break;
    }

    ctx->pc = 0x230418u;

    // 0x230418: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23041c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23041Cu;
    SET_GPR_U32(ctx, 31, 0x230424u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23041Cu, 0x230424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230424u;
label_230424:
    // 0x230424: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230428: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x230428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23042c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x23042Cu;
    {
        const bool branch_taken_0x23042c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23042c) {
            ctx->pc = 0x2304ACu;
            return;
        }
    }
    ctx->pc = 0x230434u;
    // 0x230434: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230438: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23043c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x230440: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x230440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x230444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23044c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23044Cu;
    SET_GPR_U32(ctx, 31, 0x230454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23044Cu, 0x230454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230454u;
label_230454:
    // 0x230454: 0xc067694  jal         func_19DA50
    ctx->pc = 0x230454u;
    SET_GPR_U32(ctx, 31, 0x23045Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230454u, 0x23045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23045Cu;
label_23045c:
    // 0x23045c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x230460: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x230460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x230464: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x230464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x230468: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23046c: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x23046cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
    // 0x230470: 0xc067694  jal         func_19DA50
    ctx->pc = 0x230470u;
    SET_GPR_U32(ctx, 31, 0x230478u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230470u, 0x230478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230478u;
label_230478:
    // 0x230478: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x230478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23047c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x230480: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x230480u;
    {
        const bool branch_taken_0x230480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230480) {
            ctx->pc = 0x2304ACu;
            return;
        }
    }
    ctx->pc = 0x230488u;
    // 0x230488: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23048c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x230490: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x230490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x230494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230498: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x23049c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2304a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2304a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2304a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2304A4u;
    SET_GPR_U32(ctx, 31, 0x2304ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2304A4u, 0x2304ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304ACu;
}
