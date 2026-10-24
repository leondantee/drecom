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

// Function: entry_0020cf38
// Address: 0x20cf38 - 0x20cfe0
void entry_0020cf38_0x20cf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cf38_0x20cf38");
#endif

    switch (ctx->pc) {
        case 0x20cf44u: goto label_20cf44;
        default: break;
    }

    ctx->pc = 0x20cf38u;

    // 0x20cf38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf3c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20CF3Cu;
    SET_GPR_U32(ctx, 31, 0x20CF44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20CF3Cu, 0x20CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF44u;
label_20cf44:
    // 0x20cf44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20cf48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20cf4c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x20CF4Cu;
    {
        const bool branch_taken_0x20cf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf4c) {
            ctx->pc = 0x20CFE0u;
            return;
        }
    }
    ctx->pc = 0x20CF54u;
    // 0x20cf54: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x20cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x20cf58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cf58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cf5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf60: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x20cf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x20cf64: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
    // 0x20cf68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20cf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20cf6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cf6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cf70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf74: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x20cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x20cf78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cf7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20cf80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20cf84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20cf88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cf8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20cf90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cf94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cf98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20cf98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cf9c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20cfa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfa4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x20cfa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfac: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20cfacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cfb0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfb4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x20cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20cfb8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x20cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20cfbc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x20cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20cfc0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20cfc4: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x20cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x20cfc8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x20cfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x20cfcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cfd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cfd4: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x20cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
    // 0x20cfd8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20CFD8u;
    {
        const bool branch_taken_0x20cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfd8) {
            ctx->pc = 0x20CFE0u;
            return;
        }
    }
    ctx->pc = 0x20CFE0u;
}
