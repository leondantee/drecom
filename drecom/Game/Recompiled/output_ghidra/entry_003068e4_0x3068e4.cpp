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

// Function: entry_003068e4
// Address: 0x3068e4 - 0x30695c
void entry_003068e4_0x3068e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003068e4_0x3068e4");
#endif

    switch (ctx->pc) {
        case 0x306924u: goto label_306924;
        default: break;
    }

    ctx->pc = 0x3068e4u;

    // 0x3068e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068e8: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x3068e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x3068ec: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3068ECu;
    {
        const bool branch_taken_0x3068ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3068ec) {
            ctx->pc = 0x30695Cu;
            return;
        }
    }
    ctx->pc = 0x3068F4u;
    // 0x3068f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3068f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068f8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3068f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3068fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306900: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x306900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x306904: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x306904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x306908: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30690c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x306910: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x306910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306914: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x306914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x306918: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x306918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30691c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30691Cu;
    SET_GPR_U32(ctx, 31, 0x306924u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30691Cu, 0x306924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306924u;
label_306924:
    // 0x306924: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x306924u;
    {
        const bool branch_taken_0x306924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306924) {
            ctx->pc = 0x30695Cu;
            return;
        }
    }
    ctx->pc = 0x30692Cu;
    // 0x30692c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306934: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306938: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x306938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30693c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306940: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306944: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30694c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306950: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306958: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30695cu;
}
