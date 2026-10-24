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

// Function: caseD_1
// Address: 0x14c058 - 0x14c09c
void caseD_1_0x14c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14c058");
#endif

    switch (ctx->pc) {
        case 0x14c094u: goto label_14c094;
        default: break;
    }

    ctx->pc = 0x14c058u;

    // 0x14c058: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c05c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x14c05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x14c060: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14c064: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14c064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14c068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14C068u;
    {
        const bool branch_taken_0x14c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c068) {
            ctx->pc = 0x14C09Cu;
            return;
        }
    }
    ctx->pc = 0x14C070u;
    // 0x14c070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c074: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c078: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x14c078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x14c07c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14c080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c084: 0x0  nop
    ctx->pc = 0x14c084u;
    // NOP
    // 0x14c088: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x14c088u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14c08c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14C08Cu;
    SET_GPR_U32(ctx, 31, 0x14C094u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14C08Cu, 0x14C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C094u;
label_14c094:
    // 0x14c094: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c098: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14c098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x14c09cu;
}
