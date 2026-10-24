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

// Function: entry_00132624
// Address: 0x132624 - 0x132670
void entry_00132624_0x132624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132624_0x132624");
#endif

    switch (ctx->pc) {
        case 0x13262cu: goto label_13262c;
        case 0x132660u: goto label_132660;
        default: break;
    }

    ctx->pc = 0x132624u;

    // 0x132624: 0xc067694  jal         func_19DA50
    ctx->pc = 0x132624u;
    SET_GPR_U32(ctx, 31, 0x13262Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x132624u, 0x13262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13262Cu;
label_13262c:
    // 0x13262c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x132630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x132634: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x132634u;
    {
        const bool branch_taken_0x132634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132634) {
            ctx->pc = 0x132670u;
            return;
        }
    }
    ctx->pc = 0x13263Cu;
    // 0x13263c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132640: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x132640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132644: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x132644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x132648: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x132648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13264c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13264cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132650: 0x0  nop
    ctx->pc = 0x132650u;
    // NOP
    // 0x132654: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x132654u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132658: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x132658u;
    SET_GPR_U32(ctx, 31, 0x132660u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x132658u, 0x132660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132660u;
label_132660:
    // 0x132660: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132664: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x132664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x132668: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x132668u;
    {
        const bool branch_taken_0x132668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132668) {
            ctx->pc = 0x13269Cu;
            return;
        }
    }
    ctx->pc = 0x132670u;
}
