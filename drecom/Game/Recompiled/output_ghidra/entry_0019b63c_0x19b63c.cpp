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

// Function: entry_0019b63c
// Address: 0x19b63c - 0x19b680
void entry_0019b63c_0x19b63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b63c_0x19b63c");
#endif

    switch (ctx->pc) {
        case 0x19b678u: goto label_19b678;
        default: break;
    }

    ctx->pc = 0x19b63cu;

    // 0x19b63c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b640: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b648: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b64c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19B64Cu;
    {
        const bool branch_taken_0x19b64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b64c) {
            ctx->pc = 0x19B680u;
            return;
        }
    }
    ctx->pc = 0x19B654u;
    // 0x19b654: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b658: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b65c: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x19b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x19b660: 0x34427207  ori         $v0, $v0, 0x7207
    ctx->pc = 0x19b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29191);
    // 0x19b664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b668: 0x0  nop
    ctx->pc = 0x19b668u;
    // NOP
    // 0x19b66c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x19b66cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19b670: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x19B670u;
    SET_GPR_U32(ctx, 31, 0x19B678u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19B670u, 0x19B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B678u;
label_19b678:
    // 0x19b678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b67c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x19b67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x19b680u;
}
