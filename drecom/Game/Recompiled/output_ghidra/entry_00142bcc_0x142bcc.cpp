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

// Function: entry_00142bcc
// Address: 0x142bcc - 0x142c54
void entry_00142bcc_0x142bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142bcc_0x142bcc");
#endif

    switch (ctx->pc) {
        case 0x142be0u: goto label_142be0;
        case 0x142c24u: goto label_142c24;
        case 0x142c30u: goto label_142c30;
        default: break;
    }

    ctx->pc = 0x142bccu;

    // 0x142bcc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142bd0: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142bd4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x142bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x142bd8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x142BD8u;
    SET_GPR_U32(ctx, 31, 0x142BE0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142BD8u, 0x142BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BE0u;
label_142be0:
    // 0x142be0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x142be4: 0x245190e0  addiu       $s1, $v0, -0x6F20
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
    // 0x142be8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142bec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x142becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90E0u, _value); } while (0);
    // 0x142bf0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x142bf4: 0x34821043  ori         $v0, $a0, 0x1043
    ctx->pc = 0x142bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4163);
    // 0x142bf8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x142bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90E4u, _value); } while (0);
    // 0x142bfc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x142bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x142c00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142c04: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x142c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x142c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142c0c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x142c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x142c10: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142c14: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142c18: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x142c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x142c1c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x142C1Cu;
    SET_GPR_U32(ctx, 31, 0x142C24u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142C1Cu, 0x142C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C24u;
label_142c24:
    // 0x142c24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142c28: 0xc06750c  jal         func_19D430
    ctx->pc = 0x142C28u;
    SET_GPR_U32(ctx, 31, 0x142C30u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x142C28u, 0x142C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C30u;
label_142c30:
    // 0x142c30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142c34: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x142c34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x142c38: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142C38u;
    {
        const bool branch_taken_0x142c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c38) {
            ctx->pc = 0x142C54u;
            return;
        }
    }
    ctx->pc = 0x142C40u;
    // 0x142c40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x142c44: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x142c48: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x142c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142C4Cu;
    {
        const bool branch_taken_0x142c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c4c) {
            ctx->pc = 0x142C60u;
            return;
        }
    }
    ctx->pc = 0x142C54u;
}
