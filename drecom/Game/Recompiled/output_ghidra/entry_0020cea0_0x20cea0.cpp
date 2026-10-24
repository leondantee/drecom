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

// Function: entry_0020cea0
// Address: 0x20cea0 - 0x20cf24
void entry_0020cea0_0x20cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cea0_0x20cea0");
#endif

    switch (ctx->pc) {
        case 0x20cec4u: goto label_20cec4;
        case 0x20cedcu: goto label_20cedc;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cf1cu: goto label_20cf1c;
        default: break;
    }

    ctx->pc = 0x20cea0u;

    // 0x20cea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cea8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20ceac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20ceb0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20ceb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20ceb4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x20ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ceb8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x20ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20cebc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20CEBCu;
    SET_GPR_U32(ctx, 31, 0x20CEC4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20CEBCu, 0x20CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEC4u;
label_20cec4:
    // 0x20cec4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cec8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20cec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20cecc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ced0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ced0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ced4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20CED4u;
    SET_GPR_U32(ctx, 31, 0x20CEDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20CED4u, 0x20CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEDCu;
label_20cedc:
    // 0x20cedc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cee0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cee4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cee8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20CEE8u;
    SET_GPR_U32(ctx, 31, 0x20CEF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20CEE8u, 0x20CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEF0u;
label_20cef0:
    // 0x20cef0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cef4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20cef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20cef8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cefc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20cf00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CF00u;
    {
        const bool branch_taken_0x20cf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf00) {
            ctx->pc = 0x20CF24u;
            return;
        }
    }
    ctx->pc = 0x20CF08u;
    // 0x20cf08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20cf08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cf0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20cf14: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20CF14u;
    SET_GPR_U32(ctx, 31, 0x20CF1Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20CF14u, 0x20CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF1Cu;
label_20cf1c:
    // 0x20cf1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20CF1Cu;
    {
        const bool branch_taken_0x20cf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf1c) {
            ctx->pc = 0x20CF38u;
            return;
        }
    }
    ctx->pc = 0x20CF24u;
}
