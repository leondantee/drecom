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

// Function: caseD_2
// Address: 0x227d4c - 0x227dcc
void caseD_2_0x227d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x227d4c");
#endif

    switch (ctx->pc) {
        case 0x227d5cu: goto label_227d5c;
        case 0x227d80u: goto label_227d80;
        case 0x227da0u: goto label_227da0;
        default: break;
    }

    ctx->pc = 0x227d4cu;

    // 0x227d4c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227d50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x227d50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227d54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x227D54u;
    SET_GPR_U32(ctx, 31, 0x227D5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227D54u, 0x227D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D5Cu;
label_227d5c:
    // 0x227d5c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x227d60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x227d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x227d64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x227d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x227d68: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227d6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227d70: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x227d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227d74: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x227d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x227d78: 0xc058f50  jal         func_163D40
    ctx->pc = 0x227D78u;
    SET_GPR_U32(ctx, 31, 0x227D80u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x227D78u, 0x227D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D80u;
label_227d80:
    // 0x227d80: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227d84: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x227d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x227d88: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x227d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x227d8c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x227d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x227d90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227d94: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227d98: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x227D98u;
    SET_GPR_U32(ctx, 31, 0x227DA0u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x227D98u, 0x227DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DA0u;
label_227da0:
    // 0x227da0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227da4: 0x94850a00  lhu         $a1, 0xA00($a0)
    ctx->pc = 0x227da4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
    // 0x227da8: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x227da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x227dac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x227DACu;
    {
        const bool branch_taken_0x227dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x227dac) {
            ctx->pc = 0x227DCCu;
            return;
        }
    }
    ctx->pc = 0x227DB4u;
    // 0x227db4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x227db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227db8: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x227db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227dbc: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x227dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x227dc0: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x227dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227dc4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x227DC4u;
    SET_GPR_U32(ctx, 31, 0x227DCCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x227DC4u, 0x227DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DCCu;
}
