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

// Function: entry_00298888
// Address: 0x298888 - 0x2988e4
void entry_00298888_0x298888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298888_0x298888");
#endif

    switch (ctx->pc) {
        case 0x2988b0u: goto label_2988b0;
        default: break;
    }

    ctx->pc = 0x298888u;

    // 0x298888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29888c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x29888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298894: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x298894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x298898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29889c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29889cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2988a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2988a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2988a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2988a8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2988A8u;
    SET_GPR_U32(ctx, 31, 0x2988B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2988A8u, 0x2988B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988B0u;
label_2988b0:
    // 0x2988b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2988b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988b4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2988b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2988b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2988b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2988bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2988bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2988c0: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2988C0u;
    {
        const bool branch_taken_0x2988c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2988c0) {
            ctx->pc = 0x29896Cu;
            return;
        }
    }
    ctx->pc = 0x2988C8u;
    // 0x2988c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2988c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2988cc: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2988CCu;
    {
        const bool branch_taken_0x2988cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2988cc) {
            ctx->pc = 0x2988ECu;
            return;
        }
    }
    ctx->pc = 0x2988D4u;
    // 0x2988d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2988D4u;
    {
        const bool branch_taken_0x2988d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2988d4) {
            ctx->pc = 0x2988E4u;
            return;
        }
    }
    ctx->pc = 0x2988DCu;
    // 0x2988dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2988DCu;
    {
        const bool branch_taken_0x2988dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2988dc) {
            ctx->pc = 0x298A48u;
            return;
        }
    }
    ctx->pc = 0x2988E4u;
}
