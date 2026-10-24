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

// Function: entry_00187310
// Address: 0x187310 - 0x187354
void entry_00187310_0x187310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187310_0x187310");
#endif

    switch (ctx->pc) {
        case 0x187320u: goto label_187320;
        default: break;
    }

    ctx->pc = 0x187310u;

    // 0x187310: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x187310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x187314: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x187314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x187318: 0xc061ed8  jal         func_187B60
    ctx->pc = 0x187318u;
    SET_GPR_U32(ctx, 31, 0x187320u);
    ctx->pc = 0x187B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187B60u, 0x187318u, 0x187320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187320u;
label_187320:
    // 0x187320: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x187320u;
    {
        const bool branch_taken_0x187320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187320) {
            ctx->pc = 0x187354u;
            return;
        }
    }
    ctx->pc = 0x187328u;
    // 0x187328: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18732c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18732cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x187330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187334: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187338: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x18733c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x18733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187348: 0xac220af8  sw          $v0, 0xAF8($at)
    ctx->pc = 0x187348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AF8u, _value); } while (0);
    // 0x18734c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18734Cu;
    {
        const bool branch_taken_0x18734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18734c) {
            ctx->pc = 0x18738Cu;
            return;
        }
    }
    ctx->pc = 0x187354u;
}
