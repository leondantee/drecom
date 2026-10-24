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

// Function: entry_001f4410
// Address: 0x1f4410 - 0x1f4494
void entry_001f4410_0x1f4410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4410_0x1f4410");
#endif

    switch (ctx->pc) {
        case 0x1f444cu: goto label_1f444c;
        default: break;
    }

    ctx->pc = 0x1f4410u;

    // 0x1f4410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4418: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f4418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f441c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4420: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4424: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1f4424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4428: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1f4428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1f442c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4430: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4434: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f4434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f4438: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1f4438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1f443c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f443cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4440: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f4440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f4444: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F4444u;
    SET_GPR_U32(ctx, 31, 0x1F444Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F4444u, 0x1F444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F444Cu;
label_1f444c:
    // 0x1f444c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f444cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f4450: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4454: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1f4454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f4458: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f4458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f445c: 0x34632018  ori         $v1, $v1, 0x2018
    ctx->pc = 0x1f445cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8216);
    // 0x1f4460: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1f4460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1f4464: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f4464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f4468: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f446c: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x1f446cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f4470: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4474: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1f4474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f4478: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1f4478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f447c: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x1f447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x1f4480: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4480u;
    {
        const bool branch_taken_0x1f4480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4480) {
            ctx->pc = 0x1F4494u;
            return;
        }
    }
    ctx->pc = 0x1F4488u;
    // 0x1f4488: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f4488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f448c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4490: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f4490u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f4494u;
}
