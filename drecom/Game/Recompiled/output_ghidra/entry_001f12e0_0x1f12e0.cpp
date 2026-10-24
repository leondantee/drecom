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

// Function: entry_001f12e0
// Address: 0x1f12e0 - 0x1f1340
void entry_001f12e0_0x1f12e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f12e0_0x1f12e0");
#endif

    switch (ctx->pc) {
        case 0x1f1334u: goto label_1f1334;
        default: break;
    }

    ctx->pc = 0x1f12e0u;

    // 0x1f12e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f12e4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1f12e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1f12e8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F12E8u;
    {
        const bool branch_taken_0x1f12e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f12e8) {
            ctx->pc = 0x1F13A4u;
            return;
        }
    }
    ctx->pc = 0x1F12F0u;
    // 0x1f12f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f12f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f12f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f12fc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f12fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f1300: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F1340u;
            return;
        }
    }
    ctx->pc = 0x1F1308u;
    // 0x1f1308: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f130c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f130cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1310: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1314: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1318: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f131c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1320: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f1320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1324: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1328: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f1328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f132c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F132Cu;
    SET_GPR_U32(ctx, 31, 0x1F1334u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F132Cu, 0x1F1334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1334u;
label_1f1334:
    // 0x1f1334: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f1334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1f1338: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1338u;
    {
        const bool branch_taken_0x1f1338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1338) {
            ctx->pc = 0x1F1384u;
            return;
        }
    }
    ctx->pc = 0x1F1340u;
}
