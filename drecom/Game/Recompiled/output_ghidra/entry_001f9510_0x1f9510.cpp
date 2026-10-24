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

// Function: entry_001f9510
// Address: 0x1f9510 - 0x1f95a0
void entry_001f9510_0x1f9510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9510_0x1f9510");
#endif

    switch (ctx->pc) {
        case 0x1f9558u: goto label_1f9558;
        case 0x1f9568u: goto label_1f9568;
        case 0x1f9578u: goto label_1f9578;
        case 0x1f9598u: goto label_1f9598;
        default: break;
    }

    ctx->pc = 0x1f9510u;

    // 0x1f9510: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1f9510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9514: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9518: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f9518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1f951c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f9520: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f9520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f9524: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f9524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f9528: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f9528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f952c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f9530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f9530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f9534: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f9534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f9538: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f9538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f953c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f953cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f9540: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1f9540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f9544: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f9544u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9548: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1f9548u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f954c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f954cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9550: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F9550u;
    SET_GPR_U32(ctx, 31, 0x1F9558u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F9550u, 0x1F9558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9558u;
label_1f9558:
    // 0x1f9558: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f9558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f955c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1f955cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1f9560: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F9560u;
    SET_GPR_U32(ctx, 31, 0x1F9568u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F9560u, 0x1F9568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9568u;
label_1f9568:
    // 0x1f9568: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f9568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f956c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1f956cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1f9570: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F9570u;
    SET_GPR_U32(ctx, 31, 0x1F9578u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F9570u, 0x1F9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9578u;
label_1f9578:
    // 0x1f9578: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f957c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f9580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f9584: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f9584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f9588: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1f9588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f958c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f958cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9590: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F9590u;
    SET_GPR_U32(ctx, 31, 0x1F9598u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F9590u, 0x1F9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9598u;
label_1f9598:
    // 0x1f9598: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1F9598u;
    {
        const bool branch_taken_0x1f9598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9598) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F95A0u;
}
