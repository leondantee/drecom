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

// Function: entry_00140c8c
// Address: 0x140c8c - 0x140d00
void entry_00140c8c_0x140c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c8c_0x140c8c");
#endif

    switch (ctx->pc) {
        case 0x140cb4u: goto label_140cb4;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cfcu: goto label_140cfc;
        default: break;
    }

    ctx->pc = 0x140c8cu;

    // 0x140c8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140c90: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140c94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140c98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140c9c: 0x8c228ee8  lw          $v0, -0x7118($at)
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8EE8u));
    // 0x140ca0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140ca4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140ca8: 0xac228ee0  sw          $v0, -0x7120($at)
    ctx->pc = 0x140ca8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EE0u, _value); } while (0);
    // 0x140cac: 0xc0cee0c  jal         func_33B830
    ctx->pc = 0x140CACu;
    SET_GPR_U32(ctx, 31, 0x140CB4u);
    ctx->pc = 0x33B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B830u, 0x140CACu, 0x140CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CB4u;
label_140cb4:
    // 0x140cb4: 0xc056190  jal         func_158640
    ctx->pc = 0x140CB4u;
    SET_GPR_U32(ctx, 31, 0x140CBCu);
    ctx->pc = 0x158640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158640u, 0x140CB4u, 0x140CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CBCu;
label_140cbc:
    // 0x140cbc: 0xc0506cc  jal         func_141B30
    ctx->pc = 0x140CBCu;
    SET_GPR_U32(ctx, 31, 0x140CC4u);
    ctx->pc = 0x141B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B30u, 0x140CBCu, 0x140CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CC4u;
label_140cc4:
    // 0x140cc4: 0xc0562c0  jal         func_158B00
    ctx->pc = 0x140CC4u;
    SET_GPR_U32(ctx, 31, 0x140CCCu);
    ctx->pc = 0x158B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B00u, 0x140CC4u, 0x140CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CCCu;
label_140ccc:
    // 0x140ccc: 0xc0506c8  jal         func_141B20
    ctx->pc = 0x140CCCu;
    SET_GPR_U32(ctx, 31, 0x140CD4u);
    ctx->pc = 0x141B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B20u, 0x140CCCu, 0x140CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CD4u;
label_140cd4:
    // 0x140cd4: 0x92030d84  lbu         $v1, 0xD84($s0)
    ctx->pc = 0x140cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x140cd8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x140cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x140cdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140ce0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140CE0u;
    {
        const bool branch_taken_0x140ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140ce0) {
            ctx->pc = 0x140D00u;
            return;
        }
    }
    ctx->pc = 0x140CE8u;
    // 0x140ce8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x140ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x140cec: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x140cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x140cf0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x140cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x140cf4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x140CF4u;
    SET_GPR_U32(ctx, 31, 0x140CFCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x140CF4u, 0x140CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CFCu;
label_140cfc:
    // 0x140cfc: 0xe6000d80  swc1        $f0, 0xD80($s0)
    ctx->pc = 0x140cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3456), bits); }
    ctx->pc = 0x140d00u;
}
