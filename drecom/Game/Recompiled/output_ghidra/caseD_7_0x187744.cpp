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

// Function: caseD_7
// Address: 0x187744 - 0x187790
void caseD_7_0x187744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x187744");
#endif

    switch (ctx->pc) {
        case 0x187780u: goto label_187780;
        default: break;
    }

    ctx->pc = 0x187744u;

    // 0x187744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187748: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18774c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x18774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x187750: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x187750u;
    {
        const bool branch_taken_0x187750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187750) {
            ctx->pc = 0x187790u;
            return;
        }
    }
    ctx->pc = 0x187758u;
    // 0x187758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18775c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x18775cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187760: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x187764: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187768: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18776c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187770: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x187770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x187774: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x187774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187778: 0xc061014  jal         func_184050
    ctx->pc = 0x187778u;
    SET_GPR_U32(ctx, 31, 0x187780u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187778u, 0x187780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187780u;
label_187780:
    // 0x187780: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187784: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187788: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x187788u;
    {
        const bool branch_taken_0x187788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187788) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x187790u;
}
