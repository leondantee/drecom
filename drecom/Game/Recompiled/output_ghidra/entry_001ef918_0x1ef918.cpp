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

// Function: entry_001ef918
// Address: 0x1ef918 - 0x1ef968
void entry_001ef918_0x1ef918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef918_0x1ef918");
#endif

    switch (ctx->pc) {
        case 0x1ef95cu: goto label_1ef95c;
        default: break;
    }

    ctx->pc = 0x1ef918u;

    // 0x1ef918: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef91c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef920: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ef924: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ef924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ef928: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF928u;
    {
        const bool branch_taken_0x1ef928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef928) {
            ctx->pc = 0x1EF968u;
            return;
        }
    }
    ctx->pc = 0x1EF930u;
    // 0x1ef930: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef934: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ef934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef93c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef940: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef944: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ef944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef948: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef94c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef950: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef954: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF954u;
    SET_GPR_U32(ctx, 31, 0x1EF95Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF954u, 0x1EF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF95Cu;
label_1ef95c:
    // 0x1ef95c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ef95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1ef960: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF960u;
    {
        const bool branch_taken_0x1ef960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef960) {
            ctx->pc = 0x1EF9ACu;
            return;
        }
    }
    ctx->pc = 0x1EF968u;
}
