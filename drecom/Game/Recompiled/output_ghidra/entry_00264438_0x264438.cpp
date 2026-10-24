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

// Function: entry_00264438
// Address: 0x264438 - 0x2644c4
void entry_00264438_0x264438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264438_0x264438");
#endif

    switch (ctx->pc) {
        case 0x264488u: goto label_264488;
        case 0x2644a8u: goto label_2644a8;
        default: break;
    }

    ctx->pc = 0x264438u;

    // 0x264438: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x264438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26443c: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x26443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x264440: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x264440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264444: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x264444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x264448: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x264448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26444c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x26444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x264450: 0xac430a68  sw          $v1, 0xA68($v0)
    ctx->pc = 0x264450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2664), GPR_U32(ctx, 3));
    // 0x264454: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x264454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x264458: 0x8c510a68  lw          $s1, 0xA68($v0)
    ctx->pc = 0x264458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x26445c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x26445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x264460: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x264460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264464: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x264468: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x264468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26446c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264470: 0xac511390  sw          $s1, 0x1390($v0)
    ctx->pc = 0x264470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 17));
    // 0x264474: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x264474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x264478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x264478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26447c: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x26447cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x264480: 0xc046314  jal         func_118C50
    ctx->pc = 0x264480u;
    SET_GPR_U32(ctx, 31, 0x264488u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x264488u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x264488u) { return; }
    ctx->pc = 0x264488u;
label_264488:
    // 0x264488: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x264488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26448c: 0x24430a68  addiu       $v1, $v0, 0xA68
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x264490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264494: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x264494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x264498: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x264498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x26449c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x26449cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2644a0: 0xc09909c  jal         func_264270
    ctx->pc = 0x2644A0u;
    SET_GPR_U32(ctx, 31, 0x2644A8u);
    ctx->pc = 0x264270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264270u, 0x2644A0u, 0x2644A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644A8u;
label_2644a8:
    // 0x2644a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2644a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2644acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2644b0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2644B0u;
    {
        const bool branch_taken_0x2644b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2644b0) {
            ctx->pc = 0x2644C4u;
            return;
        }
    }
    ctx->pc = 0x2644B8u;
    // 0x2644b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2644b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2644bc: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2644BCu;
    {
        const bool branch_taken_0x2644bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644bc) {
            ctx->pc = 0x264938u;
            return;
        }
    }
    ctx->pc = 0x2644C4u;
}
