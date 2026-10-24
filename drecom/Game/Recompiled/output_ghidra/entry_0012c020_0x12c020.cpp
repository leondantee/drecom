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

// Function: entry_0012c020
// Address: 0x12c020 - 0x12c0cc
void entry_0012c020_0x12c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c020_0x12c020");
#endif

    switch (ctx->pc) {
        case 0x12c040u: goto label_12c040;
        case 0x12c050u: goto label_12c050;
        case 0x12c068u: goto label_12c068;
        case 0x12c0a0u: goto label_12c0a0;
        default: break;
    }

    ctx->pc = 0x12c020u;

    // 0x12c020: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c024: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c028: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x12c028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x12c02c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c030: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c034: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12c038: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12C038u;
    SET_GPR_U32(ctx, 31, 0x12C040u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12C040u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12C040u) { return; }
    ctx->pc = 0x12C040u;
label_12c040:
    // 0x12c040: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c048: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12C048u;
    SET_GPR_U32(ctx, 31, 0x12C050u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C048u, 0x12C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C050u;
label_12c050:
    // 0x12c050: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c054: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c058: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12c05c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12c060: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12C060u;
    SET_GPR_U32(ctx, 31, 0x12C068u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12C060u, 0x12C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C068u;
label_12c068:
    // 0x12c068: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c068u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c06c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c070: 0xc48112a0  lwc1        $f1, 0x12A0($a0)
    ctx->pc = 0x12c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c074: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c078: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c07c: 0xe48012a0  swc1        $f0, 0x12A0($a0)
    ctx->pc = 0x12c07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4768), bits); }
    // 0x12c080: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c084: 0xc46112a8  lwc1        $f1, 0x12A8($v1)
    ctx->pc = 0x12c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c088: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c08c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c090: 0xe46012a8  swc1        $f0, 0x12A8($v1)
    ctx->pc = 0x12c090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4776), bits); }
    // 0x12c094: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c098: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12C098u;
    SET_GPR_U32(ctx, 31, 0x12C0A0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C098u, 0x12C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0A0u;
label_12c0a0:
    // 0x12c0a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c0a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c0a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c0a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12c0a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12c0ac: 0x106001a5  beqz        $v1, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x12C0ACu;
    {
        const bool branch_taken_0x12c0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c0ac) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C0B4u;
    // 0x12c0b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c0b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12c0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12c0bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12c0c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12c0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c0c4: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x12C0C4u;
    {
        const bool branch_taken_0x12c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c0c4) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C0CCu;
}
