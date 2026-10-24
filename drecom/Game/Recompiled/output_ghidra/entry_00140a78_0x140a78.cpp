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

// Function: entry_00140a78
// Address: 0x140a78 - 0x140af8
void entry_00140a78_0x140a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140a78_0x140a78");
#endif

    switch (ctx->pc) {
        case 0x140a80u: goto label_140a80;
        case 0x140a88u: goto label_140a88;
        case 0x140ad0u: goto label_140ad0;
        default: break;
    }

    ctx->pc = 0x140a78u;

    // 0x140a78: 0xc053620  jal         func_14D880
    ctx->pc = 0x140A78u;
    SET_GPR_U32(ctx, 31, 0x140A80u);
    ctx->pc = 0x14D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D880u, 0x140A78u, 0x140A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A80u;
label_140a80:
    // 0x140a80: 0xc050348  jal         func_140D20
    ctx->pc = 0x140A80u;
    SET_GPR_U32(ctx, 31, 0x140A88u);
    ctx->pc = 0x140D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D20u, 0x140A80u, 0x140A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A88u;
label_140a88:
    // 0x140a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140a8c: 0x8c231a44  lw          $v1, 0x1A44($at)
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A44u));
    // 0x140a90: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x140a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x140a94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140a98: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x140A98u;
    {
        const bool branch_taken_0x140a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a98) {
            ctx->pc = 0x140B0Cu;
            return;
        }
    }
    ctx->pc = 0x140AA0u;
    // 0x140aa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140aa4: 0x8c225170  lw          $v0, 0x5170($at)
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385170u));
    // 0x140aa8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x140AA8u;
    {
        const bool branch_taken_0x140aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140aa8) {
            ctx->pc = 0x140AF8u;
            return;
        }
    }
    ctx->pc = 0x140AB0u;
    // 0x140ab0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x140ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x140ab4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x140ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x140ab8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140abc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140ac0: 0xc420dc94  lwc1        $f0, -0x236C($at)
    ctx->pc = 0x140ac0u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ac4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x140ac4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x140ac8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x140AC8u;
    SET_GPR_U32(ctx, 31, 0x140AD0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x140AC8u, 0x140AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AD0u;
label_140ad0:
    // 0x140ad0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140ad4: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x140ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x140ad8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140adc: 0x8c220110  lw          $v0, 0x110($at)
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0110u));
    // 0x140ae0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x140ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x140ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140ae8: 0xac220110  sw          $v0, 0x110($at)
    ctx->pc = 0x140ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0110u, _value); } while (0);
    // 0x140aec: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x140aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x140af0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140af4: 0xac225170  sw          $v0, 0x5170($at)
    ctx->pc = 0x140af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385170u, _value); } while (0);
    ctx->pc = 0x140af8u;
}
