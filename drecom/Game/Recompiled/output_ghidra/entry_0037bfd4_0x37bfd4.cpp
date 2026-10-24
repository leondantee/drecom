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

// Function: entry_0037bfd4
// Address: 0x37bfd4 - 0x37c06c
void entry_0037bfd4_0x37bfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037bfd4_0x37bfd4");
#endif

    switch (ctx->pc) {
        case 0x37bfe4u: goto label_37bfe4;
        case 0x37c010u: goto label_37c010;
        case 0x37c040u: goto label_37c040;
        case 0x37c068u: goto label_37c068;
        default: break;
    }

    ctx->pc = 0x37bfd4u;

    // 0x37bfd4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bfd8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bfd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bfdc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BFDCu;
    SET_GPR_U32(ctx, 31, 0x37BFE4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BFDCu, 0x37BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFE4u;
label_37bfe4:
    // 0x37bfe4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bfe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37bfec: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bff0: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x37bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x37bff4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37bff8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37bffc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37c000: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37c004: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37c004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37c008: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37C008u;
    SET_GPR_U32(ctx, 31, 0x37C010u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37C008u, 0x37C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C010u;
label_37c010:
    // 0x37c010: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37c010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37c014: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37c014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37c018: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37c01c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37c020: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37c024: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37c024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37c028: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x37c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37c02c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37c030: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37c034: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37c034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37c038: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37C038u;
    SET_GPR_U32(ctx, 31, 0x37C040u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37C038u, 0x37C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C040u;
label_37c040:
    // 0x37c040: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37c040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37c044: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37c044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37c048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37c048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37c04c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37c050: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37c050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37c054: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37c054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37c058: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37c058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37c05c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37c05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37c060: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37C060u;
    SET_GPR_U32(ctx, 31, 0x37C068u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37C060u, 0x37C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C068u;
label_37c068:
    // 0x37c068: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37c068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x37c06cu;
}
